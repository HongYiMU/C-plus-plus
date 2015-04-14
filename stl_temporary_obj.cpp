//This demo intend to test the use of for_each()
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

template <typename T>
class print{
	public:
		void operator()(const T& elem)	// operator() 
		{	cout << elem << ' '; }
};

int main(){
	int ia[6] = { 0,1,2,3,4,5};
	vector<int> iv(ia,ia+6);

	//print<int> () is temporary object , rather than a function call operation;
	for_each(iv.begin(), iv.end(), print<int>());
}


