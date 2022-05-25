#include<iostream>
#include<algorithm>
using namespace std;
void minVal(int a[],int b[],int n){
	3long result=0;
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++){
		result +=a[i]*b[n-i-1];
	}
	cout<<"Min value is: "<<result;
}
int main(){
	int a[20],b[20],n;
	//long result;
	cout<<"N=";
	cin>>n;
	cout<<"Enter element of arr A: ";
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<"Ente element of arr B: ";
	for(int i=0; i<n; i++){
		cin>>b[i];
	}
	minVal(a,b,n);
	
	return 0;
}
