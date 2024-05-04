#include<bits/stdc++.h>
using namespace std;
// class is a blueprint
class student{
    public:
    int marks;   // marks is data member
    int rollno;
    char section;
    void printdetails(){// this is member function
        cout<<this->marks<<"-marks"<<endl;
        cout<<this->rollno<<"-rollno"<<endl;
        cout<<this->section<<"-section"<<endl;
    }
    student(){
        marks=10;
        // this is constructor;
    }
    student(int no){
        rollno= no;
        // parameterized constructor
    }
};
int main(){
    student abhishek;
    // abhishek is an object having all properties as student (blueprint)
   
    student amit(23);
    abhishek.printdetails();
    return 0;
}