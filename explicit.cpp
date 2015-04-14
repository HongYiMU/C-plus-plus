#include <iostream>
using namespace std;

class TheExplicit{
private:
	int num;
public:
	explicit TheExplicit(int n){
		num = n;
	}
	void print(){
		cout << "TheExplicit print num : n = "<< num << endl;
	}
};

class NonExplicit{
private:
	int num;
	char c;
public:
	NonExplicit(int n, char m){
		num = n;
		c = m;
	}
	void print(){
		cout << "NonExplicit print num : n = " << num << endl;
	}
};

int  main(){
	TheExplicit exp = 3;
	NonExplicit nexp = 4;	
	TheExplicit exp2(3);
	return 0;
}
