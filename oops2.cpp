#include<bits/stdc++.h>
using namespace std;
class laptop{
    private:
    string model;
    int cores;
    public:
    /***
     * getter setter is used in order to prevent direct changes in data members;
    */
    void setter(int core, string model){
        this->cores= core;
        this->model= model;
    }
    void getter(){
        cout<<"model of laptop is "<<this->model<<endl;
        cout<<"num of cores is "<<this->cores<<endl;
    }
};
int main(){
    laptop l1,l2;
    l1.setter(8,"windows");
    l2.setter(10,"lenovo");
    l1.getter();
    return 0;
}