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

int getSum(int b, int n1, int n2)
{
    int decn1 = todec(n1, b);
    int decn2 = todec(n2, b);

    int sum = decn1 + decn2;
    int res = toany(sum, b);

    return res;
}

int main()
{
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}