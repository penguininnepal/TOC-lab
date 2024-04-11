//Lab-5 Design a PDA that accept L= wcwR where w is any binary string and wR is 
//the reverse of that string and c is the special symbol over the input symbol, ?=
// L = wCw' , E = {0, 1}
#include <iostream>
using namespace std;

char In[10];
char stack[10];
int Top = -1;

void q0(int);
void q1(int);

void q0(int i){
	if(In[i]=='0' && stack[Top]== 'Z')
	{
		stack[++Top]= 'A';
		q0(i + 1);
	}
	else if(In[i]=='1' && stack[Top]== 'Z')
	{
		stack[++Top]= 'B';
		q0(i + 1);
	}
	else if(In[i]=='0' && (stack[Top]== 'A'|| stack[Top]== 'B'))
	{
		stack[++Top]= 'A';
		q0(i + 1);
	}
	else if(In[i]=='1' && (stack[Top]== 'A'|| stack[Top]== 'B'))
	{
		stack[++Top]= 'B';
		q0(i + 1);
	}
	else if(In[i]=='C' && (stack[Top]== 'A'||stack[Top]== 'B'))
	{
		q1(i + 1);
	}
	else
	{
		cout<<"\n Output: Invalid String";
		exit(0);
	}
}

void q1(int i){
	if(In[i]=='0' && stack[Top]== 'A')
	{
		Top--;
		q1(i + 1);
	}
	else if(In[i]=='1' && stack[Top]== 'B')
	{
		Top--;
		q1(i + 1);
	}
	else if(In[i]=='\0' && stack[Top]== 'Z') 
	{
		// q2();{
		cout<<"\n Output: Valid String";
		exit(0);
	}
	else
	{
		cout<<"\n Output: Invalid String";
		exit(0);
	}
}

int main()
{
	cout<<"Enter binary string: ";
	gets(In);
	stack[++Top] = 'Z';
	q0(0);
	return 0;
}

// Output 
// enter : 0101C1010
// valid string
