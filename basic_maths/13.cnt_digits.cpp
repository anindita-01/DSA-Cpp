
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write C++ code here
    int num = 0, cnt = 0;
    cin >> num;
    if (num == 0)
        cnt = 1;
    while (num > 0)
    {
        cnt++;
        num = num / 10;
    }
    cout << cnt << endl;
    return 0;
}