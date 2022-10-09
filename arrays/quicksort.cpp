#include <bits/stdc++.h>
using namespace std;

// main function will pick up a pivot element the rightmost one and make the array as the elements left to the pivot wil be lesser and the elements on right eill be greater
int partition(vector<int> &nums, int start, int end)
{
    int pivot = nums[end];
    int partitionIdx = start;

    for (int i = start; i < end; i++)
    {
        if (nums[i] <= pivot) // will make the elements less than or equal on the left
        {
            swap(nums[partitionIdx], nums[i]);
            partitionIdx++;
        }
    }
    swap(nums[partitionIdx], nums[end]); // finally swap the pivot, and here var pivot is not used because it will contain the old value of nums[end] which may be changed
    return partitionIdx;
}

void quickSort(vector<int> &nums, int start, int end)
{
    if (start < end)
    {
        int partitionIdx = partition(nums, start, end);
        quickSort(nums, start, partitionIdx - 1);
        quickSort(nums, partitionIdx + 1, end);
    }
}

vector<int> sortArray(vector<int> &nums)
{
    quickSort(nums, 0, nums.size() - 1);
    return nums;
}
