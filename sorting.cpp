#include <iostream>
using namespace std;

void bubble(int x){
	cout<<endl;
	int a[x];
	for(int i=0;i<x;i++){
	cin>>a[i];	
	}
	
	for(int i=0;i<x;i++){
	for(int j=i;j<x;j++){
		if(a[i]>a[j+1]){
		int ptr=a[i];
		a[i]=a[j+1];
		a[j+1]=ptr;
		}
	}
	}
	cout<<endl;
	for(int i=0;i<x;i++){
	cout<<a[i]<<" ";	
	}
}

int main(){
int n;
cin>>n;
bubble(n);
	
return 0;
}
