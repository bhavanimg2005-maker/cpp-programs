//string compare using assign
#include <iostream>
#include <string>
  using namespace std;

int main()
   {

  string str;

  str.assign("Hello, World");// assigining in c style
  cout<<str<<endl;


  str.assign("Hello, Universe",7,8);//substuting assignment unniverse
  cout<<str<<endl;

  string other ="c++  programing";
  str.assign(other,4,11);
  cout<<str<<endl;


  }
