#include <iostream>
#include <vector>

using namespace std;

int BinarySearchRotated(vector<int> &nums, int target)
{
    int start = 0;
    int mid = 0;
    int end = nums.size() - 1;

    if (start > end)
        return -1;

    while (start <= end)
    {
        // Finding the mid using floor division
        mid = start + (end - start) / 2;

        // Target value is present at the middle of the numsay
        if (nums[mid] == target)
            return mid;

        // start to mid is sorted
        if (nums[start] <= nums[mid])
        {
            if (nums[start] <= target && target < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        // mid to end is sorted
        else
        {
            if (nums[mid] < target && target <= nums[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
