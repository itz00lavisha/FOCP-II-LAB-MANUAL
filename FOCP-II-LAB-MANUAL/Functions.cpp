//SUM QUEST


/* #include<iostream>
using namespace std;

int sum(int,int);
float sum(float,float);
double sum(double,double);
int main()
{
cout<<endl<<sum(10,20);
cout<<endl<<sum(10.56f,20.89f);
cout<<endl<<sum(10.458678,20.897894);
return 0;
}

int sum(int n1,int n2)
{ 
 cout<<"\n  Int method  ";
 return n1+n2;
}

float sum( float n1,float n2)
{
 cout<<"\n Float method  ";
 return n1+n2; 
}

double sum(double n1,double n2)
{
 cout<<"\n Double method  ";
 return n1+n2;

}


//CALCULATION OF RESULTS



#include<iostream>
using namespace std;

int Result(int,int);
int Result(int,int,int);
int Result(int,int,int,int);
int Result(int,int,int,int,int);

int main()
{
cout<<"\n Result of 2 subjects "<<Result(45,58);
cout<<"\n Result of 3 subjects "<<Result(57,68,95);
cout<<"\n Result of 4 subjects "<<Result(78,49,65,77);
cout<<"\n Result of 5 subjects "<<Result(47,69,84,56,75);
return 0;
}


int Result(int s1,int s2)
{
   return(s1+s2 ); 
}

int Result(int s1,int s2,int s3)
{
   return(s1+s2+s3 ); 
}

int Result(int s1,int s2,int s3,int s4)
{
   return(s1+s2+s3+s4 ); 
}

int Result(int s1,int s2,int s3,int s4,int s5)
{
   return(s1+s2+s3+s4+s5 ); 
}



//RESULT QUEST BY DEFAULT METHOD


#include<iostream>
using namespace std;

int Result(int,int,int=0,int=0,int=0);

int main()
{
cout<<"\n Result of 2 subjects "<<Result(45,58);
cout<<"\n Result of 3 subjects "<<Result(57,68,95);
cout<<"\n Result of 4 subjects "<<Result(78,49,65,77);
cout<<"\n Result of 5 subjects "<<Result(47,69,84,56,75);
return 0;
}

int Result(int s1,int s2,int s3,int s4,int s5)
{
    return(s1+s2+s3+s4+s5);
}*/


// DEFAULT METHOD


#include<iostream>
using namespace std;

void welcome(string="Agent",string="");
int main()
{
 welcome();
 welcome("Lavisha");
 welcome("Lavisha"," Yadav");
 return 0;
}

//DEFINITION
void welcome(string fname,string lname)
{
    cout<<"\n Welcome "<<fname<<lname;
}