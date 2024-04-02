// Design a DFA to accept all the string with equal // Design a DFA to accept all the string with equal no of a's and b's over the i/p alphabet  E = {a,b} and develop a program in any HLL for the above DFA
#include <iostream>
#include <stack>
using namespace std;

// Function to check if a string is accepted by the DFA
bool checkString(string str) {
    int state = 0;
    for (char c : str) {
        switch (state) {
            case 0:
                if (c == 'a') state = 1;
                else if (c == 'b') state = 2;
                break;
            case 1:
                if (c == 'a') state = 0;
                else if (c == 'b') state = 3;
                break;
            case 2:
                if (c == 'a') state = 3;
                else if (c == 'b') state = 0;
                break;
            case 3:
                if (c == 'a') state = 2;
                else if (c == 'b') state = 1;
                break;
        }
    }
    return state == 0 || state == 3;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (checkString(str)) {
        cout << "The string is accepted by the DFA." << endl;
    } else {
        cout << "The string is not accepted by the DFA." << endl;
    }
    return 0;
}no of a's and b's over the i/p alphabet  E = {a,b} and develop a program in any HLL for the above DFA
