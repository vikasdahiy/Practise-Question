#include <iostream>
using namespace std;
int main()
{
    string myCar[]={"maybach" , "rollsroys","bmw","buggati","mercedes","audi" };

    for(int i=0;i<= 5;i++){
        //cout<<myCar[i]<<" __ ";
        cout << i << ": " << myCar[i] << "\n";
    }
   // cout<<myCar[3];
   int stringLenght = sizeof(myCar)/sizeof(string);
   cout<<sizeof(stringLenght);
    return 0;


}