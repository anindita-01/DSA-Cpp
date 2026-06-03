
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    vector<int> arr;
    stringstream ss(str);
    string num;
    while (getline(ss, num, ' '))
    {
        arr.push_back(stoi(num));
    }
    int n = arr.size();

    int low = 0, high = n - 1;
    while (low < high)
    {
        if (arr[low] == 0)
        {

            low++;
        }
        else if (arr[high] == 1)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
    for (int ele : arr)
    {
        cout << ele << " ";
    }

    return 0;
}