#include <iostream>
using namespace std;
int DecToAny(int n, int b)
{
    // write your code here
    int re = 0;
    int i = 1;
    while (n > 0)
    {
        int rem = n % b;
        n = n / b;
        re = re + rem * i;
        i *= 10;
    }
    return re;
}
int main()
{
    int n;
    int b;
    cin >> n;
    cin >> b;
    int res = DecToAny(n, b);
    cout << res;
}