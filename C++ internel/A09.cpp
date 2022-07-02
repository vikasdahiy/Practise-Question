#include<iostream>
using namespace std;


//method declaration in c++


class myClass{
    public:

    void myMethod();
    //{
      //  cout<<"hello from my method";

    //}

};


void myClass::myMethod(){

    cout<<"hello from outside method declaration";
}
int main(){
myClass myObj;

myObj.myMethod();
return 0;

}