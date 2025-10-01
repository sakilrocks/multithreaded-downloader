#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <string>

class Downloader {
    public:
        static bool downloadFile(const std::string& url, const std::string& outputPath);
    };

#endif