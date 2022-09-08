/*

435. Non-overlapping Intervals
Medium

4698

135

Add to List

Share
Given an array of intervals intervals where intervals[i] = [starti, endi], return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

 

Example 1:

Input: intervals = [[1,2],[2,3],[3,4],[1,3]]
Output: 1
Explanation: [1,3] can be removed and the rest of the intervals are non-overlapping.
Example 2:

Input: intervals = [[1,2],[1,2],[1,2]]
Output: 2
Explanation: You need to remove two [1,2] to make the rest of the intervals non-overlapping.
Example 3:

Input: intervals = [[1,2],[2,3]]
Output: 0
Explanation: You don't need to remove any of the intervals since they're already non-overlapping.
 

Constraints:

1 <= intervals.length <= 105
intervals[i].length == 2
-5 * 104 <= starti < endi <= 5 * 104

OUTPUT>>>>
*/
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       int count=0;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<int> prev=intervals[0];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<prev[1])
            { 
                count++;
                if(intervals[i][1]<=prev[1]){
                    prev=intervals[i];
                }
                
                }
            else{
                prev=intervals[i];
            }
        }
        return count;
    }
};
