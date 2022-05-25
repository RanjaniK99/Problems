#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s1[15],s2[15];
	gets(s1);
	gets(s2);
	strcat(s1,s2);
	cout<<"string:"<<s1;
	return 0;
}
//string s1,s2;
//	getline(cin,s1);
//	getline(cin,s2);
//	//strcat(s1,s2);
//	cout<<"string:"<<s1;
//	return 0;
