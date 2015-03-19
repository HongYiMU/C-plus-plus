/*************************************************************************
    > File Name: hanota.cpp
    > Author: mushipu
    > Mail: mushipu1988@163.com 
    > Created Time: Wed Mar 18 16:34:23 2015
 ************************************************************************/
#include <iostream>
using namespace std;
const int MAX = 64;

struct st{
	int s[MAX];
	int top;
	char name;
	int Top(){
		return s[top];
	}
	int Pop(){
		return s[top--];
	}
	void Push(int x){
		s[++top] = x;
	}

};
long Pow(int x, int y);
void Create(st ta[], int n);
void Hannuota(st ta[], long max);



int main(void){
	int n;
	cout << "input panel's count:";
	cin >> n;	//input panel's count;
	st ta[3];	//three column tower;
	cout << "Creating..." << endl;
	Create(ta, n);	// init structure;
	long max = Pow(2, n) - 1; // The movements num should be 2^n - 1
	Hannuota(ta, max);
	return 0;

}

void Create(st ta[], int n){
	ta[0].name = 'A';
	ta[0].top = n-1;
	for (int i=0; i<n; i++){
		ta[0].s[i] = n-i;
		ta[1].top = ta[2].top = 0;
	}
	for(int i=0; i<n; i++){
		ta[i].s[i] = ta[2].s[i] = 0;
	}
	if(n%2 == 0){
		ta[1].name = 'B';
		ta[2].name = 'C';
	}
	else{
		ta[1].name = 'C';
		ta[2].name = 'B';
	}
}


long Pow(int x, int y){
	long sum = 1;
	for(int i=0; i<y; i++){
		sum *= x;
	}
	return sum;
}

void Hannuota(st ta[], long max){
	int k = 0;
	int i = 0;
	int ch;
	while(k < max){
		ch = ta[i%3].Pop();
		ta[(i+1)%3].Push(ch);
		cout << ++k << ":" <<
			"Move disk " << ch << "from " << ta[i%3].name <<
			"to" << ta[(i+1)%3].name << endl;
		i++;
		if( k< max){
			if(ta[(i+1)%3].Top() == 0 || 
				ta[(i-1)%3].Top() > 0
				&& ta[(i+1)%3].Top()>ta[(i-1)%3].Top()){
				ch = ta[(i-1)%3].Pop();
				ta[(i+1)%3].Push(ch);
				cout << ++k << ":" << " Mome disk"
					<< ch << "from "<< ta[(i-1)%3].name
					<< "to " << ta[(i+1)%3].name << endl;
			}else{
				ch = ta[(i+1)%3].Pop();
				ta[(i-1)%3].Push(ch);
				cout << ++k << ":" << "Move disk"
					<< ch << " from "<< ta[(i+1)%3].name
					<< " to " << ta[(i-1)%3].name << endl;
			}
		}
	}
}




