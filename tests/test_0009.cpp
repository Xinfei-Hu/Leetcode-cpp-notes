#include <iostream>
#include <cassert>
#include "src/0009-isPalindrome/isPalindrome.h"

void test_0009(){
    using namespace std;
    leetcode_9::Solution s;

    //  测试数据 1
    {
        int x = 121;
        assert(s.isPalindrome(x) == true);
    }

    //  测试数据 2
    {
        int x = -121;
        assert(s.isPalindrome(x) == false);
    }
    
    //  测试数据 3
    {
        int x = 10;
        assert(s.isPalindrome(x) == false);
    }

    cout << "[PASS]: LeetCode-9" << endl;
} 