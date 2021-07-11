#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include "Self.h"
using std::string;
using std::cout;
using std::cin;
using std::cerr;
using example::Self;
using std::endl;

namespace example
{
    void Self::personalDetails()
    {
        cout<<"Enter Your Phone Number: ";
        cin>>this->phoneNo;
        cout<<"Create your password: ";
        cin>>this->password;
        system("clear");
        cout<<"Enter Your First Name: "; 
        cin>>this->fname;
        cout<<"Enter Your Last Name: ";
        cin>>this->lname;
        cout<<"Aadhaar number: ";
        cin>>this->aadhaar;
        cout<<"City: ";
        cin>>this->city;
        cout<<"State: ";
        cin>>this->state;
    }


void Self::AddFamilyMember()
{
    if((Family::f1)->assigned==0)
    {
        Family::f1->assigned=1;
        Family::f1->declare();
    }
    else
    if((Family::f2)->assigned==0)
    {
        Family::f2->assigned=1;
        Family::f2->declare();
    }
    else
    {
        cout<<"Sorry..You can add max two family members\n";
    }
}

void Self::EditFamilyDetails()
{
    back:
    int no=0;
    if(Family::f1->isassigned())
    {
        no++; 
        cout<<"1. Change Details of "<<Family::f1->getname()<<endl;
    }
    if(Family::f2->isassigned())
    {
        no++;
        cout<<"2. Change Details of "<<Family::f2->getname()<<endl;
    }
    if(no==0)
    cout<<"No family members added\n";
    else
    if(no==1)
    {
        cout<<"2. Go back\n";
        int input;
        cin>>input;
        switch(input)
        {
            case 1:
            Family::f1->changeSelfDetails();
            break;
            case 2:
            return;
            break;
            default:
            cout<<"Please select a valid option\n";
            goto back;
            break;
        }
    }
    else
    if(no==2)
    {
        cout<<"3. Go back\n";
        int input;
        cin>>input;
        switch(input)
        {
            case 1:
            Family::f1->changeSelfDetails();
            break;
            case 2:
            Family::f2->changeSelfDetails();
            break;
            case 3:
            return; 
            break;
            default:
            cout<<"Please select a valid option\n";
            goto back;
            break;
        }
    }

}
void Self::BookSlot()
{
    back:
    cout<<"1. Book for "<<this->fname<<endl;
   int no= this->showfamilymembersforslotbooking();
   int option;
   int slotno;
   if(no==0)
   {
       cout<<"2. Go back\n";
       cin>>option;
       switch(option)
       {
           case 1:
           if(userslotno!=0)
           {
               cout<<"User has already booked slot\n";
               return;
           }
           this->showallslots();
           
           cin>>slotno;
           if(slotno>4){
           cout<<"Please select a valid option\n";
           goto back;
           }
           userslotno=slotno;
           if(slotno==1)
          userslotno=1;
        // slot::showslotDetailsToUser();
           break;
           case 2:
           return; 
           break; 
           default:
           cout<<"Please select a valid option\n";
           goto back;
           break;
       }
   }
   if(no==1)
   {

       cout<<"3. Go back\n";
       cin>>option;
       Family f1=*(Family::f1);
       switch(option)
       {
           case 1:
           this->showallslots(); 
           cin>>slotno;
           if(slotno>4 || slotno<1){
           cout<<"Please select a valid option\n";
           goto back;
           }
           this->setslotno(slotno);
        // slot::showslotDetailsToUser();
           break;
           case 2:
           this->showallslots(); 
           cin>>slotno;
           if(slotno>4 || slotno<1){
           cout<<"Please select a valid option\n";
           goto back;
           }
           f1.setslotno(slotno);

        //    this->showallslots();
        //    cin>>slotno;
        //    f1.setslotno(slotno);
           break;
           case 3:
           return; 
           break; 
           default:
           cout<<"Please select a valid option\n";
           goto back;
           break;
       }
   }
   if(no==2)
   {
         cout<<"4. Go back\n";
       cin>>option;
       Family f1=*(Family::f1);
       Family f2=*(Family::f2);
       switch(option)
       {
           case 1:
           this->showallslots(); 
           cin>>slotno;
           if(slotno>4 || slotno<1){
           cout<<"Please select a valid option\n";
           goto back;
           }
           this->setslotno(slotno);
        // slot::showslotDetailsToUser();
           break;
           case 2:
           this->showallslots(); 
           cin>>slotno;
           if(slotno>4 || slotno<1){
           cout<<"Please select a valid option\n";
           goto back;
           }
           f1.setslotno(slotno);

        //    this->showallslots();
        //    cin>>slotno;
        //    f1.setslotno(slotno);
           break;
           case 3:
           this->showallslots(); 
           cin>>slotno;
           if(slotno>4 || slotno<1){
           cout<<"Please select a valid option\n";
           goto back;
           }
           f2.setslotno(slotno);
           break;
           case 4:
           return; 
           break; 
           default:
           cout<<"Please select a valid option\n";
           goto back;
           break;
       }   
   cout<<"4. Go back\n";
   }
   
}

void Self::getbookingdetalis()
{
    back:
    cout<<"1. Check for "<<this->fname<<endl;
    int option;
    int no=this->showfamilymembersforslotchecking();
    if(no==0)
    {
        cout<<"2. Go Back\n";
        cin>>option;
        if(option==1)
        {
            this->showslot();
        }
        else
        if(option==2)
        {
            return;
        }
        else
        {
            cout<<"Please select a valid option\n";
            goto back;
        }
    }
    if(no==1)
    {
        cout<<"3. Go back\n";
        cin>>option;
        if(option==1)
        {
            this->showslot();
        }
        if(option==2)
        {
            Family::f1->showslot();
        }
        if(option>3)
        {
            cout<<"Please select a valid optoin\n";
        }
        
    }
    if(no==2)
    {
        cout<<"4. Go back\n";
        cin>>option;
        if(option==1)
        {
            this->showslot();
        }
        if(option==2)
        Family::f1->showslot();
        if(option==3)
        Family::f2->showslot();
        if(option>4)
        {
            cout<<"Please select a valid option\n";
            goto back; 
        }
    }
}
    void Self::options()
    {
     opt:
       cout<<"---------------------------------\n";
        cout<<"        Select an option\n";
        cout<<"---------------------------------\n";
cout<<"1.Edit Your Details\n";
cout<<"2.Add family members\n";
cout<<"3.Edit family members details\n";
cout<<"4.Book Slot\n";
cout<<"5.Check Booking details\n";
cout<<"6.Exit\n";
cout<<"\n\n\n\n Choose an option to proceed furthur\n";

int input;
cin>>input;
switch (input)
{
case 1:
this->changeSelfDetails();
break;
case 2:
this->AddFamilyMember();
break;
case 3:
this->EditFamilyDetails();
break;
case 4:
this->BookSlot();
break;
case 5:
this->getbookingdetalis();
break;
case 6:
return ; 
break;
default:
cout<<"Choose a valid option\n";
//goto opt;
break;
}
goto opt;
}
}