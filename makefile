all: Output

Output: Human.h Human.cpp Family.h Family.cpp Self.h Self.cpp slot.h slot.cpp admin.h admin.cpp oops.cpp
	g++ -o Output Human.cpp Family.cpp Self.cpp slot.cpp oops.cpp admin.cpp
clean:
	rm -f Output
#   cout<<"---------------------------------\n";
#         cout<<"        Select an option\n";
#         cout<<"---------------------------------\n";
#password for admin page is 90508 