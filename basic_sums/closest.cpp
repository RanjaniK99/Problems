#include<iostream>
#include<algorithm>
using namespace std;
int closestNum(int n, int m){
	int a,a1,a2;
	a=n/m;
	a1=m*a;
	a2=(n*m)>0 ?(m*(a+1)):(m*(a-1));
	if(abs(n-a1)<abs(n-a2))
	   return a1;
	else
	 return a2;
}
int main(){
	int n,m;
	cout<<"N=";
	cin>>n;
	cout<<"M=";
	cin>>m;
	cout<<closestNum(n,m);
	return 0;
}

