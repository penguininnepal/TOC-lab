/* 
Design a PDA that accepts all the strings with equal no.of 0?s and 1?s over
the input symbol, E ={0,1} for a language, L = 0^n 1^n | n >= 1 
*/
#include <iostream>

using namespace std;

char Input[10];
char stack[10];
int Top = -1;

void q0(int);
void q1(int);
void q2(int);

void q0(int i){
	if(Input[i]=='0' && stack[Top]== 'Z')
	{
		stack[++Top]= 'A';
		q0(i + 1);
	}
	else if(Input[i]=='0' && stack[Top]== 'A')
	{
		stack[++Top]= 'A';
		q0(i + 1);
	}
	else if(Input[i]=='1' && stack[Top]== 'A')
	{
		Top--;
		q1(i + 1);
	}
	else
	{
		cout<<"\n Output: Invalid String";
		exit(0);
	}
}

void q1(int i){
	if(Input[i]=='1' && stack[Top]== 'A')
	{
		Top--;
		q1(i + 1);
	}
	else if(Input[i]=='\0' && stack[Top]== 'Z')
	{
		Top--;
		q2(i + 1);
	}
	else
	{
		cout<<"\n Output: Invalid String";
		exit(0);
	}
}

void q2(int i){
	cout<<"\n Output: Valid String";
	exit(0);
}

int main()
{
	cout<<"Enter binary string: ";
	gets(Input);
	stack[++Top] = 'Z';
	q0(0);
	return 0;
}

/*
Input: "0011"
Output: Accepted

Input: "00001111"
Output: Accepted

Input: "010101"
Output: Rejected

Input: "1100"
Output: Rejected

Input: "1010"
Output: Rejected
*/
