#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,remainder,rev=0;
	cout<<"Enter a digit: ";
	cin>>n;
	while(n!=0){
	remainder=n%10;
	rev=(rev*10)+remainder;
	n=n/10;	
	}
	cout<<"Reverse of the digit:"<<rev  ;
	return 0;
}
