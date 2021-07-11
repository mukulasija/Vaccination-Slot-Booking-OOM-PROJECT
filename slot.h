#ifndef __slot
#define __slot
using std::string;
namespace example
{
    class slot
    {
        public: 
       static slot* a1;
       static slot* a2;
       static slot* a3;
       static slot* a4;
       slot();
       slot(string stime,string etime,int leftDoses,string Hname,bool free);
        protected:
        string stime;
        bool slotavailable;
        string etime;
        bool free;
        int leftDoses;
        string Hname;
        public:
        bool isavailable();
        void showallslots();
        void editSlotDetailsByAdmin();
        void showslotDetailsToAdmin();
        void showslotDetailsToUser();
    };
}
#endif