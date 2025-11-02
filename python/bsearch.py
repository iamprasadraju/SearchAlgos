#!/usr/bin/env python3
import random

random.seed(42)

# Binary Search
def bsearch(A: list[int], target: int) -> int:

	size = len(A)
	low = 0
	high = size - 1

	while(low <= high):
		mid = (low + high) // 2
		if(target == A[mid]):
			print("Element found at index", mid)
			return mid
		else:
			if(target > A[mid]):
				low = mid + 1
			else:
				high = mid - 1
	print("Element not found.")


def main():
	N = 100

	A = sorted([random.randint(1, N + N) for _ in range(N)])
	target = A[-1] # last element in list A (worst case)

	bsearch(A, target)


"""
Time Complexity:

	best case: O(1)
	worst case: O(log N)
	average case: O(log N)

"""

if __name__ == "__main__":
	main()