#include<bits/stdc++.h> 
#include "slot.h"

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
namespace example
{

    slot* slot::a1=0;
    slot* slot::a2=0;
    slot* slot::a3=0;
    slot* slot::a4=0;
    slot::slot()
    {

    }
    void slot::showallslots()
    {
        a1->showslotDetailsToUser();
        a2->showslotDetailsToUser();
        a3->showslotDetailsToUser();
        a4->showslotDetailsToUser();
    }
       slot::slot(string stime,string etime,int leftDoses,string Hname,bool free)
       {
           this->stime=stime;
           this->etime=etime;
           this->leftDoses=leftDoses;
           this->Hname=Hname;
           this->free=free;
       }
       void slot::showslotDetailsToUser()
       {
         cout<<Hname<<" ";cout<<stime<<" to "<<etime<<" ";
        if(free==1)
        cout<<"(Free)";
        else
        cout<<"(Paid)";
        cout<<endl;
        
       }
 void slot::showslotDetailsToAdmin()
    {
        
        cout<<Hname<<" ";cout<<stime<<" to "<<etime<<" ";
        if(free==1)
        cout<<"(Free)";
        else
        cout<<"(Paid)";
        cout<<endl;
        
    }  

    void slot::editSlotDetailsByAdmin()
    {
        system("clear");
        this->showslotDetailsToAdmin(); 
        cout<<"---------------------\n";
        cout<<"1.Change Start Time and End Time\n2.Change Price\n3.Go back to previous menu\n";
        int slotDetailsChangeInput;
        selectoption:
        cin>>slotDetailsChangeInput;
        switch (slotDetailsChangeInput)
        {
        case 1:
        system("clear");
        cout<<"Enter Start Time(Format=00:00:AM/PM)=";
        cin>>this->stime;
        cout<<"Enter End Time(Format=00:00:AM/PM)=";
        cin>>this->etime; 
        system("clear");
        break;
        case 2:
        system("clear");
        cout<<"1.Free\n2.Paid\n";
        int input;
        freeorpaid:
        cin>>input;
        switch(input)
        {
            case 1:
            this->free=1;
            break;
            case 2:
            this->free=0;
            break;
            default:
            system("clear");
            cout<<"Please select a valid option\n";
            goto freeorpaid;
            break;
        }
        break; 
        case 3:
        system("clear");
        return;
        break;
        default:
        cout<<"Plese select a valid option\n";
        goto selectoption; 
        break;
        }
    }
}


//  int stime;
//         int etime;
//         bool free;
//         int leftDoses;
//         string Hname;