#include<iostream>
#include <math.h>
using namespace std;
struct honso{
	int a,b,c;
};
void nhap(honso &hs){
	do{
		cout<<"nhap tu :";
		cin>>hs.a;
		cout<<"nhap mau :";
		cin>>hs.b;
		if(hs.b==0){
			cout<<"moi nhap lai!!!";
		}
	}while(hs.b==0);
}
int chuyendoi(honso &hs){
	
	
	hs.c=hs.a/hs.b;
	hs.a%=hs.b;
}
void xuat(honso &hs){
	chuyendoi(hs);
	cout<<hs.c<<" "<<hs.a<<"/"<<hs.b;
}
int main(){
	honso hs;
	nhap(hs);
	xuat(hs);
	
}





