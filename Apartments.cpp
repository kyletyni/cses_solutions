#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int applicants, apartments, max_diff;

    cin >> applicants >> apartments >> max_diff;

    vector<int> desired_size(applicants);
    vector<int> size(apartments);

    for(int i = 0; i < applicants; i++) cin >> desired_size[i];
    for(int i = 0; i < apartments; i++) cin >> size[i];

    sort(desired_size.begin(), desired_size.end());
    sort(size.begin(), size.end());

    int i = 0, j = 0;
    int res = 0;

    while (i < applicants && j < apartments)
    {
        if(abs(desired_size[i] - size[j]) <= max_diff)
        {
            i++;
            j++;
            res++;
        }
        else if (desired_size[i] > size[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }

    cout << res << endl;

    return 0;
}