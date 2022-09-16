#include <iostream>
#include <algorithm>
using namespace std;
// approach 1 using : swapping
void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//approach 2: using recursion
void reverse2(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    swap(arr[s], arr[e]);
    reverse2(arr, s + 1, e - 1);
}
int main()
{
    // code
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // reverse(arr, n);
        reverse2(arr, 0, n - 1);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<"\t";
        }
    }
    return 0;
}