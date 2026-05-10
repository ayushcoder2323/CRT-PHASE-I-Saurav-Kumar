#include <iostream>
using namespace std;

float areaOfTriangle(float length, float width) {
    float area = 0.5 * length * width;
    return area;
}

int main() {
    float length, width;
    cout << "Enter length (base): ";
    cin >> length;
    cout << "Enter width (height): ";
    cin >> width;

    float result = areaOfTriangle(length, width);
    cout << "Area of triangle = " << result << endl;

    return 0;
}