
#include "downloader.h"
#include "utils.h"
#include <iostream>
#include <thread>
#include <vector>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "usage: " << argv[0] << " <url1> <url2> ....\n";
        return 1;
    }

    std::vector<std::thread> threads;

    for (int i = 1; i < argc; i++) {
        std::string url = argv[i];
        std::string filename = Utils::getFileNameFromUrl(url);

        threads.emplace_back([url, filename]() {
            std::cout << "downloading " << url << " >> " << filename << std::endl;
            if (Downloader::downloadFile(url, filename)) {
                std::cout << "downloaded " << filename << " successfully.\n";
            } else {
                std::cerr << "failed to download " << url << std::endl;
            }
        });
    }

    for (auto& t : threads) {
        t.join();
    }

    return 0;
}