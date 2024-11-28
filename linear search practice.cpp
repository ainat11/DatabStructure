#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}
int main(){
	int n;
	cout<<"Enter size of array:"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter element of array: "<<endl;
		cin>>arr[i];
	}
	int key;
	cin>>key;
	
	cout<<linearsearch(arr,n,key)<<endl;
	return 0;
}
