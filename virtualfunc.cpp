/*************************************************************************
    > File Name: virtualfunc.cpp
    > Author: mushipu
    > Mail: mushipu1988@163.com 
    > Created Time: Thu Mar 19 11:49:22 2015
 ************************************************************************/
#include <iostream>
using namespace std;

class Base{
	public :
		void print(){
	//	virtual void print(){	
		cout << "This is Base" << endl;
		}
};
class Son:public Base{
	public :
		void print(){
			cout << "This is Son" << endl;
		}
};
void test(Base& test)
{
	test.print();
}
int main(void){
	Base base;
	Son son;
	base.print();
	son.print();
	test(base);
	test(son);
	
	return 0;
}
