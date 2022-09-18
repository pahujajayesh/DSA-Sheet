#include <iostream>
using namespace std;
// Approach 2
// comapre in pairs
void getMinMax2(int arr[], int n)
{
    int maxElem, minElem;
    int i = 0;
    // if n is odd
    if (n % 2 != 0)
    {
        minElem = arr[0];
        maxElem = arr[0];
        i = 1;
    }
    else
    {
        if (arr[1] > arr[0])
        {
            minElem = arr[0];
            maxElem = arr[1];
        }
        else
        {
            minElem = arr[1];
            maxElem = arr[0];
        }
        i = 2;
    }
    while (i < n - 1)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[i] > maxElem)
            {
                maxElem = arr[i];
            }
            if (arr[i + 1] < minElem)
            {
                minElem = arr[i + 1];
            }
        }
        else
        {
            if (arr[i + 1] > maxElem)
            {
                maxElem = arr[i + 1];
            }
            if (arr[i] < minElem)
            {
                minElem = arr[i];
            }
        }
        i += 2;
    }
    cout << "Max " << maxElem << endl;
    cout << "Min " << minElem;
}

// approach 1
// Comaprisons 2*(n-2)+1
// because 1 comaprison between 1st and 2nd element and run a loop from 3rd element to size i.e,
//  (n-2) and insisde loop we have 2 comaprisons therefore it's 2*(n-2);
void getMinMax(int arr[], int n)
{
    int minElem, maxElem;
    if (n == 1)
    {
        maxElem = arr[0];
        minElem = arr[0];
    }
    else
    {
        if (arr[0] > arr[1])
        {
            minElem = arr[1];
            maxElem = arr[0];
        }
        else
        {
            minElem = arr[0];
            maxElem = arr[1];
        }
        for (int i = 2; i < n; i++)
        {
            if (arr[i] > maxElem)
            {
                maxElem = arr[i];
            }
            if (arr[i] < minElem)
            {
                minElem = arr[i];
            }
        }
    }
    cout << "Max Element " << maxElem << endl;
    cout << "Min Element" << minElem;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    getMinMax2(arr, n);

    delete[] arr;
}