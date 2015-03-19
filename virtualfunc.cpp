/*************************************************************************
    > File Name: virtualfunc.cpp
    > Author: mushipu
    > Mail: mushipu1988@163.com 
    > Created Time: Thu Mar 19 11:49:22 2015
 ************************************************************************/
#include <iostream>
using namespace std;

class A{
	public :
		virtual void print(){
			cout << "This is A" << endl;
		}
};

class B{
	public :
		void print(){
			cout << "This is B" << endl;
		}
};

int main(void){
	A a;
	B b;
	A* p1 = &a;
	A* p2 = (A*)&b;
	p1->print();
	p2->print();
	return 0;
}
