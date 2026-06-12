// Given an integer array nums, find a subarray that has the largest product, and return the product.

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int maxProduct(vector<int> &nums)
{
    int minend = nums[0];
    int maxend = nums[0];
    int ans = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        int v1 = nums[i];
        int v2 = nums[i] * minend;
        int v3 = nums[i] * maxend;
        minend = min(v1, min(v2, v3));
        maxend = max(v1, max(v2, v3));
        ans = max(ans, max(minend, maxend));
    }

    return ans;
}
int main()
{

    string str;
    getline(cin, str);
    stringstream ss(str);
    vector<int> arr;
    string nums;
    while (getline(ss, nums, ','))
    {
        arr.push_back(stoi(nums));
    }
    cout << maxProduct(arr) << endl;

    return 0;
}