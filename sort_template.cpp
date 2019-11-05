#include<iostream>

using namespace std;

template <class X>
void sort(X a[],X n){
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[j]<a[i])
				swap(a[j],a[i]);
}

int main(){
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
	return 0;
}
