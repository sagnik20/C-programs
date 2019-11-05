#include<iostream>
using namespace std;

class Employee{
	string name;
	int age;
	public:
		Employee(string a,int b){
			name = a;
			age = b;
		}
		virtual void show(){
			cout<<"Name : "<<name<<" Age : "<<age<<endl;
		}
};

class Manager : public Employee{
	string dept;
	int sal;
	public:
		Manager(string a,int b,string c,int d):Employee(c,d){
			Employee(c,d);
			dept = a;
			sal = b;
		}
		void show(){
			cout<<"Department : "<<dept<<" Salary : "<<sal<<endl;
		}
};

class Labour : public Employee{
	int days,wages;
	public:
		Labour(int a,int b,string c,int d):Employee(c,d){
			Employee(c,d);
			days = a;
			wages = b;
		}
		void show(){
			cout<<"No. of Days of work : "<<days<<" \nDaily Wage : "<<wages<<endl;
		}
};

int main(){
	Employee *p,b("Proloy",25);
	Manager m("Developer",135000,"Proloy",25);
	Labour l(26,36000,"Proloy",25);
	p=&b;
	p->show();
	p=&m;
	p->show();
	p=&l;
	p->show();
return 0;
}
