#include<iostream>
using namespace std;
int main(){
	int a,b,c,n;
	cout<<"A1:";
	cin>>a;
	cout<<"A2:";
	cin>>b;
	cout<<"N:";
	cin>>n;
	c=a+((n-1)*(b-a));
	cout<<"Output:"<<c<<endl;
	return 0;
}
