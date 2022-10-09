#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    for (int cntr = 0, curr = 0; curr < n; curr++)
    {
        // Here cntr will start from the first and we will swap with curr and also increment the cntr
        if (nums[curr] != 0)
            swap(nums[cntr++], nums[curr]);
    }
}

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> res;
    sort(begin(intervals), end(intervals));
    vector<int> temp = intervals[0];

    for (int i = 1; i < intervals.size(); i++)
    {
        if (temp[1] >= intervals[i][0])
        {
            temp[1] = max(intervals[i][1], temp[1]); // yahi saari ek mein aa jaegi
        }
        else
        {
            // agar nhi hua toh
            res.push_back(temp); // jo bana hai wo daalo
            temp = intervals[i]; // jispr nhi bana wo daaldo
        }
    }
    res.push_back(temp);
    return res;
}

int main()
{
}
