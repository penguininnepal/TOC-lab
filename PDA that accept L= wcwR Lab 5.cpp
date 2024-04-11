//Lab-5 Design a PDA that accept L= wcwR where w is any binary string and wR is 
//the reverse of that string and c is the special symbol over the input symbol, ?=
{0,1}
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void main()
{
char Input[10];
char stack[10];
int Top = -1;
clrscr();
cout<<"Enter string to be validate\n";
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
else if(Input[i]=='1' && stack[Top]== 'Z')
{
stack[++Top]= 'B';
goto q0;
}
else if(Input[i]=='0' && (stack[Top]== 'A'|| stack[Top]== 'B'))
{
stack[++Top]= 'A';
goto q0;
}
else if(Input[i]=='1' && (stack[Top]== 'A'|| stack[Top]== 'B'))
{
stack[++Top]= 'B';
goto q0;
}
else if(Input[i]=='C' && (stack[Top]== 'A'||stack[Top]== 'B'))
{
goto q1;
}
else
{
goto Invalid;
}
q1:
i++;
if(Input[i]=='0' && stack[Top]== 'A')
{
Top--;
goto q1;
}
else if(Input[i]=='1' && stack[Top]== 'B')
{
Top--;
goto q1;
}
else if(Input[i]=='\0' && stack[Top]== 'Z')
{
goto Valid;
}
else
{
goto Invalid;
}
Valid:
cout<<"\n Output: Valid String";
goto exit;
Invalid:
cout<<"\n Output: Invalid String";
goto exit;
exit:
getch();
}
