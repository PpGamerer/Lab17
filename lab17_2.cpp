#include<iostream>
#include "lab17_2.h"
using namespace std;

void myString(char *&x,int N){
	x = new char[N];    
	for(int i = 0; i < N;i++) x[i] = 'A'+i;
	x[N] = 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;
    NewFunction(p, N);
    cout << p;	
	delete [] p;
	return 0;
}
void NewFunction(char *&p, int N)
{
    myString(p, N);
}
