//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long maximumSumSubarray(int k, vector<int> &arr, int n)
    {
        // code here
        long sum = 0, maxSum = INT_MIN;
        int i = 0, start = 0;
        while (i < k)
        {
            sum += arr[i];
            i++;
        }
        if (sum > maxSum)
        {
            maxSum = sum;
        }
        while (i < n)
        {
            sum = sum - arr[start];
            start++;
            sum += arr[i];
            i++;
            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }
        return maxSum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        ;
        vector<int> Arr;
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K, Arr, N) << endl;
    }
    return 0;
}
// } Driver Code Ends