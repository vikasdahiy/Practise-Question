#include<iostream>
using namespace std;
int main()
{
    int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
    int number[2][4]={
        {1,2,3,4},
        {11,22,33,44}

    };
    

   // cout<<x[0][3]<<endl;
    //cout<<number[0][3];

for(int i=0;i<=2;i++){
    for(int j=0;j<=3;j++){
        cout<<i<<j<<": "<<x[i][j]<<"\n";
    }
}

    return 0;
}