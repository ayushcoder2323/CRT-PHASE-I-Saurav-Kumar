#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter number of columns :";
  cin>>n;
 for(int i=1;i<=n;i++){
    for(int j=1;i<=n;i++){
        cout<<"  ";
    }
    cout<<"*";
 }      
 cout<<endl;
 return 0;
}