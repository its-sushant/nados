#include <iostream>
using namespace std;

int todec(int n, int b)
{
    int res = 0;
    int p = 1;
    while (n > 0)
    {
        int rem = n % 10;
        n /= 10;
        res += rem * p;
        p *= b;
    }

    return res;
}

int toany(int n, int b)
{
    int res = 0;
    int p = 1;
    while (n > 0)
    {
        int rem = n % b;
        n /= b;
        res += rem * p;
        p *= 10;
    }

    return res;
}

int AnyToAny(int n, int b1, int b2)
{
    // write your code here
    int dec = todec(n, b1);
    int res = toany(dec, b2);

    return res;
}
int main()
{
    int n;
    int b1;
    int b2;
    cin >> n;
    cin >> b1;
    cin >> b2;
    int res = AnyToAny(n, b1, b2);
    cout << res << endl;
}