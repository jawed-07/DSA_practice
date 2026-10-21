#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int size;
    int top;

public:
    // Constructor
    Stack(int s) {
        size = s;
        arr = new int[size];
        top = -1;
    }

    // Destructor
    ~Stack() {
        delete[] arr;
    }

    // Push an element
    void push(int data) {
        if (top == size - 1) {
            cout << "Stack Overflow" << endl;
        } else {
            arr[++top] = data;
        }
    }

    // Check whether stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Display the top element
    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    // Display all elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    // Display the number of elements
    void count() {
        cout << "Number of elements: " << top + 1 << endl;
    }

    // Remove the top element
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
        } else {
            cout << "Removed: " << arr[top] << endl;
            top--;
        }
    }
};

int main() {
    Stack st(30);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.display();
    st.peek();
    st.count();

    st.pop();
    st.display();

    return 0;
    
}