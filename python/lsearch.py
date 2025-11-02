#!/usr/bin/env python3
import random

random.seed(42)

# linear search

def lsearch(A: list[int], target: int) -> int:
	size = len(A)
	for i in range(size):
		if target == A[i]:
			print("Element found at index", i)
			return i
	print("Element not found.")

def main():
	N = 100

	A = sorted([random.randint(1, N + N) for _ in range(N)])
	target = A[-1] # last element in list A (worst case)

	lsearch(A, target)



"""
Time Complexity:

	best case: O(1)
	worst case: O(N)
	average case: O(N)

"""

if __name__ == "__main__":
	main()