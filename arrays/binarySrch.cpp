#include <bits/stdc++.h>

using namespace std;

int BinarySearch(int nums[], int target, int length)
{
    // TODO: Write - Your - Code
    int low = 0;
    int high = length - 1;
    int mid;
    while (low <= high)
    {
        mid = low + ((high - low) / 2);
        if (nums[mid] == target)
            return mid;

        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int nums[] = {1, 3, 9, 10, 12};
    int target = 9;
    int length = 5;

    int ans = BinarySearch(nums, target, length);
    cout << ans;
}
