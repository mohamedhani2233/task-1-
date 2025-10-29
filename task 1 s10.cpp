#include <iostream>
using namespace std;

class Math {
public:
    static int add(int a, int b) {
        return a + b;
    }
};

class Shape {
public:
    void display() {
        cout << "This is a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of Circle function called" << endl;
    }
};

class Rectangle : public Shape {
public:
    void perimeter() {
        cout << "Perimeter of Rectangle function called" << endl;
    }
};

class Box {
private:
    int length;

public:
    Box() {
        length = 10;
    }
    friend void printLength(Box b);
};

void printLength(Box b) {
    cout << "Length of Box = " << b.length << endl;
}

int main() {
    cout << "Sum using Math class: " << Math::add(5, 7) << endl;

    Circle c;
    Rectangle r;

    c.display();
    c.area();

    r.display();
    r.perimeter();

    Box b;
    printLength(b);

    return 0;
}
