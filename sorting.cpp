#include <iostream>
using namespace std;
/*
void bubble(){
	for (int i=0;i<n;i++){
		for (int j=i;j<n;i++){
			if (a[i] < a[j+1]){
				int data = a[i];
				a[i] = a[j+1];
				a[j+1] = data;
			}
		}	
	}
	cout<<endl;
		for (int i=0;i<n;i++){
			cout<<a[1]<<" ";
		}
}
*/
int main(){
	int n;
	
	cout<<"masukan jumlah data :";
	cin>>n;
	cout<<endl;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for (int i=0;i<n;i++){
		for (int j=i;j<n;j++){
			if (a[i] < a[j+1]){
				int data = a[i];
				a[i] = a[j+1];
				a[j+1] = data;
			}
		}	
	}
	cout<<endl;
	
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
		return 0;
}
