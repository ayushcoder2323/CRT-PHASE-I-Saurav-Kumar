#include <iostream>

using namespace std;

namespace Virat
{
    void show()
    {
        cout << "He is the part of RCB team" << endl;
    }

}

namespace Rohit
{
    void show()
    {
        cout << "He is the part of Mi team" << endl;
    }
}

int main()
{
    Virat::show();
    Rohit::show();
    return 0;
}