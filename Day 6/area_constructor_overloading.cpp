#include<iostream>
using namespace std;

class Area {
    public:
    

    Area(int length, int width) {
        int rectangleArea = length * width;
        cout << "Area of Rectangle = " << rectangleArea << endl;
    }

    
    Area(int side) {
        int squareArea = side * side;
        cout << "Area of Square = " << squareArea << endl;
    }


    Area(double radius) {
        double circleArea = 3.14 * radius * radius;
        cout << "Area of Circle = " << circleArea << endl;
    }
};

int main() {

    Area r(10, 5);     
    Area s(4);       
    Area c(3.5);       

    return 0;
}