#include <iostream>
#include "ch08ex14.h"

using namespace ch08ex14;

int main()
{
    //  Declaring a const non-reference function argument is useful if we are not changing or
    //  manipulating the argument in any way, and we are using it as a 'read-only' argument.
    const int cInt = 14;
    //  Print the variable.
    PrintInt(cInt);
    //  Print the result of AddFive() using the variable.
    PrintInt(AddFive(cInt));
    //  Print the variable again. It is unchanged after
    //  being passed into AddFive().
    PrintInt(cInt);
    EvenOrOdd(cInt);

    return 0;
}

void ch08ex14::PrintInt(const int i)
{
    cout << i << endl;
}

int ch08ex14::AddFive(const int i)
{
    return i + 5;
}

void ch08ex14::EvenOrOdd(const int i)
{
    if (i % 2 == 0)
        PrintLn("Even.");
    else
        PrintLn("Odd.");
}

void ch08ex14::PrintLn(const string &s)
{
    cout << s << endl;
}


