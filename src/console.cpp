#include "console.h"

std::string Console::ReadLine()
{
    char buffer[1000];
    fgets(buffer, 1000, stdin);
    return std::string(buffer);
}

void Console::WriteLine(std::string content)
{
    fputs(content.c_str(), stdout);
}