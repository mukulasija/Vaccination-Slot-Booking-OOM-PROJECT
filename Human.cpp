#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include "slot.h"
#include "Human.h"
#include "Family.h"

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using example::slot;
using example::Human;
using example::Family;

namespace example
{
   void Human::showallslots()
    {
        cout<<"1. ";slot::a1->showslotDetailsToUser();
        cout<<"2. ";slot::a2->showslotDetailsToUser();
        cout<<"3. ";slot::a3->showslotDetailsToUser();
        cout<<"4. ";slot::a4->showslotDetailsToUser();
    }
    Human::Human()
    {
        userslotno=0;
    }
        void Human::changeSelfDetails()
    {
        back:
        this->showdetails();
        // cout<<"FName: "<<this->fname<<"   LName: "<<lname<<"   Aadhar No: "<<this->aadhaar<<"  City: "<<this->city<<"  State: "<<this->state<<endl<<endl;
	cout<<"1.Change First Name\n";
	cout<<"2.Change Last Name\n";
	cout<<"3.Change Aadhar Number\n";
	cout<<"4.Change City\n";
	cout<<"5.Change State\n";
	cout<<"6.Go back to previous menu\n";
	cout<<"\n\n\nChoose an option to proceed\n";
	int option;
        cin>>option;
        
        switch(option)    
        {
            case 1:
            cout<<"Enter first name: ";
            cin>>this->fname;
            break;
            case 2:
            cout<<"Enter Last Name: ";
            cin>>this->lname;
            break; 
            case 3:
            cout<<"Enter Aadhaar Number: ";
            cin>>this->aadhaar;
            break;
            case 4:
            cout<<"Enter City: ";
            cin>>this->city;
            break;
            case 5:
            cout<<"Enter State: ";
            cin>>this->state;
            break; 
            case 6:
            return;
            break;
            default:
            cout<<"Please select a valid option\n";
            
            break;
            
    // this->updatedetails();
    }goto back;
    }
    void Human::showslot()
    {
        int no=this->userslotno;
        //cout<<"slot no"<<no;
            system("clear");
            cout<<"Showing slot booked for "<<this->fname<<": ";
        switch(no)
        {
            case 0:
            cout<<"Slot Not booked Yet\n\n";
            break;
            case 1:
            slot::a1->showslotDetailsToUser();
            cout<<endl;
            break;
            case 2:
            slot::a2->showslotDetailsToUser();
            cout<<endl;
            break;
            case 3:
            slot::a3->showslotDetailsToUser();
            cout<<endl;

            break;
            case 4:
            slot::a4->showslotDetailsToUser();
            cout<<endl;

            break;
        }
    }
    void Human::setslotno(int sno)
    {
        this->userslotno=sno;
    }
    void Human::showdetails()
    {
        // cout<<"First Name: "<<this->fname<<" Last Name: "<<lname<<
	cout<<"FName: "<<this->fname<<"   LName: "<<lname<<"   Aadhar No: "<<this->aadhaar<<"  City: "<<this->city<<"  State: "<<this->state<<endl<<endl;
    }
    string Human::getname()
    {
        return fname;
    }
     int Human::showfamilymembersforslotbooking()
    {
        int no=0;
        if(Family::f1->isassigned())
        {
            no++;
        cout<<"2. ";Family::f1->bookforname();
        }
        if(Family::f2->isassigned())
        {
            no++;
        cout<<"3. ";Family::f2->bookforname();
        }
        return no;
    }
    int Human::showfamilymembersforslotchecking()
    {
        int no=0;
        if(Family::f1->isassigned())
        {
            no++;
            cout<<"2. Check for "<<Family::f1->fname<<endl;
        }
        if(Family::f2->isassigned())
        {
            no++;
            cout<<"3. Check for "<<Family::f2->fname<<endl;
        }
        return no;
    }
}