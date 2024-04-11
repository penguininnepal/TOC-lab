/*
Design a Finite automata that accepts all strings over input symbol,
E = {0,1} having three consecutive 1's as a substring.
*/
#include <iostream>
using namespace std;
char Input[10];

void A(int);
void B(int);
void C(int);
void D(int);

void A(int i){
	if(Input[i]=='0')
	{
		A(i + 1);
	}
	else if(Input[i]=='1')
	{
		B(i + 1);
	}
	else
	{
		cout<<"\n Output: Invalid String";
		exit(0);
	}
}

void B(int i){
	if(Input[i]=='0')
	{
		A(i + 1);
	}
	else if(Input[i]=='1')
	{
		C(i + 1);
	}
	else
	{
		cout<<"\n Output: Invalid String";
		exit(0);
	}
}

void C(int i){
	if(Input[i]=='0')
	{
		A(i + 1);
	}
	else if(Input[i]=='1')
	{
		D(i + 1);
	}
	else
	{
		cout<<"\n Output: Invalid String";
		exit(0);
	}
}

void D(int i){
	if(Input[i]=='0')
	{
		D(i + 1);
	}
	else if(Input[i]=='1')
	{
		D(i + 1);
	}
	else if(Input[i]=='\0')
	{
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
	gets(Input);
	A(0);
	return 0;
}

/*
output
Enter binary string: 111011100111
Output: Valid String
*/
