#include <iostream>
#include <string>
#include "file.h"

int main ()
{
    
    FileHandler dumbFileObj;
    std::cout << dumbFileObj.ReadFile() << std::endl;
    std::string str = "gg gl\n\thf";
    dumbFileObj.Write("test.txt", str);
    dumbFileObj.WriteLine("test.txt", str);

    return 0;
}