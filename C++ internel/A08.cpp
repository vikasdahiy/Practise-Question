#include<iostream>
using namespace std;


//object declration in c++

class myCar{
public:

string brand;
string model;
int number;
};
int main()
{

    myCar myObj1;
    myObj1.brand="toyota";
    myObj1.model="x350";
    myObj1.number=1002;


     myCar myObj2;
    myObj2.brand="lamborgini";
    myObj2.model="x350";
    myObj2.number=1002;

   cout<<myObj1.brand<<" "<<myObj1.model<<" "<<myObj1.number<<endl;
    cout<<myObj2.brand<<" "<<myObj2.model<<" "<<myObj2.number<<endl;
}