#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 2)
    {
        cin >> n;
        if (n == 1)
            cout << 2 << endl;
        else
            cout << 1 << endl;
        return 0;
    }

    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    int low = 0;
    int mid = (n - 1) / 2;
    int high = n - 2;

    while (low < high)
    {
        if (arr[mid] + 1 != arr[mid + 1])
        {
            cout << arr[mid + 1] - 1 << endl; 
            return 0;
        }
        else if ((arr[mid] - 1) == mid)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }

        mid = (low + high) / 2;
    }

    if (low == 0)
    {
        cout << 1 << endl;
    } 
    else
    {
        cout << n << endl;
    }

    return 0;
}
