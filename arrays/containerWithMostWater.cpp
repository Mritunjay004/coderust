#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int n = height.size();
    int left = 0;
    int right = n - 1;
    int area, maxArea = 0;

    while (left < right) // = is not as when they are equal the area will be zero
    {
        area = min(height[left], height[right]) * (right - left);
        if (area > maxArea)
            maxArea = area;

        // we will shift the lowest among the two for getting the maxArea
        if (min(height[left], height[right]) == height[left])
            left++;
        else if (min(height[left], height[right]) == height[right])
            right--;
    }
    return maxArea;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int ans = maxArea(height);
    cout << ans;
}
