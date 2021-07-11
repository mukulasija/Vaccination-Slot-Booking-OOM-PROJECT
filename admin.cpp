#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include "admin.h"
#include "slot.h"

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using example::slot;


namespace example
{
    void admin::adminoptions()
    {
        again:
        cout<<"---------------------------------\n";
        cout<<"        Select an option\n";
        cout<<"---------------------------------\n";
        cout<<"1.Edit Slots\n2.Go back\n";
        int input;
        cin>>input;
        system("clear");
        switch(input)
        {
            case 1:
            this->editslotsbyadmin();
            
            goto again;
            break;
            
            case 2:
           
            return;
            break;
            default:
            cout<<"Please select a valid option\n";
            goto again;
            break;
        }
    }
    void admin::editslotsbyadmin()
    {
        system("clear");
        this->showslotstoadmin();
        goback:
        int input;
        cin>>input;
        switch(input)
        {
            case 1:
            slot::a1->editSlotDetailsByAdmin();
            break;
            case 2:
            slot::a2->editSlotDetailsByAdmin();
            break;
            case 3:
            slot::a3->editSlotDetailsByAdmin();
            break;
            case 4:
            slot::a4->editSlotDetailsByAdmin();
            break;
            case 5:
            cout<<"------------------------------\n";
            cout<<"------------------------------\n";
            cout<<"------------------------------\n";
            system("clear");
            cout<<"------------------------------\n";
            cout<<"------------------------------\n";
            return;
            break;
            default:
            cout<<"Please Select a Valid option...";
            goto goback;
            break;
        }

    }
    void admin::showslotstoadmin()
    {
        cout<<"---------------------------------\n";
        cout<<"        Select an option\n";
        cout<<"---------------------------------\n";
        cout<<"1. ";slot::a1->showslotDetailsToAdmin();
        cout<<"2. ";slot::a2->showslotDetailsToAdmin();
        cout<<"3. ";slot::a3->showslotDetailsToAdmin();
        cout<<"4. ";slot::a4->showslotDetailsToAdmin();
        //cout<<"---------------------------------\n";
        cout<<"5. GO BACK\n"; 
        cout<<"---------------------------------\n";
        cout<<"---------------------------------\n";


    }
    admin::admin()
    {
        cout<<"------------------\n";
        cout<<"   Admin Page\n";
        cout<<"------------------\n";
        cout<<"------------------\n";
    }
    void admin::enterpassword()
    {
        adminPassEnteringPoint:
        cout<<"Enter the password:";
        int adminpass;
        cin>>adminpass;
        if(adminpass==90508)
        {
            system("clear");
            cout<<"Password matched successfully\n";
            cout<<"--------------------------------\n";
            cout<<"--------------------------------\n";
            cout<<"Redirecting you to admin dashboard\n";
            cout<<"--------------------------------\n";
            cout<<"--------------------------------\n\n\n";
        }
        else
        {
            cout<<"Wrong password...Please enter the password again\n";
            goto adminPassEnteringPoint;
        }
    }
}