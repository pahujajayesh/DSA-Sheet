class solution
{
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>> &arr)
    {
        // Code here`
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int start = arr[0][0];
        int end = arr[0][1];
        for (int i = 1; i < arr.size(); i++)
        {
            int st = arr[i][0];
            int et = arr[i][1];
            // to merge intervals
            if (st <= end)
            {
                // merge kardoo
                if (et > end)
                {
                    // update karo end ko
                    end = et;
                }
            }
            else if (st > end)
            {
                // phle start time or end time ko save karo
                vector<int> smallAns;
                smallAns.push_back(start);
                smallAns.push_back(end);
                ans.push_back(smallAns);
                // set start and end new values
                start = st;
                end = et;
            }
        }
        vector<int> smallAns;
        smallAns.push_back(start);
        smallAns.push_back(end);
        ans.push_back(smallAns);
        return ans;
    }
};