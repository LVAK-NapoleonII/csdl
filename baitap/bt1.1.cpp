#include <iostream>

using namespace std;

struct PhanSo
{
	int mau;
	int tu; 
};
void Nhap(PhanSo &ps){	
		cout << "Nhap mau: "; 
		cin >> ps.mau; 
		cout << "Nhap tu: "; 
		cin >> ps.tu;
	 } 
	 

void Xuat(PhanSo ps){
		cout << "Mau la: " << ps.mau<<endln	;
			cout << "Tu la: " << ps.tu<<endln ;
	 } 
int main(){	
	PhanSo ps;
	Nhap(ps);
	Xuat(ps); 
}
