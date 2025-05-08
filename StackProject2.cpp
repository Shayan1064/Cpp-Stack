#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

class Stack {
    char arr[MAX];
    int top;
public:
    Stack() { top = -1; }
    void push(char ch) {
        if (top < MAX - 1) arr[++top] = ch;
    }
    char pop() {
        if (top >= 0) return arr[top--];
        return '\0';
    }
    bool isEmpty() {
        return top == -1;
    }
};

bool isBalanced(string expr) {
    Stack s;
    for (char ch : expr) {
        if (ch == '(' || ch == '[' || ch == '{') s.push(ch);
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (s.isEmpty()) return false;
            char top = s.pop();
            if ((ch == ')' && top != '(') || 
                (ch == ']' && top != '[') || 
                (ch == '}' && top != '{')) return false;
        }
    }
    return s.isEmpty();
}

int main() {
    string expr = "{(a+b)*[c-d]}";
    cout << "Expression is " << (isBalanced(expr) ? "Balanced" : "Not Balanced") << endl;
    return 0;
}
