/*13. 4.23 (Dangling- else Problem) C++ compilers always associate an else with
the immediately preceding if unless told to do otherwise by the placement of braces
( { and } ). This behavior can lead to what is referred to as the dangling- else
problem. The indentation of the nested statement (c++ how to program)*/
#include <iostream>
using namespace std; 
int main(){

    int x(0),y(0);
    cout << "Enter x : ";
    cin>>x;
    cout << "Enter Y : ";
    cin>>y;

if (x > 5){
if (y > 5){
cout << "x and y are > 5\n";
 }
}
else{
cout << "x is <= 5\n";
 }
}