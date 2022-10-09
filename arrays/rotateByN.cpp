#include <iostream>
#include <vector>
using namespace std;

void reverseArr(vector<int> &nums, int start, int end)
{
    while (start < end)
    {
        int temp = nums[end];
        nums[end] = nums[start];
        nums[start] = temp;
        start++;
        end--;
    }
}

void RotateArray(vector<int> &nums, int n)
{
    // TODO: Write - Your - Code
    int len = nums.size();

    //* normalizing because n can have greater than size values
    n = n % len;

    if (n < 0)
        n = n + len;

    reverseArr(nums, 0, len - 1); // * reversing whole
    reverseArr(nums, 0, n - 1);   // *reversing the first n-1
    reverseArr(nums, n, len - 1); // * reversing from the n till end
}
