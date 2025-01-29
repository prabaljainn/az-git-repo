#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl "\n"
using namespace std;

int main() {

    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // Clear the leftover newline character
        cin.ignore();

        string names[n];
        for (int i = 0; i < n; i++) {
            getline(cin, names[i]);
        }

        for (int i = n - 1; i >= 0; i--) {
            cout << "Good morning " << names[i] << endl;
        }
    }
    return 0;
}
