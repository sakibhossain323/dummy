#include "file.h"
#include <string>

std::string FileHandler::ReadFile()
{
    return "wtf wtf wtf";
}

void FileHandler::Write(std::string filepath, std::string str)
{
    str.push_back('\n');

    FILE *fp = fopen(filepath.c_str(), "w");
    if(fputs(str.c_str(), fp) == EOF)
    {
        throw "Error writing to file";
    }
    fclose(fp);
}

void FileHandler::WriteLine(std::string filepath, std::string str)
{
    str.push_back('\n');

    FILE *fp = fopen(filepath.c_str(), "a");
    if(fputs(str.c_str(), fp) == EOF)
    {
        throw "Error writing to file";
    }
    fclose(fp);
}