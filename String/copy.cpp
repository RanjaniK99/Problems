#include<iostream>
//#include<stdio.h>
using namespace std;
int main(){
	char ori[20],copy[20];
	int i=0;
	cout<<"Enter string:";
	gets(ori);
	while(ori[i]!='\0'){
		copy[i]=ori[i];
		i++;
	}
	copy[i]='\0';
	cout<<"copied string:"<<copy;
	return 0;
}

