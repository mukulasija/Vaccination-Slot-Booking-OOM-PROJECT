#ifndef __Human
#define __Human
using std::string;
namespace example
{
    class Human 
    {
        protected:
        string fname;
        string lname;
        string aadhaar;
        string city;
        string state;
        int userslotno;
        
        public:
        Human();     
        string getname();
        void changename();
        void showallslots();
        void setslotno(int sno);
        void showdetails();
        void showslot();
        void changeSelfDetails();
        int showfamilymembersforslotbooking();
        int showfamilymembersforslotchecking();
    };
}

#endif