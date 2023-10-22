#include <iostream>
#include "file.h"
#include "console.h"

int main ()
{
    
    FileHandler dumbFileObj;
    std::string str = "ggwp gl\n\tglhf";
    dumbFileObj.Write("test.txt", str);
    dumbFileObj.WriteLine("test.txt", str);
    std::vector<std::string> lines = dumbFileObj.Read("test.txt");
    for(auto i: lines)
    {
        // std::cout << i;
        Console::WriteLine(i);
    }

    str = Console::ReadLine();
    Console::WriteLine(str);

    str = Console::ReadLine();
    Console::WriteLine(str);

    return 0;
}