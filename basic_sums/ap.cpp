//Program for N-th term of Arithmetic Progression series
//Difficulty Level : Easy
//Last Updated : 25 Feb, 2021
//Given first term (a), common difference (d) and a integer N of the Arithmetic Progression series, the task is to find Nthterm of the series.
//Examples : 
// 
//
//Input : a = 2 d = 1 N = 5
//Output :
//The 5th term of the series is : 6
//
//Input : a = 5 d = 2 N = 10
//Output :
//The 10th term of the series is : 23

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
