#include<iostream>
using namespace std;

template <class x> void swapx(x &a, x &b){
	x temp;
	temp = a;
	a=b;
	b= temp;
}

int main(){
	int i=10,j=20;
	double n=10.25,m=19.75;
	char a='x',b='d';
	
	swapx(i,j);
	swapx(n,m);
	swapx(a,b);
	cout<<i<<"  "<<j<<"  "<<n<<"  "<<m<<"  "<<a<<"  "<<b<<endl;
}
