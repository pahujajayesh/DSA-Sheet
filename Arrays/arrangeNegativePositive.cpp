#include <iostream>
using namespace std;

void dutchFlag(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] >= 0)
        {
            high++;
        }
        else
        {
            swap(arr[low], arr[high]);
            low++, high--;
        }
    }
}

void twoPointer(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        if (arr[s] >= 0 && arr[e] < 0)
        {
            swap(arr[s], arr[e]);
            s++, e--;
        }
        else if (arr[s] < 0 && arr[e] < 0)
        {
            s++;
        }
        else if (arr[s] >= 0 && arr[e] >= 0)
        {
            e--;
        }
        else
        {
            s++, e--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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
    twoPointer(arr, n);
    dutchFlag(arr, n);
    return 0;
}