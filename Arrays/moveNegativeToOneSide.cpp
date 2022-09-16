class Solution
{
public:
    void segregateElements(int arr[], int n)
    {
        // Your code goes here
        vector<int> ans;
        // all +ve elements in vector
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
            {
                ans.push_back(arr[i]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                ans.push_back(arr[i]);
            }
        }

        // copy all the elements
        for (int i = 0; i < n; i++)
        {
            arr[i] = ans[i];
        }
    }
};