#include <iostream>
#include <string>
using namespace std;

int main()
{
    int c = 1;
    int res = 1;

    string n;
    cin >> n;

    for(auto i = 1U; i < n.size(); i++)
    {
        if(n[i] == n[i - 1])
        {
            c++;
            if (c > res)
            {
                res = c;
            }
        }
        else
        {
            c = 1;
        }
    }

    cout << res << endl;

    return 0;
}
