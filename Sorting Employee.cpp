/*
Sorting Employees
BasicAccuracy: 66.47%Submissions: 2511Points: 1
You have records of employee name as string (Ename) and salary as positive integer (S). You have to sort the records on the basis of employee salary, if salary is same then use employee name for comparison.

Example 1:

Input: N = 2
arr[] = {{xbnnskd, 100}, {geek, 50}}
Output: {geek 50}, {xbnnskd 100}
Explanation: geek has lowest salary 
as 50 and xbnnskd has more salary.
Example 2: 

Input: N = 2
arr[] = {{shyam, 50}, {ram, 50}} 
Output: ram 50 shyam 50
Your Task:
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function sortRecords() that takes array arr[] and integer N as parameters and sort the array according to the above-given conditions. The function does not return anything.

 

Expected Time Complexity: O(NlogN).
Expected Auxiliary Space: O(1).

 

Constraints:
1 ≤ N ≤ 103

View Bookmarked Problems 
Company Tags
Oracle

OUTPUT>>>>> */

/* struct node{          // node structure
     int salary;
     string name;
 };
*/

bool compare(node a, node b){
    if(a.salary!=b.salary){
        if(a.salary < b.salary){
            return true;
        }
        return false;
    }
    return a.name < b.name;
}

class Solution{

	public:
	void sortRecords(node arr[], int n)
	{
	    // Your code goes here
	    sort(arr, arr+n, compare);
	}
	 

};
