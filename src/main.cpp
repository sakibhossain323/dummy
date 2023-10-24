// #include <iostream>
#include "file.h"
#include "console.h"
#include "string.h"

int main ()
{
    
    FileHandler dumbFileObj;
    String str = "ggwp gl\n\tglhf";
    dumbFileObj.Write("test.txt", str);
    dumbFileObj.WriteLine("test.txt", str);
    List<String> lines = dumbFileObj.Read("test.txt");
    for(int i = 0; i < lines.size(); i++)
    {
        Console::WriteLine(lines[i]);
    }
    Console::WriteLine("br br br br ....");
    Console::WriteLine(str);
    str = Console::ReadLine();
    Console::WriteLine(str);

    str = Console::ReadLine();
    Console::WriteLine(str);

    return 0;
}