// MaxPairwiseProductFast(A[1...n]):
// index ← 1
// for i from 2 to n:
// if A[i] > A[index]:
// index ← i
// swap A[index] and A[n]
// index ← 1
// for i from 2 to n − 1:
// if A[i] > A[index]:
// index ← i
// swap A[index] and A[n − 1]
// return A[n − 1] · A[n]


// //Algorithm 4
// MaxPairwiseProductBySorting(A[1...n]):
// Sort(A)
// return A[n − 1] · A[n]