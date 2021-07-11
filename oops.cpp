#include<bits/stdc++.h>
#include "Human.h"
#include "Family.h"
#include "Self.h"
#include "admin.h"
#include "slot.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using example::Human;
using example::Family;
using example::Self;
using example::admin;
using example::slot;  
void adminLogin()
{
admin a;
a.enterpassword();
a.adminoptions();
}
void userLogin()
{
    Self s;
    Family m1;
    Family m2;
    Family::f1=&m1;
    Family::f2=&m2;
    s.personalDetails();
    cout<<"--------------------\n";
    cout<<"--------------------\n";
    cout<<"--------------------\n";
    cout<<"--------------------\n";
    system("clear");
    s.options();
}
int main()
{
    system("clear");
   slot s1("10:00AM","12:30PM",100,"Dev Samaj Hospital",1);
   slot s2("12:30PM","03:30PM",100,"Civil Hospital",0);
   slot s3("10:00PM","12:30PM",100,"Civil Hospital",1);
   slot s4("12:30PM","03:30PM",100,"Ramlal Hospital",0);
   slot::a1=&s1;
   slot::a2=&s2;
   slot::a3=&s3;
   slot::a4=&s4;
    FirstInput:
    cout<<"1. Admin login\n";
    cout<<"2. User login\n";
    cout<<"3. Exit\n";
    int input;
    cin>>input;
    system("clear");
    switch (input)
    {
    case 1:
    adminLogin();
    goto FirstInput;
    break;
    case 2:
    userLogin();
    break;
    case 3:
    break;
    default:
    cout<<"Please select a valid option\n\n";
    goto FirstInput;
    break;
    }

}