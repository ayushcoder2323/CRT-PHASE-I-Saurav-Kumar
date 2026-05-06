#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    int marks;
};
int main(){
student s1;
cout<<"enter your name: ";
cin>>s1.name;
cout<<"enter your rollno: ";
cin>>s1.rollno;
cout<<"enter your marks: ";
cin>>s1.marks;
cout<<"student details:-"<<endl;
cout<<"student name: "<<s1.name<<endl;
cout<<"student rollno: "<<s1.rollno<<endl;
cout<<"student marks: "<<s1.marks<<endl;
return 0;
}