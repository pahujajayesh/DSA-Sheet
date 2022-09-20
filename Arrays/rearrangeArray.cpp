//{ Driver Code Starts
// C++ program to rearrange an array in minimum
// maximum form
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    // Function to rearrange  the array elements alternately.

    // reverse function
    // space->o(1)
    // time->o(n^2)
    void reverse(long long *arr, int s, int e)
    {
        while (s < e)
        {
            swap(arr[s], arr[e]);
            s++, e--;
        }
    }
    void rearrange(long long *arr, int n)
    {
        int i = 0;
        while (i < n - 1)
        {
            reverse(arr, i, n - 1);
            i++;
        }
    }
};

//{ Driver Code Starts.

// Driver program to test above function
int main()
{
    int t;

    // testcases
    cin >> t;

    while (t--)
    {

        // size of array
        int n;
        cin >> n;

        long long arr[n];

        // adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution ob;

        // calling rearrange() function
        ob.rearrange(arr, n);

        // printing the elements
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends