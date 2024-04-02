#include<iostream>
using namespace std;
void prefix(string);
void suffix(string);
void substring(string);
int main(){
	system("color F0");
	string str;
	int choice;
	system("cls");
	cout<<"Enter the string:";
	cin>>str;
	do{
		cout<<"\n 1. Prefix\n 2.Suffix\n 3.Substring\n 4.Exit\n 5.Enter your choice: ";
		cin>>choice;
		switch(choice){
			case 1: prefix(str);
					break;
			case 2: suffix(str);
					break;
			case 3: substring(str);
					break;
			default:choice=0;
					cout<<"Invalid option"<<endl;
					break;
		}		
	}while(choice!=0);}
	void prefix(string s){
		cout<<"prefix are: "<<endl;
		string temp;
		for ( int i = 0; i < s.length(); i++){
			temp = temp + s[i];
			cout << temp << endl;
		}
		cout<<endl;
	}
	void suffix(string s){
		cout << "suffix are: "<<endl;
		string temp;
		for ( int i = s.length()-1;i >=0; i--){
			temp = temp + s[i];
			cout << temp << endl;
		}
		cout<<endl;
	}
	void substring(string s){
		cout<<"substring are: "<<endl;
		for ( int  i = 0; i < s.length(); i++){
			string temp;
			for (int j = i; j < s.length();j++){
			temp = temp + s[i];
			cout << temp << endl;
		}
		}
		cout<<endl;
	}

