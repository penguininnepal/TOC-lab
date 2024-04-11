// Lab-4 Design a PDA that accepts all the strings with equal no.of 0’s and 1’s over 
//the input symbol, ?={0,1} for a language, L=0n1n/ n>=1.
#include <iostream>
#include <conio.h>
#include <stdio.h>

int main()
{
    char Input[10];
    char stack[10]; // Implementing stack through array.
    int Top = -1;

    std::cout << "Enter a binary string to validate (input string should consist of 0s and 1s)\n";
    gets(Input);

    stack[++Top] = 'Z'; // Taking 'Z' as the initial stack symbol.
    int i = -1;

q0:
    i++;
    if (Input[i] == '0' && stack[Top] == 'Z')
    {
        stack[++Top] = 'A';
        goto q0;
    }
    else if (Input[i] == '0' && stack[Top] == 'A')
    {
        stack[++Top] = 'A';
        goto q0;
    }
    else if (Input[i] == '1' && stack[Top] == 'A')
    {
        Top--;
        if (Input[i + 1] == '\0' && stack[Top] == 'Z')
        {
            std::cout << "\nOutput: Valid String";
            return 0;
        }
        goto q1;
    }
    else
    {
        goto Invalid;
    }

q1:
    i++;
    if (Input[i] == '1' && stack[Top] == 'A')
    {
        Top--;
        if (Input[i + 1] == '\0' && stack[Top] == 'Z')
        {
            std::cout << "\nOutput: Valid String";
            return 0;
        }
        goto q1;
    }
    else
    {
        goto Invalid;
    }

Invalid:
    std::cout << "\nOutput: Invalid String";
    return 0;
}
