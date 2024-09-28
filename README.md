Stack: Balanced String
Use the container adaptor stackLinks to an external site. to create a function that returns true if a string has balanced parentheses/braces/brackets.

A balanced string must contain an equal number of open and close parentheses, braces and brackets. No close parenthesis or brace may be before its matching open parenthesis or brace. Nesting of symbols is allowed but each inner pair must be opened and closed within any outer pairing.

The string may contain characters other than parentheses and braces. They may be anywhere in the string.

Your solution must use the stack.

The function definition should be:

bool isBalanced(string);
Examples:
input: "(a[()9])"  output = true
input: "hw(((([t(k7)]"  output = false
input: "){(ab)[]}("  output = false
input: "main(3)(m)[{}]" output = true
input: "int(n)([()]2{5})" output = true
input: "( [ m ) ]"  output = false

 

Submission:
Submit your code file and a screenshot of the output from at least 2 tests-- one true and one false. (User input is not required. You can hardcode these tests.)

Make sure to consider readability as you are coding. (Use proper indentation and name your variables meaningfully. I would expect some comments in your code.)
