#include <iostream>
using namespace std;

// linear search

int lsearch(vector<int>& A, auto target){
	int len = size(A);
	int low = 0;
	int high = len - 1;

	for(int i = 0; i < len; i++){
		if(target == A[i]){
			cout << "Element Found at index " << i << endl;
			return i;
		}
	}
	cout << "Element not found." << endl;
	return 0;
}


int main(){
	vector<int> A = {3, 5, 7, 9, 12, 15};
	auto target = 15;

	lsearch(A, target);
	return 0;
}


/*

Time Complexity:

	best case: O(1)
	worst cae: O(N)
	average case: O(N) 

*/