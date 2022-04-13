#include<iostream>
#define Twoseating_ticket 350
#define Threeseating_ticket 500
using namespace std;
class Bus_Ticket_Booking
{
    int change;
    public:
    Bus_Ticket_Booking(int amount,int person)
    {
        if(amount>Twoseating_ticket*person)
        {
           change=amount-Twoseating_ticket*person;
           cout<<"Amount return: "<<change<<endl;
        }
        else
        {
           change=Twoseating_ticket*person-amount;
          cout<<"Amount needed: "<<change<<endl;
        }
    }
    Bus_Ticket_Booking(int amount,int person,int diff)
    {
        if(amount>Threeseating_ticket*person)
        {
           change=amount-Threeseating_ticket*person;
           cout<<"Amount return: "<<change<<endl;
        }
        else
        {
           change=Threeseating_ticket*person-amount;
          cout<<"Amount needed: "<<change<<endl;
        }
    }
};
int main()
{

  int seat,person;
  int amount,no_of_person=5;
   int i=0;
  cout<<"---$ ZOHO BUS TICKETING APPLICATION $---"<<endl;
  while(i<no_of_person)
  {cout<<"Choose Seating Arrangement(2 or 3) : ";
    cin>>seat;
  if(seat==2)
  {
      cout<<"People Count: ";
      cin>>person;
    if(person==1 && (i+1)<no_of_person)
    {
        cout<<"Pay Your Amount: ";
       cin>>amount;
       Bus_Ticket_Booking seat1(amount,person);
       i=i+1;
       cout<<endl<<"Seat Filled: "<<i<<endl<<endl;
       continue;
    }
    else if(person==2 && (i+2)<=no_of_person)
    {
        cout<<"Pay Your Amount: ";
     cin>>amount;
     Bus_Ticket_Booking seat2(amount,person);
       i=i+2;
       cout<<endl<<"Seat Filled: "<<i<<endl<<endl;
       continue;
     }
     else
     {
       cout<<"Please go with Threeseating or Other seating"<<endl;
       continue;
     }

  }
  else if(seat==3 )
  { cout<<"People Count: ";
    cin>>person;
    if(person==1 && (i+1)<=no_of_person)
    {
        cout<<"Pay Your Amount: "<<i;
       cin>>amount;
       Bus_Ticket_Booking seat1(amount,person,1);
       i=i+1;
       cout<<endl<<"Seat Filled: "<<i<<endl<<endl;
       continue;
    }
    else if(person==2 && (i+2)<=no_of_person )
    {
        cout<<"Pay Your Amount: ";
     cin>>amount;
     Bus_Ticket_Booking seat2(amount,person,1);
       i=i+2;
       cout<<endl<<"Seat Filled: "<<i<<endl<<endl;
       continue;
     }
     else if(person==3 && (i+3)<=no_of_person)
    {
        cout<<"Pay Your Amount: "<<i;
     cin>>amount;
     Bus_Ticket_Booking seat2(amount,person,1);
       i=i+3;
       cout<<endl<<"Seat Filled: "<<i<<endl<<endl;
       continue;
     }
     else
     {
     cout<<"***Please Go with Other seating***"<<endl;
     continue;
     }
  }
  else{cout<<"NO MORE TYPE OF SEATING"<<endl; continue;}

}
cout<<"--------NO MORE SEAT IS AVAILABLE---------"<<endl;

return 0;
}
