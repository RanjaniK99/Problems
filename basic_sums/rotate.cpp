#include<bits/stdc++.h>
using namespace std;
bool rotate(string s1,string s2){
	string str=s1+s1;
	int j=0;
	if(s1.length() !=s2.length())
	   return false;
	for(int i=0;i<str.length();i++){
		if(s2[j]==str[i])
		  j++;
	}
	return j==s2.length();
	
}
int main(){
	string s1,s2;
	cout<<"Enter s1 and s2: ";
	cin>>s1>>s2;
	if(rotate(s1,s2))
	  cout<<"True";
	 else
	   cout<<"False";
    return 0;
}
