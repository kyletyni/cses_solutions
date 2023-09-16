#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, x;
    int ans = 0;

    cin >> n >> x;

    int weights[n];
    for (int i = 0; i < n; i++) cin >> weights[i];
    sort(weights, weights + n);

    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (weights[i] + weights[j] <= x)
        {
            ans++;
            i++;
            j--;
        }
        else
        {
            ans++;
            j--;
        }
    }

    cout << ans << endl;

    return 0;
}
