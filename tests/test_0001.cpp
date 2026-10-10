#include <iostream>
#include <cassert>
#include <vector>
#include "src/0001-twoSum/twoSum.h"

void test_0001(){
    using namespace std;
    leetcode_1::Solution s;
    using std::vector;

    //  测试数据 1
    {
        vector<int> nums = {2, 7, 11, 15};
        int target = 9;
        vector<int> array = s.twoSum(nums, target);
        assert(array == (vector<int>{0,1}));

    }

    //  测试数据 2
    {
        vector<int> nums = {3,2,4};
        int target = 6;
        vector<int> array = s.twoSum(nums, target);
        assert(array == (vector<int>{1,2}));

    }

    //  测试数据 3
    {
        vector<int> nums = {3,3};
        int target = 6;
        vector<int> array = s.twoSum(nums, target);
        assert(array == (vector<int>{0,1}));

    }

    cout << "[PASS]: LeetCode-1" << endl;
} 