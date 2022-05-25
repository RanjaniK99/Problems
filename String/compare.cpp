#include<iostream>
using namespace std;
int main(){
	char s1[20],s2[20];
	int l1=0,l2=0;
	int i,chk=0;
	cin>>s1;
	cin>>s2;
	i=0;
	while(s1[i]!='\0'){
		l1++;
		i++;
	}
	i=0;
	while(s2[i]!='\0')
	{
		l2++;
		i++;
	}
	if(l1==l2){
		i=0;
		while(s1[i] !='\0' || s2[i]!='\0'){
			chk=0;
		   if(s1[i]!=s2[i]){
		   	chk=1;
		   	break;
		   }
		   i++;	
		}
		if(chk==1){
			cout<<"not same";
		}
		else{
			cout<<"same";
		}
	}
	else{
		cout<<"string size mismatched";
	}
	return 0;
}
