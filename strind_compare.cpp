//string compare -compare is  a fun to  do so
#include <iostream>
#include <string>
  using namespace std;

   int main()
   {
    string str1 ="banana";
    string str2 ="apple";
    int result = str1.compare(str2);
    if(result == 0)
    {
        cout<<"strings are equal"<<endl;

    }
    else if(result< 0)
    {
        cout<<str1<<" comes before "<<str2<<"lexicographically"<<endl;
    }
    else
    {
        cout<<str1<<" comes after "<<str2<<"lexicographically"<<endl;
    }


   }
