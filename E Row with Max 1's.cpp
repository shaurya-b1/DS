/*
You are given a non-empty grid mat with n rows and m columns consisting of only 0s and 1s. Each row in the grid is sorted in ascending order. Your task is to find the index of the row with the maximum number of 1s. If multiple rows have the same number of 1s, return the index of the first such row. If no row contains at least one 1, return -1.

Example
Input:
mat = [[0, 0, 0, 1], [0, 0, 1, 1], [0, 1, 1, 1], [1, 1, 1, 1]]

Output:
3

Explanation:
All the rows are:

Row 0: 1 one
Row 1: 2 ones
Row 2: 3 ones
Row 3: 4 ones
Since row 3 contains the maximum number of 1s, the index 3 is returned.

Note:
If no row contains a 1 at all, return -1.

Examples

Input: m = 4, n = 4, matrix = [[0,1,1,1],[0,1,1,1],[0,0,1,1],[0,0,1,1]]

Output: 0

Explanation: Rows 0 and 1 each have two 1 s, rows 2 and 3 each have three 1 s; the first of the rows with the highest count (index2) is returned.

Input: m = 4, n = 4, matrix = [[0,0,0,1],[0,0,1,1],[0,1,1,1],[1,1,1,1]]

Output: 3

Explanation: Row'3 contains 4 ones, the maximum among all rows.

Constraints
1 <= nums.length <= 100
0 <= nums[i] <= 1000
*/


//Brute force
#include<bits/stdc++.h>
int Solution::rowWithMaxOnes(const vector<vector<int>>& mat) {
    // Implement the function to find the row with the maximum number of 1s.
    // Return the index of the row.
    pair<int,int> max_ones_row = {-1,-1};
    int n = mat.size();
    int m = mat[0].size();

    for(int i=0;i<n;i++)
    {
        int one = 0;
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==1)
                one++;
        }
        if(one>0)
        {
            if(one > max_ones_row.second)
            {
                max_ones_row.first = i;
                max_ones_row.second = one;
            }
        }
    }
    return max_ones_row.first;
}