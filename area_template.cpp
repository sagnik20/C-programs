#include<iostream>

using namespace std;



template <class radious,class pii>
double area(radious r,pii pi){
	return (pi*r*r);
}

template <class square>
int area(square s){
	return (s*s);
}

template <class cub1, class cub2, class cub3>
int area(cub1 l, cub2 b,cub3 h){
	return (2*((l*b)+(b*h)+(h*l)));
}

int main(){
	const double pi = 3.14;
	double a = area(5);
	int b = area(5,pi);
	int c = area(5,6,7);
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}
