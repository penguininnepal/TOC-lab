/*
String has even number of a's and b's over E = {a, b}
*/

#include<iostream>
using namespace std;

void q0(string, int);
void q1(string, int);
void q2(string, int);
void q3(string, int);

void q0(string s, int i){
	if(i==s.length()){
		cout<<"The string is Accepted\n";
		return;
	}
	if(s[i] =='a')
		q1(s,i+1);
	else 
		q3(s,i+1);
}

void q1(string s, int i){
	if(i==s.length()){
		cout<<"The string is Not accepted\n";
		return;
	}
	if(s[i] =='a')
		q0(s,i+1);
	else 
		q2(s,i+1);
}
void q2(string s, int i){
	if(i ==s.length()){
		cout<<"The string is Not accepted\n";
		return;
	}
	if(s[i]=='a')
		q3(s,i+1);
	else 
		q1(s,i+1);
}
void q3(string s, int i){
	if(i ==s.length()){
		cout<<"The string is Not accepted\n";
		return;
	}
	if(s[i] == 'a')
		q0(s,i+1);
	else 
		q2(s,i+1);
}

int main(){
	string s;
	 cout<<"Enter the string: ";
	 cin>>s;
	 q0(s,0);
	 return 0;
}

