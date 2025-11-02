#include <iostream>
using namespace std;


int bsearch(vector<int>& A, int target){
	int len = size(A);
	int low = 0;
	int high = len - 1;

	while(low <= high){
		auto mid = (low + high) / 2;
		if(target == A[mid]){
			cout << "Element found at index " << mid << endl;
			return mid; 
		}
		else{
			if(target > A[mid]){
				low = mid + 1;
			}
			else{
				high = mid - 1;
			}
		}
	}
	cout << "Element not found.";
	return 0;
}


int main(){
	vector<int> A = {3, 5, 7, 9, 12, 15};
	int target = 15;

	bsearch(A, target);
	return 0;
}



/*

Time Complexity:

	best case: O(1)
	worst cae: O(log N)
	average case: O(log N) 

*/