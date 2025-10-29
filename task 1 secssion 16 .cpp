#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> arr;
    int capacity;

public:
    Stack(int size) {
        capacity = size;
    }

    bool isEmpty() {
        return arr.empty();
    }

    bool isFull() {
        return arr.size() == capacity;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow" << endl;
        } else {
            arr.push_back(x);
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
        } else {
            arr.pop_back();
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr.back();
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
        } else {
            cout << "Stack elements (top to bottom): ";
            for (int i = arr.size() - 1; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60); // Overflow

    st.display();

    cout << "Top element: " << st.peek() << endl;

    st.pop();
    st.pop();

    st.display();

    return 0;
}
