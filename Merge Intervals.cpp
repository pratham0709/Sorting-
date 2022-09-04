/*
56. Merge Intervals
Medium

15887

567

Add to List

Share
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

 

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
 

Constraints:

1 <= intervals.length <= 104
intervals[i].length == 2
0 <= starti <= endi <= 104

OUTPUT>>>>>
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),[](vector<int>a, vector<int>b){
            if(a[0] < b[0]){
                return true;
            }
            return false;
        });
            
        vector<vector<int>>ans;
        
        for(int i = 0; i<intervals.size(); i++){
            if(ans.size()==0){
                ans.push_back(intervals[i]);
            }
            else if(ans[ans.size()-1][1] < intervals[i][0]){
                ans.push_back(intervals[i]);
            }
            else{
                ans[ans.size()-1][1] = max(ans[ans.size()-1][1], intervals[i][1]);
            }
        }
        return ans;
            
    }
};
