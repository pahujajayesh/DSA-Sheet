// 2 pointer 
// time -> o(n)
// space-> o(n)
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 0);
        int n = 1, p = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                ans[p] = nums[i];
                p += 2;
            }
            else
            {
                ans[n] = nums[i];
                n += 2;
            }
        }
        return ans;
    }
};
// my approach  with using extra space
// time->o(n)
// space->o(n)
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> p;
        vector<int> n;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                p.push_back(nums[i]);
            }
            else
            {
                n.push_back(nums[i]);
            }
        }
        int j = 1, k = 0;
        nums[0] = p[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (i % 2 == 1)
            {
                nums[i] = n[k];
                k++;
            }
            else
            {
                nums[i] = p[j];
                j++;
            }
        }
        return nums;
    }
};