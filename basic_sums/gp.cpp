//Given the A and R i,e first term and common ratio of a GP series. Find the Nth term of the series.
//
//Note: As the answer can be rather large print its modulo 1000000007 (109 + 7).
//
//Example 1:
//
//Input: A = 2, R = 2, N = 4
//Output: 16
//Explanation: The GP series is 
//2, 4, 8, 16, 32,... in which 16 
//is th 4th term.

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int A,R,N;
	cout<<"A=";
	cin>>A;
	cout<<"R=";
	cin>>R;
	cout<<"N=";
	cin>>N;
	cout<<"Output= "<<A*pow(R,N-1);
	return 0; 
}
