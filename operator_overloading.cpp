#include<iostream>
using namespace std;

class op{
	public:
		int a,sum;
		op(int x){
			a=x;
		}
		void show(){
			cout<<"The sum is "<<sum<<endl;
		}
};

class op1{
	public:
		int a;
		op1(int x){
			a=x;
		}
		friend void operator +(op &p,op1 &q);
};

void operator +(op &p,op1 &q)
{
	p.sum = p.a * q.a;
}

int main()
{
	op a(4);
	op1 b(3);
	a+b;
	a.show();

	return 0;
}
