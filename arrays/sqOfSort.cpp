#include <bits/stdc++.h>

using namespace std;

vector<int> SortedSquares(vector<int> &nums)
{
    vector<int> result(nums.size());
    // TODO: Write your code here
    int n = nums.size();
    int left = 0;      // to traverse on the -ve
    int right = n - 1; // to traverse on the positive

    for (int i = n - 1; i >= 0; i--)
    {
        int toSquareNum;
        if (abs(nums[left]) > abs(nums[right]))
        {
            toSquareNum = nums[left];
            left++;
        }
        else if (abs(nums[left]) <= abs(nums[right]))
        {
            toSquareNum = nums[right];
            right--;
        }

        result[i] = toSquareNum * toSquareNum;
    }
    return result;
}
