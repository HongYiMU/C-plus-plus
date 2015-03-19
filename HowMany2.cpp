/*************************************************************************
    > File Name: HowMany2.cpp
    > Author: mushipu
    > Mail: mushipu1988@163.com 
    > Created Time: Fri Mar 13 17:42:46 2015
 ************************************************************************/
#include <fstream>
#include <cstring>
#include <iostream>
using namespace std;
ofstream out("howmany2.out");

class howmany2{
	enum {bufsize = 30};
	char id[bufsize]; // Object indentifier
	static int object_count;
public:
	howmany2(const char* ID = 0) {
		if(ID) strncpy(id, ID, bufsize);
		else *id = 0;
		++object_count;
		print("howmany2()");
	}
	//The copy-constructor:
	howmany2(const howmany2& h) {
		strncpy(id, h.id, bufsize);
		strncat(id, " copy", bufsize - strlen(id));
		++object_count;
		print("howmany2(howmany2&)");
	}
	// Can't be static (printing id):
	void print(const char* msg = 0) const {
		if(msg) out << msg << endl;
		out << '\t' << id << ":"
			<< "object_count = "
			<< object_count << endl;
	}
	~howmany2() {
		--object_count;
		print("~howmany2()");
	}
};

int howmany2::object_count = 0;

// Pass and return BY VALUE:
howmany2 f(howmany2 x) {
	x.print("x argument inside f()");
	out << "returning from f()" << endl;
	return x;
}

main() {
	howmany2 h("h");
	out << "entering f()" << endl;
	howmany2 h2 = f(h);
	h2.print("h2 after call to f()");
	out << "call f(), no return value" << endl;
	f(h);
	out << "after call to f()" << endl;

}

