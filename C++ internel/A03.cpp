 #include <iostream>
using namespace std;

int main() {
  // We put "1" to indicate there is a ship.
  bool ships[4][4] = {
    { 0, 1, 1, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 1, 0 },
    { 0, 0, 1, 0 }
  };

int hits =0,noOfTurns=0;

while(hits<4){

int row,column;

cout <<"enter the row";
cin>>row;
cout<<"entter the column";
cin>>column;

if(ships[row][column]){

ships[row][column]=0;

hits++;
cout<<"ships left"<<(4-hits);

}

else{
  cout<<"Miss!, try again";

}
noOfTurns++;

}

cout<<"you have won yay!"<<" "<<"in no of turns"<<noOfTurns;
return 0;
}
