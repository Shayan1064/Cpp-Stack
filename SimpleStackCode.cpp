#include <iostream>
using namespace std;

const int MAX = 100;

class Stack {
    int arr[MAX], top;
public:
    Stack() { top = -1; }
    void push(int x) {
        if (top < MAX - 1) arr[++top] = x;
    }
    void pop() {
        if (top >= 0) top--;
    }
    int peek() {
        if (top >= 0) return arr[top];
        return -1;
    }
    bool isEmpty() {
        return top == -1;
    }
    void display() {
        for (int i = top; i >= 0; i--) cout << arr[i] << " ";
        cout << endl;
    }
};
