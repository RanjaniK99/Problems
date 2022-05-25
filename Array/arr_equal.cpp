//Given two given arrays of equal length, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain the same set of elements, arrangements (or permutation) of elements may be different though.
//
//Note: If there are repetitions, then counts of repeated elements must also be the same for two arrays to be equal. 
//
//Examples : 
//
//Input  : arr1[] = {1, 2, 5, 4, 0};
//         arr2[] = {2, 4, 5, 0, 1}; 
//Output : Yes

#include<iostream>
#include<algorithm>
using namespace std;
bool areEqual(int arr1[], int arr2[], int n1, int n2){
	if(n1!=n2)
	   return false;
	sort(arr1,arr1+n1);
	sort(arr2,arr2+n2);
	for(int i=0;i<n1;i++){
	if(arr1[i]!=arr2[i])
	   return false;
  return true;
}
}
int main(){
	int arr1[20],arr2[20],n1,n2;
	cout<<"N1=";
	cin>>n1;
	cout<<"Enter elements of array 1:";
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	cout<<"N2=";
	cin>>n2;
	cout<<"Enter elements of array 2:";
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
	}
	if(areEqual(arr1,arr2,n1,n2))
	   cout<<"True";	
	else
	   cout<<"False";
    return 0;
}
