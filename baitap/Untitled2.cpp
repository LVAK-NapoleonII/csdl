#include <iostream>

using namespace std;

int tong(int x,int n){
	if(n==0){
	return 1;
	}
	if(x==0)
	return 0;
		if(x>1&&n>1)
	return tong(x-1,n-1)+x*n;
	
}
int main(){
	int n;
	int x;
	cout<<"nhap n :=";
	cin>>n;
	cout<<"nhap x :=";
	cin>>x;
	cout<<tong(x,n);
}
