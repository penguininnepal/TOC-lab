//Lab 6: Design a Turing Machine that calculates the 2’s complement of a binary 
//string over the input symbol = {0,1}.
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void main()
{
char Input[10];
clrscr();
cout<<"Enter input binary string\n";
gets(Input);
int i=0;
q0:
if(Input[i]=='0'|| Input[i]=='1')
{
i++;
goto q0;
}
else if(Input[i]=='\0')
{
i--;
goto q1;
}
else
{
goto Invalid;
}
q1:
if(Input[i]=='0')
{
i--;
goto q1;
}
else if(Input[i]=='1')
{
i--;
goto q2;
}
else
{
goto Invalid;
}
q2:
if(Input[i]=='0')
{
Input[i]='1';
i--;
goto q2;
}
else if(Input[i]=='1')
{
Input[i]='0';
i--;
goto q2;
}
else if(i== -1)
{
goto q3;
}
else
{
goto Invalid;
}
q3:
cout<<"\nOutput: Two's complement is";
puts(Input);
goto exit;
Invalid:
cout<<"\n You have entered some invalid string.";
goto exit;
exit:
getch();
}

