#include<bits/stdc++.h>
using namespace std;

string interpret(string command) {
    string result = "";
    
    for (int i = 0; i < command.size(); ++i) {
        if (command[i] == 'G') {
            result += 'G';
        } else if (command[i] == '(' && command[i + 1] == ')') {
            result += 'o';
            i++;  // Skip the next character '('
        } else if (command[i] == '(' && command[i + 1] == 'a' && command[i + 2] == 'l' && command[i + 3] == ')') {
            result += "al";
            i += 3;  // Skip the next three characters '(al)'
        }
    }
    
    return result;
}

int main() {
    // Example usage:
    string command1 = "G()(al)";
    string result1 = interpret(command1);
    cout << result1 << endl;  // Output: "Goal"

    string command2 = "G()()()()(al)";
    string result2 = interpret(command2);
    cout << result2 << endl;  // Output: "Gooooal"

    string command3 = "(al)G(al)()()G";
    string result3 = interpret(command3);
    cout << result3 << endl;  // Output: "alGalooG"

    return 0;
}
