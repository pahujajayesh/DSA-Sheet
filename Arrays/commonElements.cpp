//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool binarySearch(int arr[], int n, int target)
    {
        int s = 0, e = n - 1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (arr[mid] == target)
            {
                return true;
            }
            else if (arr[mid] > target)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return false;
    }
    vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        // use binary search
        int i = 0, j = 0;
        set<int> s;
        while (i < n1 && j < n2)
        {
            if (A[i] == B[j])
            {
                s.insert(A[i]);
                i++, j++;
            }
            else if (A[i] < B[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        vector<int> ans;
        for (auto i : s)
        {
            ans.push_back(i);
        }
        for (int i = 0; i < ans.size(); i++)
        {
            bool flag = binarySearch(C, n3, ans[i]);
            if (flag == false)
            {
                ans[i] = INT_MIN;
            }
        }
        vector<int> finalAns;
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] != INT_MIN)
            {
                finalAns.push_back(ans[i]);
            }
        }
        return finalAns;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];

        for (int i = 0; i < n1; i++)
            cin >> A[i];
        for (int i = 0; i < n2; i++)
            cin >> B[i];
        for (int i = 0; i < n3; i++)
            cin >> C[i];

        Solution ob;

        vector<int> res = ob.commonElements(A, B, C, n1, n2, n3);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
}
// } Driver Code Ends