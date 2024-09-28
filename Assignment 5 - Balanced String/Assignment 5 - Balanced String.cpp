// Assignment 5 - Balanced String.cpp
// 
// Programmer: Eisig Liang
// Completion date: 
// AI disclosure: ChatGPT was used ONLY for generating equations for the test cases
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(string input) 
{ 
    /* Checks if string is balanced */

    stack<char> brackets;

    for (int index = 0; index < input.size() / sizeof(char); index ++) {
        char character = input.at(index);

        if (character == '(' or character == '[' or character == '{') { // Add opening brackets to stack
            brackets.push(input.at(index));
        }
        else if (character == ')' and brackets.top() == '(' or 
            character == ']' and brackets.top() == '[' or
            character == '}' and brackets.top() == '{') 
        { // Verify closing parenthesis balances equation (there's got to be a better way to do this, right?)
            brackets.pop();
        }
    }

    if (brackets.size() == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{ 
    /* Runs test cases */

    // Test case 1: Testing balanced equation
    cout << "Testing: isBalanced(\"(a + b * [c - d]) / (e + f * {g + h})\") | Expected output: 1" << endl;
    cout << isBalanced("(a + b * [c - d]) / (e + f* { g + h })") << endl << endl;

    // Test case 2: Testing unbalanced equation with missing bracket
    cout << "Testing: isBalanced(\"(a + b * [c - d / (e + f * {g + h}]\") | Expected output: 0" << endl;
    cout << isBalanced("(a + b * [c - d / (e + f * {g + h}]") << endl << endl;

    // Test case 3: Testing unbalanced equation with an incorrect order of brackets
    cout << "Testing: isBalanced(\"{a + b * (c - d} / [e + f * g + h)}\") | Expected output: 0" << endl;
    cout << isBalanced("{a + b * (c - d} / [e + f * g + h)}") << endl << endl;
}