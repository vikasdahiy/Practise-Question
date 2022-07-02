#include<iostream>
using namespace std;
class myClass{
    public:

    int myNum;
    string myName;

};

int main()
{
    myClass myObj;
    myObj.myNum=1555;
    myObj.myName="Vikas Dahiya";

    cout<<myObj.myName<<endl;
    cout<<myObj.myNum;

   return 0;
}