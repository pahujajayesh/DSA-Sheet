#include <iostream>
using namespace std;
// Approach 2



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
    getMinMax(arr, n);

    delete[] arr;
}