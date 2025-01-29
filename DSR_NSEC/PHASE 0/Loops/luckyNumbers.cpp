#include <bits/stdc++.h>
using namespace std;

// O(logn) time
bool lucky(int n)
{
    while (n > 0)
    {
        int d = n % 10;
        if (d != 4 && d != 7)
            return 0;
        n /= 10;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;
    bool found = 0; // variable to check if we found a lucky number or notI
    for (int i = a; i <= b; i++)
    //
    {
        if (lucky(i))
        {
            found = 1;
            cout << i << " ";
        }
    }
    if (!found)
    {
        cout << "-1\n";
    }

    return 0;
}
