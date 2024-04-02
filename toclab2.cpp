#include <iostream>
using namespace std;

void q0(string, int);
void q1(string, int);
void q2(string, int);
void q3(string, int);
void q4(string, int);

void q1(string s, int i) {
    if (i == s.length()) {
        cout << "Ok. The string is accepted\n";
        return;
    }
    if (s[i] == 'a')
        q1(s, i + 1);
    else if(s[i]=='b')
        q2(s, i + 1);
}

void q2(string s, int i) {
    if (i == s.length()) {
        cout << "No. The string is not accepted\n";
        return;
    }
    if (s[i] == 'a')
        q1(s, i + 1);
    else if(s[i]=='b')
        q2(s, i + 1);
}

void q3(string s, int i) {
    if (i == s.length()) {
        cout << "Ok. The string is accepted\n";
        return;
    }
    if (s[i] == 'a')
        q4(s, i + 1);
    else if(s[i]=='b')
        q3(s, i + 1);
}

void q4(string s, int i) {
    if (i == s.length()) {
        cout << "No. The string is not accepted\n";
        return;
    }
    if (s[i] == 'a')
        q4(s, i + 1);
    else if(s[i]=='b')
        q3(s, i + 1);
}

void q0(string s, int i) {
    if (i == s.length()) {
        cout << "No. The string is not accepted\n";
        return;
    }
    if (s[i] == 'a')
        q1(s, i + 1);
    else if(s[i]=='b')
        q3(s, i + 1);
}

int main() {
    string s;
    cout << "Enter the string\n";
    cin >> s;
    q0(s, 0);

    return 0;
}


