#include <iostream>

using namespace std;

int tong(int n){
	if(n==0)
	return 0;
	if(n>1)
	return tong(n-1)+n*n;
	
}
int main(){
	int n;
	cout<<"nhap n :=";
	cin>>n;
	cout<<tong(n);
}
