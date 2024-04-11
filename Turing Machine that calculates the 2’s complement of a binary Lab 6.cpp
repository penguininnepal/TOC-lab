/*
Design a Turing Machine that calculates the 2?s complement of a binary
string over the input symbol, E = {0,1}.
*/
#include <iostream>
using namespace std;

char Input[10];

void q0(int);
void q1(int);
void q2(int);
void q3();

void q0(int i){
	if(Input[i]=='0'|| Input[i]=='1')
	{
		q0(i + 1);
	}
		else if(Input[i]=='\0')
	{
		q1(i - 1);
	}
	else
	{
		cout<<"Output: Invalid string.";
		exit(0);
	}
}

void q1(int i){
	if(Input[i]=='0')
	{
		q1(i - 1);
	}
	else if(Input[i]=='1')
	{
		q2(i - 1);
	}
	else
	{
		cout<<"Output: Invalid string.";
		exit(0);
	}
}

void q2(int i){
	if(Input[i]=='0')
	{
		Input[i]='1';
		q2(i - 1);
	}
	else if(Input[i]=='1')
	{
		Input[i]='0';
		q2(i - 1);
	}
	else if(i == -1)
	{
		q3();
	}
	else
	{
		cout<<"Output: Invalid string.";
		exit(0);
	}
}

void q3(){
	cout<<"Output String: ";
	puts(Input);
	exit(0);
}


int main(){
cout<<"Enter binary string: ";
gets(Input);
q0(0);
return 0;
}

/*
Output
Enter binary string: 101101001
Output String: 010010111
*/
