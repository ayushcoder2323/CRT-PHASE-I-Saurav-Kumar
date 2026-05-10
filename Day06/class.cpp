#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    int marks;
    void display(){
    cout<<"Name ="<<name<<endl;
    cout<<"rollno ="<<rollno<<endl;
    cout<<"marks ="<<marks<<endl;
    }
};
int main(){
student s1;
s1.name ="Ayush";
s1.rollno = 1846;
s1.marks = 89;
s1.display();


return 0;
}