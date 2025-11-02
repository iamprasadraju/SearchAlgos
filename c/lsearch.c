#include <stdio.h>

// Linear Search

int main(){
	int N[7] = {1, 3, 5, 7, 13, 15, 18};
	int target = 18; 

	int len = sizeof(N) / sizeof(N[0]);

	for(int i = 0; i < len; i++){
		if(target == N[i]){
			printf("Element Found at %d \n", i);
			return 0;
		}
		
	}
	printf("Element not found.");

}


/* 

Time Complexity :

	-> Best case: O(1)
	-> Worst case: O(n) 

*/