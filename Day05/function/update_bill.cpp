//write a function that apply 10% discount using references,update the original bill and print it.
#include <iostream>
using namespace std;

void applyDiscount(float &bill){
    bill = bill - (0.10 * bill);
}

int main() {
    float bill;

    cout << "Enter original bill: ";
    cin >> bill;

    applyDiscount(bill);

    cout << "Bill after 10% discount: " << bill << endl;

    return 0;
}
//swap 2 numbers using pointer