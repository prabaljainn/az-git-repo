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
    // Your solution here
    float x, y;
    cin >> x >> y;
    if (x == 0 && y != 0)
    {
        cout << "Eixo Y" << endl;
    }
    else if (x != 0 && y == 0)
    {
        cout << "Eixo X" << endl;
    }
    else if (x > 0 && y > 0)
    {
        cout << "Q1" << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "Q2" << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "Q3" << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "Q4" << endl;
    }
    else
    {
        cout << "Origem" << endl;
    }
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