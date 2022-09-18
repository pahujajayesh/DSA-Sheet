//approach 2 : do it without recursion

// User function Template for C++
void reverse(int a[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    swap(a[s], a[e]);
    reverse(a, s + 1, e - 1);
}
void rotate(int arr[], int n)
{
    // reverse the whole array
    reverse(arr, 0, n - 1);

    // now reverse the array from 1to n-1
    reverse(arr, 1, n - 1);
}