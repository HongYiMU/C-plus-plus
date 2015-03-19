/*************************************************************************
    > File Name: HowMany.cpp
    > Author: mushipu
    > Mail: mushipu1988@163.com 
    > Created Time: Fri Mar 13 12:19:09 2015
 ************************************************************************/
#include <fstream>
using namespace std;
ofstream out("howmany.out");

class HowManyObjs {
	static int object_count;
	int obj;
public:
	
	HowManyObjs() {
		object_count++;
	}

	static void print(const char* msg = 0) {
		if(msg) out << msg << ":";
		out << "object_count = "
			<< object_count << endl;
	}

	~HowManyObjs() {
		object_count--;
		print("~howmany()");
	}

};

int HowManyObjs::object_count = 0;

// Pass and return BY value:
HowManyObjs f(HowManyObjs x) {
	x.print("x argument inside f()");
	return x;
}

main(){
	HowManyObjs h;
	HowManyObjs::print("after construction of h");
	HowManyObjs h2 = f(h);
	HowManyObjs::print("after call to f()");
}

