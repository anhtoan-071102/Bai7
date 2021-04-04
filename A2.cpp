#include <iostream>
using namespace std;

void mang_xd(int arr[]){
	cout << sizeof(arr)<<endl;
}

void mang_kxd(int arr[100]){
	cout << sizeof(arr) << endl;
}

int main(){

	int arr[100];
	cout << sizeof(arr) << endl;
	mang_xd(arr);
	mang_kxd(arr);
	return 1;
}
