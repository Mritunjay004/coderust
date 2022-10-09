#include <bits/stdc++.h>
using namespace std;

int FindLowIndex(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int mid;
    int res = -1;
    while (low <= high)
    {
        mid = low + ((high - low) / 2);
        if (nums[mid] == target)
        {
            res = mid;
            high = mid - 1;
        }

        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return res != -1 ? res : -1;
}

int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6, 6, 6};
    int ans = FindLowIndex(nums, 2);
    cout << ans;
}
