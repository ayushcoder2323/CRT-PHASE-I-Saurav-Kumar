#include<iostream>
using namespace std;
class student{
    private:
    int reg = 17556;

    public:
    string name;
    int rollno;
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Roll No :"<<rollno<<endl;
        cout<<"Reg No :"<<reg<<endl;
        reg++;
    }
};
int main(){
    student s1;
    s1.name ="Ayush";
s1.rollno = 1846;
s1.display();
}