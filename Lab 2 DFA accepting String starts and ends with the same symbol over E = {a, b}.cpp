/*
DFA accepting String starts and ends with the same symbol over E = {a, b}
*/ 

#include <iostream>
#include <string>

using namespace std;

// Function prototypes
void q0(const string&, int);
void q1(const string&, int);
void q2(const string&, int);
void q3(const string&, int);
void q4(const string&, int);

void q0(const string& s, int i) {
    if (i == s.length()) {
        cout << "Rejected: The string does not meet the criteria.\n";
        return;
    }

    if (s[i] == 'a')
        q1(s, i + 1);
    else if (s[i] == 'b')
        q3(s, i + 1);
    else {
        cout << "Rejected: The string does not meet the criteria.\n";
        return;
    }
}

void q1(const string& s, int i) {
    if (i == s.length()) {
        cout << "Accepted: The string starts and ends with the same symbol.\n";
        return;
    }
    if (s[i] == 'a')
        q1(s, i + 1);
    else
        q2(s, i + 1);
}

void q2(const string& s, int i) {
    if (i == s.length()) {
        cout << "Rejected: The string does not meet the criteria.\n";
        return;
    }
    if (s[i] == 'a')
        q1(s, i + 1);
    else
        q2(s, i + 1);
}

void q3(const string& s, int i) {
    if (i == s.length()) {
        cout << "Accepted: The string starts and ends with the same symbol.\n";
        return;
    }
    if (s[i] == 'a')
        q4(s, i + 1);
    else
        q3(s, i + 1);
}

void q4(const string& s, int i) {
    if (i == s.length()) {
        cout << "Accepted: The string starts and ends with the same symbol.\n";
        return;
    }
    if (s[i] == 'a')
        q4(s, i + 1);
    else
        q3(s, i + 1);
}

int main() {
    string input;
    cout << "Enter a string over the alphabet {a, b}: ";
    cin >> input;
    q0(input, 0);
    return 0;
}
