//Cai dat
#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int x){
    for(int i = 0; i < n; i++)
        if (arr[i] == x)
            cout<< i;
}
//vi du
int main() {
    int arr[] = {1,5,5,12,-10,5,11};
    int x =5 ;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, n, x);
	cout << " la vi tri so can tim " ;
}

