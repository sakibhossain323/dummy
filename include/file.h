#pragma once
#include <string>

class FileHandler
{
    public:
        std::string ReadFile();
        void Write(std::string filepath, std::string);
        void WriteLine(std::string filepath, std::string);
};