#include <iostream>
using namespace std;

class Stack {
private:
    class Node {
    public:
        int data;
        Node* next;

        Node(int value) {
            data = value;
            next = nullptr;
        }
    };

    Node* top;
    int size;

public:
    
    Stack() {
        top = nullptr;
        size = 0;
    }

    
    ~Stack() {
        while (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    
    void push(int data) {
        Node* newNode = new Node(data);

        newNode->next = top;
        top = newNode;
        size++;
    }

    
    bool isEmpty() {
        return top == nullptr;
    }

    
    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top element: " << top->data << endl;
        }
    }

    
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
        } else {
            Node* temp = top;

            cout << "Removed: " << top->data << endl;

            top = top->next;
            delete temp;
            size--;
        }
    }

    
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            Node* temp = top;

            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }

            cout << endl;
        }
    }

    
    void count() {
        cout << "Number of elements: " << size << endl;
    }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "Stack elements: ";
    st.display();

    st.peek();
    st.count();

    st.pop();

    cout << "After pop: ";
    st.display();
    
    return 0;
    
}