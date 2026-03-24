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
    }






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


 //ELECTRICITY BILL

#include <iostream>
using namespace std;

class ElectricityBill
{
private:
 string consumerName;
 int units;
 float billAmount;
public:

 ElectricityBill()    // Default Constructor
 {
 consumerName = "Not Assigned";
 units = 0;
 billAmount = 0;
 }

 ElectricityBill(string name, int u) // Parameterized Constructor
 {
 consumerName = name;
 units = u;
 billAmount = 0;
 }

 void calculateBill()  // Function to calculate bill
 {
 if (units <= 100)
 {
 billAmount = units * 5;
 }
 else if (units <= 200)
 {
 billAmount = (100 * 5) + ((units - 100) * 7);
 }
 else
 {
 billAmount = (100 * 5) + (100 * 7) + ((units - 200) * 10);
 }
 }

 void displayBill()   // Function to display bill
 {
 cout << "\n----- Electricity Bill -----\n";
 cout << "Consumer Name : " << consumerName << endl;
 cout << "Units Consumed: " << units << endl;
 cout << "Total Bill : Rs. " << billAmount << endl;
 }
};

int main()
{

 ElectricityBill obj2("Rahul Sharma", 250);   // Object using Parameterized Constructor
 obj2.calculateBill();
 obj2.displayBill();
 return 0;

}  


//MOVIE TICKET BOOKING SYSTEM

#include <iostream>
using namespace std;

class MovieTicket
{
private:
 string movieName;
 int seatNumber;
 float ticketPrice;
 bool isBooked;

public:
 MovieTicket();  // Constructors
 MovieTicket(string name, int seat, float price);

 void bookTicket();
 void cancelTicket();
 void displayTicketDetails();
 float calculateTotalCost(int numberOfTickets);
};

MovieTicket :: MovieTicket()  // Default Constructor
{
 movieName = "Not Assigned";
 seatNumber = 0;
 ticketPrice = 200;
 isBooked = false;
}

MovieTicket :: MovieTicket(string name, int seat, float price)  // Parameterized Constructor
{
 movieName = name;
 seatNumber = seat;
 ticketPrice = price;
 isBooked = false;
}

void MovieTicket :: bookTicket()   // Book Ticket
{
 if(!isBooked)
 {
 isBooked = true;
 cout << "Ticket booked successfully for seat " << seatNumber << endl;
 }
 else
 {
 cout << "Seat already booked.\n";
 }
}

void MovieTicket :: cancelTicket()  // Cancel Ticket
{
 if(isBooked)
 {
 isBooked = false;
 cout << "Ticket cancelled for seat " << seatNumber << endl;
 }
 else
 {
 cout << "Ticket is not booked yet.\n";
 }
}

void MovieTicket :: displayTicketDetails()   // Display Ticket Details
{
 cout << "\n----- Ticket Details -----\n";
 cout << "Movie Name : " << movieName << endl;
 cout << "Seat Number: " << seatNumber << endl;
 cout << "Ticket Price: Rs. " << ticketPrice << endl;
 cout << "Status: " << (isBooked ? "Booked" : "Not Booked") << endl;
}

float MovieTicket :: calculateTotalCost(int numberOfTickets)   // Calculate Total Cost
{
 return numberOfTickets * ticketPrice;
}


int main()
{
 // Object using default constructor
 MovieTicket ticket1;

 // Object using parameterized constructor
 MovieTicket ticket2("Avengers", 10, 300);

 ticket2.bookTicket();

 ticket2.displayTicketDetails();
 cout << "\nTotal cost for 3 tickets: Rs. "
 << ticket2.calculateTotalCost(3) << endl;
 ticket2.cancelTicket();
 ticket2.displayTicketDetails();
 return 0;
}    */





#include <iostream>
using namespace std;

class Person
{
    string name;int age;
    public:
    Person()
    { 
        cout<<"\n Person default constructor";
        name="Default";
        age=18;
    }
    Person(string nm,int ag)
    {
        cout<<"\n Person parametarized constrtuctor";
        name=nm;
        age=ag;
    }
    void display()
    {
        cout<<"\n Name="<<name<<"\n Age= "<<age;
    }
};


class Student:public Person
{
    string rollno;
    public:
    Student()
    {
        cout<<"\n Student default constructor"; 
        rollno="25CSU000";
    }
    Student(string na,int ag,string rno):Person(na,ag)  //initialization list
    {
        cout<<"\n Student Parametrised";
        rollno=rno;
    }
    void display_Student()
    {
        display();
        cout<<"\n Roll no= "<<rollno;
    }
};

int main()
{
    Student p1,p2("abcd",23,"25CSU111");
    p1.display();
    p1.display_Student();
    p2.display_Student();
    return 0;
}