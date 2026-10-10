/**
 * twoSum.cpp
 * 题目描述：给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
 * 假设每种输入只会对应一个答案，并且不能使用两次相同的元素。
 */

#include <iostream>
#include <vector>
#include "twoSum.h"

namespace leetcode_1
{
    vector<int> Solution::twoSum(vector<int> &nums, int target)
    {
        int length = nums.size();
        int i, j;
        for (i = 0; i < length - 1; i++)
        {
            for (j = i + 1; j < length; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
}