#include <iostream>

using namespace std;

struct phanso{
	int mau;
	int tu; 
};
void Nhap(phanso &ps){	
		cout << "Nhap mau: "; 
		cin >> ps.mau; 
		cout << "Nhap tu: "; 
		cin >> ps.tu;
	 } 
	 

void Xuat(phanso ps){
		cout << "Mau la: " << ps.mau<<endln	;
			cout << "Tu la: " << ps.tu<<endln ;
	 } 
int main(){	
	phanso ps;
	Nhap(ps);
	Xuat(ps); 
}
