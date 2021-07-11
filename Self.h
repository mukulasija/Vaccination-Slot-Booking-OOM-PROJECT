#ifndef __Self
#define __Self
#include "Family.h"
#include "Human.h"
using std::cout;
using std::cin;
using std::string;
namespace example
{
    class Self : public Human
    {
        private:
        string phoneNo;
        string password;
        void updatedetails();
        public:
        void BookSlot();
        void options();
        void personalDetails();
        void AddFamilyMember();
        void getbookingdetalis();
void EditFamilyDetails();
        
    };
}
#endif