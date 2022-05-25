#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s1[20],s2[20];
	int l1,l2,i,j,found,not_found;
	cout<<"Enter s1:";
	cin>>s1;
	cout<<"Enter s2: ";
	cin>>s2;
	l1=strlen(s1);
	l2=strlen(s2);
    if(l1==l2){
      for(i=0;i<l1;i++){
      	found=0;
      	for(j=0;j<l1;j++){
      		if(s1[i]==s2[j]){
      			found=1;
      			break;
			  }
		  }
		  if(found==0){
		  	not_found=1;
		  	break;
		  }
	  }
	  if(not_found==1){
	     cout<<"Not Anagram";
      }
      else{
      	cout<<"Anagram";
	  }
	}
	else{
		cout<<"character mismatched!";
	}
    return 0;
}
