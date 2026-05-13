#include<iostream>
using namespace std;
int sumofDigits(int x){
    if(x==0)
    return 0;
    return(x%10) + sumofDigits(x/10);
} 
int main() {
    int n;
    cout<<"emter the mumber: ";
    cin>>n;
    cout<<"find the sum of digits: "<<n<<endl<<"the sum is: "<<sumofDigits(n)<<endl;
    return 0;
} 