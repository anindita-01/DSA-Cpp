// A Strong Number is a number whose sum of the factorials of its digits is equal to the number itself. 0 is not a strong number.

// Example: 145

// Digits:

// 1
// 4
// 5

// Factorials:

// 1!=1
// 4!=24
// 5!=120
// 1 + 24 + 120 = 145

#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    cin >> n;
    int og = n;
    // less than 0
    if (n < 0)
    {
        cout << "not strong no :(" << endl;
        return 0;
    }
    int sum = 0;
    // for 0
    if (n == 0)
        sum = 1; // 0!=1 so not strong
    // greater than 0
    while (n > 0)
    {
        int ld = n % 10;
        sum += fact(ld);
        n /= 10;
    }
    if (sum == og)
        cout << "strong no :)" << endl;
    else
        cout << "not strong no :(" << endl;

    return 0;
}