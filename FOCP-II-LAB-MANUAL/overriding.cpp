#include<iostream>
using namespace std; 
class shape
{
  public:
  void area()
  {
    cout<<"\n No dimensions , No area";
  }
  void perimeter()
  {
    cout<<"\n No dimensions , No perimeter";
  }
  void dimension()
  {
    cout<<"\n Nothing to display";
  }
  void display()
  {
    cout<<"\n ************WE ARE 2D SHAPES************";
  }
};

class Square:public shape
{
   int side;
   public:
   Square()
   {side=0;}
   Square(int s)
   {side=s;}
   void  area()    //OVERRIDING
   {
    cout<<"\n Area of square "
   }





};