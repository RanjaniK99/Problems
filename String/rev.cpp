#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s1[20],ch;
	int l;
	cout<<"String: ";
	gets(s1);
	l=strlen(s1);
	int i=0;
	int j=l-1;
	while(i<j){
		ch=s1[i];
		s1[i]=s1[j];
		s1[j]=ch;
		i++;
		j--;
	}
	cout<<"reversed order: "<<s1;
	return 0;
}
