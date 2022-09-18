class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        unordered_set<int> elem;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        int n = nums1.size(), m = nums2.size();
        while (i < n && j < m)
        {
            if (nums1[i] == nums2[j])
            {
                elem.insert(nums1[i]);
                i++, j++;
            }
            else if (nums1[i] > nums2[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        for (auto i : elem)
        {
            ans.push_back(i);
        }
        return ans;
    }
};