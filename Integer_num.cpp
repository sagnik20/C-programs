#include<iostream>
using namespace std;
class Integer_num{
	public:
		int inum;
		friend void cal_sum(int,float);
};

class Float_num{
	public:
		float fnum;
		friend void cal_sum(int,float);
};

void cal_sum(int a, float b){
	cout<<"\n Sum"<<a+b<<endl;
}

int main(){
	Integer_num ob1;
	Float_num ob2;
	cout<<"Enter an integer : \n";
	cin>>ob1.inum;
	cout<<"Enter a float : \n";
	cin>>ob2.fnum;
	cal_sum(ob1.inum,ob2.fnum);
	return 0;
}
