#include<bits/stdc++.h>
using namespace std;
 /**
  * its a diamond problem where band c  inherit A and d inherit b and c
  * we cant access property of A in D , so use virtual on classes being inherited
  * 
 */
 class vehicle{
    public:
    int wheels;
    string model;
    vehicle(){
        cout<<"vehicle constructor"<<endl;
    }
};
class bike : virtual public vehicle{
    public:
    int enginewt;
    bike(){
        cout<<"bike constructor"<<endl;
    }

};
class car: virtual public vehicle{
    public:
    int modelno;
    car(){
        cout<<"car constructor"<<endl;
    }
};
class personelvehicle : public bike , public car{
    public:
    int sitter;
    void show(){
        cout<<sitter;
    }
    personelvehicle(){
        cout<<wheels<<endl;
    }
};

int main(){
    personelvehicle b1;
    cout<<sizeof(car);
    return 0;
}