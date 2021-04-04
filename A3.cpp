#include <iostream>
using namespace std;

int Count(int *arr, int n){
	int so_so_chan = 0;
	for(int *i = &arr[0]; i <= &arr[n-1]; i++){
		if(*i % 2 == 0) so_so_chan++;
	}
	return so_so_chan;
}

int main(){

	int arr[100] = {1,2 ,3,4,5,6,7,8,9,10};
	cout << sizeof(arr) << endl;
    cout << Count (arr ,10 );
	return 1;
}
