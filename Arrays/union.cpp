class Solution
{
public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        unordered_set<int> ans;
        // code here
        sort(a, a + n);
        sort(b, b + m);
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (a[i] == b[j])
            {
                ans.insert(a[i]);
                i++, j++;
            }
            else if (a[i] < b[j])
            {
                ans.insert(a[i]);
                i++;
            }
            else
            {
                ans.insert(b[j]);
                j++;
            }
        }
        while (i < n)
        {
            ans.insert(a[i]);
            i++;
        }
        while (j < m)
        {
            ans.insert(b[j]);
            j++;
        }
        return ans.size();
    }
};