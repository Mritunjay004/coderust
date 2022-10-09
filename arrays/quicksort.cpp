#include <bits/stdc++.h>
using namespace std;

// Using Hoare's partitioning scheme
int Partition(vector<int> &nums, int low, int high)
{
    // Initializing pivot's index to low
    int pivot_value = nums[low];
    int i = low;
    int j = high;

    // Loop till i pointer crosses j pointer
    while (i < j)
    {
        // Increment the 'i' pointer till it finds an element greater than pivot
        while (i <= high && nums[i] <= pivot_value)
            i++;

        // Decrement the 'j' pointer till it finds an element less than pivot
        while (nums[j] > pivot_value)
            j--;

        // Swap the numbers on 'i' and 'j'
        if (i < j)
        {
            // Using the stl swap function to swap the numbers
            swap(nums[i], nums[j]);
        }
    }
    // Swap pivot element with element on 'j' pointer.
    nums[low] = nums[j];
    nums[j] = pivot_value;

    // Return the pivot index
    return j;
}

void QuickSortRec(vector<int> &nums, int low, int high)
{
    if (high > low)
    {
        // pivot_index is the partitioning index
        int pivot_index = Partition(nums, low, high);

        // Sort elements before partition
        QuickSortRec(nums, low, pivot_index - 1);

        // Sort elements after partition
        QuickSortRec(nums, pivot_index + 1, high);
    }
}

void QuickSort(vector<int> &nums, int size)
{
    QuickSortRec(nums, 0, nums.size() - 1);
}

int main()
{
}
