//HELLO WORLD IN C++
#include<iostream>
//using namespace std;
int main()
{
   int a=10;
   float f=21.02;
   char c='p';
   //printf("The value of a=%d The value of f=%f",a,f)
   std::cout<<"The value of a="<<a<<std::endl<<"The value of f="<<f;
   std::cout<<"\nHello"<<std::endl<<"World";
   return 0;

//\n can also be used for coming to next line in c++...but in c++ we can also use <<std::endl

}

//scanf(%d........)-in C language
//cin>>a>>b>>c;-in C++ language
//OR
// cin>>a;
//cin>>b;
//cin>>c:




#include<iostream>
using namespace std;
int main()
{

int a;
float f;
char c;
cout<<"ENter the value: ";
cin>>a;
cout<<"\nEnter the marks: ";
cin>>f;
cout<<"\nEnter the name: ";
cin>>c;

return 0;

}



