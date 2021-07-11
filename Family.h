#ifndef __Family
#define __Family
#include "Human.h"
namespace example
{
    class Family : public Human
    {
        public:
        static Family* f1;
        static Family* f2;
        void declare();
        Family();
        bool assigned;
        bool isassigned();
        void bookforname();
        void assign();
        // int showfamilymembersforslotbooking();
        // int showfamilymembersforslotchecking();
    };
}
#endif