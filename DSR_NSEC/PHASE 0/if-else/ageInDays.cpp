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
    int months, days;
    int years = n / 365;
    int x = n % 365;       // remaining days
    int months = (x) / 30; // remaining months
    int days = x % 30;
    cout << years << endl;
    cout << months << endl;
    cout << days << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    //  t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}