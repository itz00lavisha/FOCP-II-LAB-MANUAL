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
    cout<<"\n Area of square "<<side*side;
   }
   void perimeter()
   {
    cout<<"\n No perimeter of square= "<< 4*side;
   }
   void dimension()
   {
    cout<<"\n Side is: n"<<side;
   }
};

int main()
{
  shape s1;
  Square s,ss(12);
  s1.area();
  s1.perimeter();
  s1.dimension();
  s1.display();
  ss.area();
  ss.perimeter();
  ss.dimension();
  ss.shape::area();
  ss.display();
  
return 0;

}