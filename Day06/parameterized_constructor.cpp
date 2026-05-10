#include<iostream>
using namespace std;

class Cricketers{
    public:
    string name;
    int runs;
    double avg;
    Cricketers(string n, int r, double avg)
    {
        name = n;
        runs = r;
        this->avg = avg;
    }

    void show()
    {
        cout << "Name : " << name << endl;
        cout << "Runs : " << runs << endl;
        cout << "Average : " << avg << endl;
    }
};

int main(){

    Cricketers c1("Virat Kohli", 13848, 58.67);
    Cricketers c2("Rohit Sharma", 10709, 49.12);


    c1.show();

    cout << endl;

    c2.show();

    return 0;
}