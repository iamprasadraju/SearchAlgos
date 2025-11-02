#include <stdio.h>

// Binary Search

int main(){
	int N[7] = {1, 3, 5, 7, 13, 15, 18};
	int target = 3;

	int len = sizeof(N) / sizeof(N[0]);

	int low = 0;
	int high = len - 1;

	while(low <= high){
		int mid = (low + high) / 2;

		if(target == N[mid]){
			printf("Element Found at %d \n", mid);
			return 0;
		}
		else if(target > N[mid]){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	printf("Element not found. \n");
	return 0;
  
}

/*

Time Complexity :

	-> Best Case : O(1)
	-> Worst Case : O(logn) 

*/