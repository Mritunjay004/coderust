#include <iostream>
#include <vector>

using namespace std;

int FindLeastCommonNumber(vector<int> &arr1, vector<int> &arr2,
                          vector<int> &arr3)
{
    // TODO: Write - Your - Code
    int i = 0, j = 0, k = 0; //* three pointers for three arrays

    while (i < arr1.size() and j < arr2.size() and k < arr3.size())
    {
        // we will move the smallest in three is below condn does not satisfy as the movable is the smallest in three and the possibility of getting the coomon number will be the by moving the smallest
        if (arr1[i] == arr2[j] and arr2[j] == arr3[k])
            return arr1[i];

        else if (arr1[i] <= arr2[j] and arr1[i] <= arr3[k])
            i++;
        else if (arr2[j] <= arr1[i] and arr2[j] <= arr3[k])
            j++;
        else if (arr3[k] <= arr2[j] and arr3[k] <= arr1[i])
            k++;
    }
    return -1;
}
