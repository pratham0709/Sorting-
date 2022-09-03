/*
  Permutations in array
BasicAccuracy: 69.73%Submissions: 7394Points: 1
Given two arrays of equal size N and an integer K. The task is to check if after permuting both arrays, we get sum of their corresponding element greater than or equal to k i.e Ai + Bi >= K for all i (from 0 to N-1). Return true if possible, else false.
 

Example 1:

Input : 
a[] = {2, 1, 3}, 
b[] = { 7, 8, 9 }, 
k = 10. 
Output : 
True
Explanation:
Permutation  a[] = { 1, 2, 3 } 
and b[] = { 9, 8, 7 } 
satisfied the condition a[i] + b[i] >= K.


 

Example 2:

Input : 
a[] = {1, 2, 2, 1}, b[] = { 3, 3, 3, 4 }, k = 5.
Output : 
False
Explanation:
Since any permutation won't give the answer.
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function isPossible() which takes the array A[], B[], its size N and an integer K as inputs and returns the answer.

Expected Time Complexity: O(N. Log(N))
Expected Auxiliary Space: O(1)
 

Constraints:
1 ≤ N ≤ 105

OUTPUT>>>>>>>>>>
*/
class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        // Your code goes here
        sort(a, a+n);
        sort(b, b+n);
        
        for(int i = 0; i<n; i++){
            if(a[i] + b[n-i-1] >= k) return true;
        }
        return false;
    }
};
