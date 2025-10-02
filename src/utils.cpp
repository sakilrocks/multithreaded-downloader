
#include "utils.h"
#include <string>

namespace Utils {
    std::string getFileNameFromUrl(const std::string& url) {
        size_t lastSlash = url.find_last_of('/');
        if (lastSlash == std::string::npos) return "downloaded file";
        return url.substr(lastSlash + 1);
    }
}