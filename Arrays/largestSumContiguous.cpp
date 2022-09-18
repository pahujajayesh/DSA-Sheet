class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {

        // Your code here
        long long max = arr[0];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum > max)
            {
                max = sum;
            }
            if (sum < 0)
            {
                if (sum > max)
                {
                    max = sum;
                }
                sum = 0;
            }
        }
        return max;
    }
};