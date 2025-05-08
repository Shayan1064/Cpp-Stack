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

int main() {
    Stack s;
    string str = "Xtream";
    for (char ch : str) s.push(ch);
    cout << "Reversed: ";
    while (!s.isEmpty()) cout << s.pop();
    cout << endl;
    return 0;
}
