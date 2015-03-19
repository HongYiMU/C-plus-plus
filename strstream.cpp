/*************************************************************************
    > File Name: strstream.cpp
    > Author: mushipu
    > Mail: mushipu1988@163.com 
    > Created Time: Wed Mar  4 17:43:53 2015
 ************************************************************************/
#include <strstream.h>
main()
{
	istrstream s("1.444 47 This is a test");
	int i;
	float f;
	s >> i >> f;
	char buf2[100];
	s>>buf2;
	cout << "i=" << i << ", f = " << f;
	cout << "buf2 = " << buf2 << endl;
	cout << s.rdbuf();
}


