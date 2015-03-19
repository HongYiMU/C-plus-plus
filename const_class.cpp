/*************************************************************************
    > File Name: const_class.cpp
    > Author: mushipu
    > Mail: mushipu1988@163.com 
    > Created Time: Thu Mar  5 17:24:08 2015
 ************************************************************************/

#include <iostream>
using namespace std;
class X{};
X f() {return X();}
void g1(X&){

}
void g2(const X&){

}
main(){
	//g1(f());
	g2(f());
}






