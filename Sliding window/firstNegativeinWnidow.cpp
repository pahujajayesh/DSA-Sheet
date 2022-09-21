//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                            long long int n, long long int k);

// Driver program to test above functions
int main()
{
    long long int t, i;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
vector<long long> printFirstNegativeInteger(long long int arr[],
                                            long long int n, long long int k)
{
    //space o(k)
    //time o(n)
    vector<long long> ans;
    queue<long long> q;
    int i = 0, j = 0;
    while (j < n)
    {
        if (arr[j] < 0)
        {
            q.push(arr[j]);
        }
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            if (q.size() != 0)
            {
                if (arr[i] == q.front())
                {
                    ans.push_back(q.front());
                    q.pop();
                }
                else
                {
                    ans.push_back(q.front());   
                }
            }
            else
            {
                ans.push_back(0);
            }
            i++, j++;
        }
    }
    return ans;
}
// TLE

vector<long long> printFirstNegativeInteger(long long int arr[],
                                            long long int n, long long int k)
{
    vector<long long> ans;
    int i = 0;
    int first;
    bool flag = false;
    while (i < k)
    {
        if (arr[i] < 0)
        {
            ans.push_back(arr[i]);
            first = i;
            flag = true;
            break;
        }
        i++;
    }
    if (flag == false)
    {
        ans.push_back(0);
        first = k;
    }
    i = k;
    while (i < n)
    {
        if (first >= i - k + 1 && arr[first] < 0)
        {
            ans.push_back(arr[first]);
        }
        if (first < i - k + 1 || arr[first] >= 0)
        {
            first = i - k + 1;
            if (arr[first] < 0)
            {
                ans.push_back(arr[first]);
            }
            else
            {
                int j = first;
                bool found = false;
                while (j <= i)
                {
                    if (arr[j] < 0)
                    {
                        first = j;
                        found = true;
                        ans.push_back(arr[j]);
                        break;
                    }
                    j++;
                }
                if (found == false)
                {
                    ans.push_back(0);
                }
            }
        }
        i++;
    }
    return ans;
}