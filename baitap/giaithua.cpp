#include<iostream>
using namespace std;
int giaithua(int n){
	if(n==0||n==1)
	return 1;
	return giaithua(n-1)*n;
}
int main(){
	int n;
	cout<<"nhap n = ";
	cin>>n;
	int gt=giaithua(n);
	cout<<gt;
}
 
