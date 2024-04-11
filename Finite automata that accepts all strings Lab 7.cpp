Lab 7: Design a Finite automata that accepts all strings over input symbol, ?= {0, 
1} having three consecutive 1's as a substring. 
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void main()
{
char Input[10];
clrscr();
cout<<"Enter a string to validate (input string should be of 0 and 1)\n";
gets(Input);
int i=-1;
A:
i++;
if(Input[i]=='0')
{
goto A;
}
else if(Input[i]=='1')
{
goto B;
}
else if(Input[i]=='\0')
{
goto Invalid;
}
else
{
goto Wrong;
}
B:
i++;
if(Input[i]=='0')
{
goto A;
}
else if(Input[i]=='1')
{
goto C;
}
else if(Input[i]=='\0')
{
goto Invalid;
}
else
{
goto Wrong;
}
C:
i++;
if(Input[i]=='0')
{
goto A;
}
else if(Input[i]=='1')
{
goto D;
}
else if(Input[i]=='\0')
{
goto Invalid;
}
else
{
goto Wrong;
}
D:
i++;
if(Input[i]=='0')
{
goto D;
}
else if(Input[i]=='1')
{
goto D;
}
else if(Input[i]=='\0')
{
goto Valid;
}
else
{
goto Wrong;
}
Valid:
cout<<"\n Output: Valid String";
goto exit;
Invalid:
cout<<"\n Output: Invalid String";
goto exit;
Wrong:
cout<<"\n Please enter binary string {format of 0, 1}";
exit:
getch();
}
