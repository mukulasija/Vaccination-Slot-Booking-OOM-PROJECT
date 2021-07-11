#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include "Human.h"
#include "Family.h"

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using example::Human;
using example::Family;
using std::endl;
namespace example
{
    Family* Family::f1=0;
    Family* Family::f2=0; 
    Family::Family()
    {
        this->assigned=0;
    }
    void Family::bookforname()
    {
        cout<<"Book for "<<this->fname<<endl;
    }
    void Family::declare()
    {
        cout<<"First Name: ";
        cin>>this->fname;
        cout<<"Last Name: ";
        cin>>this->lname;
        cout<<"Aadhar Number: ";
        cin>>this->aadhaar;
        cout<<"City: ";
        cin>>this->city;
        cout<<"State: ";
        cin>>this->state;
    }
    bool Family::isassigned()
    {
        return assigned;
    }
    void Family::assign()
    {
        this->assigned=1;
    }
}
