#include <iostream>
#include <vector>
using namespace std;

int rob(int *nums,int n)
{

    if (n <= 0)
        return 0;
    if (n == 1)
        return nums[0];

    int prevMax = nums[0];
    int currMax = max(nums[0], nums[1]);

    for (int i = 2; i < n; i++)
    {
        int temp = currMax;
        currMax = max(currMax, prevMax + nums[i]);
        prevMax = temp;
    }

    return currMax;
}

int main()
{
     int arr1[4] = {1, 2, 3, 1};
   int arr2[5] = {2, 7, 9, 3, 1};
    cout << rob(arr1,4) << endl;
    cout << rob(arr2,5);
    return 0;
}