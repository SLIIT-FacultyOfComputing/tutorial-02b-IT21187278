/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.
*/

#include<iostream>
using namespace std;
int main(){

  int no;
  long fac;

  cout<<"Enter a number : ";
  cin>>no;
  fac=1;
  for(int r=no; r>=1; r--){
    fac =fac*r;
  }

  cout<<"Factorial of "<<no<<" is "<<fac;
  return 0;
  
}
