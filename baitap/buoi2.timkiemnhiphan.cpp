
#include <iostream>
// cai dat
using namespace std;
int binarySearch(int a[], int l, int r, int x) {
 while(l<=r){
 	int mid=(l+r)/2;
 	if(a[mid]==x){
 		cout<<mid;
	 }
	if(a[mid]>x){
		r=mid-1;
	}else{
		l=mid+1;
	}
 }
}
//vi du
int main(void) {
  int arr[] = {2,2,3,4,10,40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 2 ;
    cout<<"la vi tri cua"<<binarySearch(arr, 0, n - 1, x);
  return 0;
}

