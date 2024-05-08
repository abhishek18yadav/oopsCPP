#include<bits/stdc++.h>
using namespace std;

// overloading and overridding  - inheritence


// this is overloading  i.e calling same function with different parameter
void printArea(int l, int b){

    cout<<"area of rectangle is "<<l*b<<endl;
}
void printArea(int l){

    cout<<"area of square is "<<l*l<<endl;
}

// overriding - when a function of base call is redefined in its derived class , its overriding
class A{
    public:
    int p1; // data member
    void print(){
        cout<<"A is great";
    }
    A(){
        cout<<"cons calling"<<endl;
    }
};
class b: public A{
    public:
    int p2; // data member
    void print(){
        cout<<"b is great and override A";
    }
    b(){
        cout<<"cons calling B"<<endl;
    }
};

int main(){
    // printArea(4,5);
    // printArea(4);
    A a1;
    a1.print();
    b B1;
    B1.print();
    return 0;
}
