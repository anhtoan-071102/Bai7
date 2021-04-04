
#include <iostream>
using namespace std;

void binarySearch(int *arr, int intSearch){

	bool check = false ;
	int left = 0;
	int right = intSearch - 1;
	while(left <= right){
		int mid = left + (left + right) / 2;

		if(*&arr[mid] == intSearch){
			check = true;
			break;
		}

		if(*&arr[mid] > intSearch) left = mid;
		else right = mid;
	}

	cout << check << endl;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];

	int intSearch;
	cin >> intSearch;
	binarySearch(arr,intSearch) ;
}
