#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/plus-one/submissions/1897875826/?envType=problem-list-v2&envId=array

int missingNumber(vector<int> &nums)
{
    int sz = nums.size();

    vector<bool> present(sz + 1, false);

    for (int i = 0; i < sz; ++i)
    {
        present[nums[i]] = true;
    }

    for (int i = 0; i < sz + 1; ++i)
        if (!present[i])
            return i;

    return 8656789;
}

int main()
{   
    vector<int> a({1 , 3 , 0});
    int ans = missingNumber(a);
   
    cout << ans << "\n";
    return 0;
}