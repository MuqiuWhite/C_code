#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {

        vector<int>ans(10000);
        if (numbers.size() <= 1)
            return numbers.size();
        for (int i = 0; i < numbers.size(); i++)
        {
            ans[numbers[i]]++;
            if (ans[numbers[i]] > numbers.size() / 2)
                return ans[numbers[i]];
        }

        return 0;
    }
};
