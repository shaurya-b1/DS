/*
Problem Description
The "Maximum SubArray" is a well-known problem in algorithm design, often encountered in technical interviews. The challenge is to determine the contiguous subarray within a one-dimensional array of numbers nums that results in the largest sum. The goal is to find this sum efficiently, particularly when the array includes both positive and negative integers.

Given an integer array nums, your task is to compute the sum of the subarray which has the largest sum among all subarrays.

Example
Suppose you have the array nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]. When you sum the subarray [4, -1, 2, 1], you get 6, which is the largest possible sum among contiguous subarrays. Hence, the expected result for this input is 6.

Additional Notes
It's important for your solution to efficiently work, even when dealing with a large array size up to 30,000 elements. Proper algorithmic design is crucial for achieving a time complexity of O(n).

Examples
Submissions: 288
Accepted: 216
Acceptance Rate: 75.00%
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]

Output: 6

Explanation: The maximum contiguous subarray sum is 6.

Input: nums = [5,4,-1,7,8]

Output: 23

Explanation: The maximum contiguous subarray sum is 23.

Input: nums = [1]

Output: 1

Explanation: The maximum contiguous subarray sum is 1.

Constraints
1 <= nums.length <= 100
0 <= nums[i] <= 1000

*/
#include<bits/stdc++.h>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Implement logic to find the maximum subarray sum
        int gtx = INT_MIN;
        int sum = 0;

        for(int i=0;i<nums.size();i++)
        {
            sum+= nums[i];

            if(gtx < sum)
                gtx = sum;
            
            if(sum<0)
                sum = 0;
        }
        return gtx;
    }
};