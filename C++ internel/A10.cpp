#include<iostream>
using namespace std;

class company{
    public:

    void model();
};


void company::model(){
    cout<<"lamborgini";
}

int main(){
    company obj1;
    obj1.model();
    return 0;
}