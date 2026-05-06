#include<iostream>
using namespace std;

class Area {
    double area;

public:

    
    Area(int length, int breadth) {
        this->area = length * breadth;
        rectangle();
    }

    
    Area(int side) {
        this->area = side * side;
        square();
    }

    
    Area(double radius) {
        this->area = 3.14 * radius * radius;
        circle();
    }

    void rectangle() {
        cout << "Area of Rectangle = " << this->area << endl;
    }

    void square() {
        cout << "Area of Square = " << this->area << endl;
    }

    void circle() {
        cout << "Area of Circle = " << this->area << endl;
    }
};

int main() {

    int length = 10, breadth = 5;
    int side = 4;
    double radius = 3.5;

    Area r(length, breadth);
    Area s(side);
    Area c(radius);

    return 0;
}