// ⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀
// ⢠⠟⠉⠛⠂⠉⠉⢹⠉⠉⠁⡀⢠⢿⡀⡀⠈⣷⡀⡀⣾⠁⡀⡀⡀⣿⡀⡀⡀⣿⡀⡀⡀⡿⡄⡀⡀⢸⠉⠉⠻⡆⡀⢸⠉⠉⠙⢷⡀
// ⠈⢷⣤⡀⡀⡀⡀⢸⡀⡀⡀⡀⡿⡀⣧⡀⡀⠈⢷⡾⡀⡀⡀⡀⡀⣿⣀⣀⣀⣿⡀⡀⣼⡀⢿⡀⡀⢸⡀⡀⣠⠇⡀⢸⡀⡀⡀⡀⣷
// ⡀⡀⡀⠙⡆⡀⡀⢸⡀⡀⡀⣼⠷⠶⠾⡄⡀⡀⢸⡀⡀⡀⡀⡀⡀⣿⡀⡀⡀⣿⡀⢠⠿⠶⠶⣧⡀⢸⠉⠙⣶⡀⡀⢸⡀⡀⡀⢀⡟
// ⠘⢶⣤⡴⠃⡀⡀⠸⡀⡀⢀⡏⡀⡀⡀⣿⡀⡀⠸⡀⡀⡀⡀⡀⡀⣿⡀⡀⡀⣿⡀⣿⡀⡀⡀⢹⡄⢸⡀⡀⡀⣷⡀⢸⣤⣤⡴⠟⡀
// ⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀

#include <bits/stdc++.h>

#define int long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl "\n"

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    bool isEqual = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            isEqual = false;
            break;
        }
    }
    if (isEqual)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}