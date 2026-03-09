//QUESTION

/*#include<iostream>
using namespace std;
class student
{
 int rollNo;string name;int marks1;int marks2;int marks3;
 int calculateTotal() //getter
 {return(marks1+marks2+marks3);}

public:
void inputDetails() //setter
{
   cout<<"\n Enter RollNo, name,marks1,marks2,marks3 :";
   cin>>rollNo>>name>>marks1>>marks2>>marks3;
}
void displayDetails() //getter
{
  cout<<"\n Name : "<<name<<"\n Roll No : "<<rollNo;
  cout<<"\n Marks1 :"<<marks1<<"\n Marks2 :"<<marks2<<"\n Marks3 :"<<marks3;
  cout<<"\n Total :"<<calculateTotal();
}
};

int main()
{
  student s1; //s1 is the object/instance of the class student
  s1.inputDetails();
  s1.displayDetails();
  return 0;
}*/


/*#include<iostream>
using namespace std;
class BankAccount

    {
 	string accountHolderName;
 	int accountNumber;
    double balance;
    public:
    void inputDetails();
    void displayDetails();
	void deposit(double amount);
	void withdraw(double amount);
    };


 void BankAccount::inputDetails()
    {
        cout<<"Enter Account Number";
        cin>>accountNumber;
        cout<<"Enter Account holder name";
        cin.ignore();
        getline(cin,accountHolderName);
        cin>>balance;
    }

	void BankAccount::deposit(double amount)
    {
       balance+=amount;
       cout<<"\n Amount deposited \n Balnce = "<<balance;
    }

	void BankAccount::withdraw(double amount)
    {
        if(amount>balance)
        cout<<"\n Denied..Insufficient Balance";
        else
        {
            balance-=amount;
            cout<<"\n Amount withdraw \n Balance ="<<balance;
        }
    }

    
	void displayDetails()
    {
        cout<<"\n Account Number "<<accountNumber;
        cout<<"\n Account Holder Name "<<accountHolderName;
        cout<<"\n Balance : "<<balance;
    }

    int main()
    {
        BankAccount ac1;
        ac1.inputdetails();
        char choice;
        cout<<"\n D for deposit W for withdrawal : ";
        cin>>choice;
        if(choice=='D')
        ac1.deposit(5000);
        else
        ac1.withdraw(12000);
        return 0;
    }*/
    

   




    /*#include<iostream>
    using namespace std;
    class Candy
    {
      string color;
      int points;
      public:
      void setCandy(string,int);
      void displayCandy();
    };
    void Candy::setCandy(string c,int p)
    {
        color=c;points=p;
    }
    void Candy::displayCandy()
    {
        cout<<"\n Color : "<<color;
        cout<<"\n Points : "<<points;
    }
    int main()
    {
        Candy c1,c2;
        c1.setCandy("Red",35);
        c2.setCandy("Blue",40);
        c1.displayCandy();
        c2.displayCandy();
        return 0;
    }*/






    #include<iostream>
    using namespace std;
    class Candy
    {
      string color;
      int points;
      public:
      Candy();//default constructor
      Candy(string clr);//parameterized constructor
      Candy(string clr,int pts);//parameterized constructor
      void setCandy(string,int);
      void displayCandy();
    };
    Candy::Candy()
    {
        color="Black";points=0;
    }
    Candy::Candy(string clr)
    {
        color=clr;points=0;
    }
    Candy::Candy(string clr,int pts)
    {
        color=clr;points=pts;
    }
    void Candy::setCandy(string c,int p)
    {
        color=c;points=p;
    }
    void Candy::displayCandy()
    {
        cout<<"\n Color : "<<color;
        cout<<"\n Points : "<<points;
    }
    int main()
    {
        Candy c1,c2("Red",30);
        //c1.setCandy("Red",35);
        //c2.setCandy("Blue",40);
        c1.displayCandy();
        c2.displayCandy();
        return 0;
    }