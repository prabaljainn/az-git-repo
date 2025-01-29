
// ⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀
// ⢠⠟⠉⠛⠂⠉⠉⢹⠉⠉⠁⡀⢠⢿⡀⡀⠈⣷⡀⡀⣾⠁⡀⡀⡀⣿⡀⡀⡀⣿⡀⡀⡀⡿⡄⡀⡀⢸⠉⠉⠻⡆⡀⢸⠉⠉⠙⢷⡀
// ⠈⢷⣤⡀⡀⡀⡀⢸⡀⡀⡀⡀⡿⡀⣧⡀⡀⠈⢷⡾⡀⡀⡀⡀⡀⣿⣀⣀⣀⣿⡀⡀⣼⡀⢿⡀⡀⢸⡀⡀⣠⠇⡀⢸⡀⡀⡀⡀⣷
// ⡀⡀⡀⠙⡆⡀⡀⢸⡀⡀⡀⣼⠷⠶⠾⡄⡀⡀⢸⡀⡀⡀⡀⡀⡀⣿⡀⡀⡀⣿⡀⢠⠿⠶⠶⣧⡀⢸⠉⠙⣶⡀⡀⢸⡀⡀⡀⢀⡟
// ⠘⢶⣤⡴⠃⡀⡀⠸⡀⡀⢀⡏⡀⡀⡀⣿⡀⡀⠸⡀⡀⡀⡀⡀⡀⣿⡀⡀⡀⣿⡀⣿⡀⡀⡀⢹⡄⢸⡀⡀⡀⣷⡀⢸⣤⣤⡴⠟⡀
// ⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀

#include <bits/stdc++.h>
// #define int long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    string x;
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (x[i] == 'V')
        {
            sum += 5;
        }
        else if (x[i] == 'W')
        {
            sum += 2;
        }
        else if (x[i] == 'X')
        {
            if (i < n - 1)
            {
                x[i + 1] = '0';
            }
        }
        else if (x[i] == 'Y')
        {
            if (i < n - 1)
            {
                x.push_back(x[i + 1]);
                n++;
                x[i + 1] = '0';
            }
        }
        else if (x[i] == 'Z')
        {
            if (i < n - 1)
            {
                if (x[i + 1] == 'W')
                {
                    sum /= 2;
                    x[i + 1] = '0';
                }
                else if (x[i + 1] == 'V')
                {
                    sum /= 5;
                    x[i + 1] = '0';
                }
            }
        }
    }
    cout << sum;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}