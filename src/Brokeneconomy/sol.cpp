#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    int mid;
    while (l <= r)
    {
        mid = (l + r) / 2;

        if (arr[mid] == x)
            return mid;

        else if (arr[mid] < x)
            l = mid + 1;

        else
            r = mid - 1;
    }
    return mid;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int data;
    cin >> data;
    int r = n - 1;
    int l = 0;

    int res = binarySearch(arr, l, r, data);
    if (arr[res] == data)
    {
        cout << arr[res] << endl;
        cout << arr[res] << endl;
    }
    else
    {
        if (arr[res] > data)
        {
            cout << arr[res] << endl;
            cout << arr[res - 1] << endl;
        }
        else
        {
            cout << arr[res + 1] << endl;
            cout << arr[res] << endl;
        }
    }
}