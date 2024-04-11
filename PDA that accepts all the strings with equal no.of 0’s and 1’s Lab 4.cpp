// Lab-4 Design a PDA that accepts all the strings with equal no.of 0’s and 1’s over 
//the input symbol, ?={0,1} for a language, L=0n1n/ n>=1.
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void main()
{
char Input[10];
char stack[10]; //Implementing stack through array.
int Top = -1;
clrscr();
cout<<"Enter binary string to validate (input string should be of 0 and 
1)\n";
gets(Input);
stack[++Top] = 'Z';//Taking 'Z'as an initial stack symbol.
int i=-1;
q0:
i++;
if(Input[i]=='0' && stack[Top]== 'Z')
{
stack[++Top]= 'A';
goto q0;
}
else if(Input[i]=='0' && stack[Top]== 'A')
{
stack[++Top]= 'A';
goto q0;
}
else if(Input[i]=='1' && stack[Top]== 'A')
{
Top--;
goto q1;
}
else
{
goto Invalid;
}
q1:
i++;
if(Input[i]=='1' && stack[Top]== 'A')
{
Top--;
goto q1;
}
else if(Input[i]=='\0' && stack[Top]== 'Z')
{
Top--;
goto q2;
}
else
{
goto Invalid;
}
q2:
cout<<"\n Output: Valid String";
goto exit;
Invalid:
cout<<"\n Output: Invalid String";
goto exit;
exit:
getch();
}
