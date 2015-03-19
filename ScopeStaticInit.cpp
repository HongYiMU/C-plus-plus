/*************************************************************************
    > File Name: ScopeStaticInit.cpp
    > Author: mushipu
    > Mail: mushipu1988@163.com 
    > Created Time: Fri Mar 13 11:10:25 2015
 ************************************************************************/
#include <iostream>
using namespace std;
int x = 100;

class withStatic {
	static int x;
	static int y;
public:
	void print() const{
		cout << "withStatic::x = " << x << endl;
		cout << "withStatic::y = " << y << endl;
	}
};

int withStatic::x = 1;
int withStatic::y = x+1;
// WithStatic::x NOT ::x

main() {
	withStatic WS;
	WS.print();

}





