// ⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀
// ⢠⠟⠉⠛⠂⠉⠉⢹⠉⠉⠁⡀⢠⢿⡀⡀⠈⣷⡀⡀⣾⠁⡀⡀⡀⣿⡀⡀⡀⣿⡀⡀⡀⡿⡄⡀⡀⢸⠉⠉⠻⡆⡀⢸⠉⠉⠙⢷⡀
// ⠈⢷⣤⡀⡀⡀⡀⢸⡀⡀⡀⡀⡿⡀⣧⡀⡀⠈⢷⡾⡀⡀⡀⡀⡀⣿⣀⣀⣀⣿⡀⡀⣼⡀⢿⡀⡀⢸⡀⡀⣠⠇⡀⢸⡀⡀⡀⡀⣷
// ⡀⡀⡀⠙⡆⡀⡀⢸⡀⡀⡀⣼⠷⠶⠾⡄⡀⡀⢸⡀⡀⡀⡀⡀⡀⣿⡀⡀⡀⣿⡀⢠⠿⠶⠶⣧⡀⢸⠉⠙⣶⡀⡀⢸⡀⡀⡀⢀⡟
// ⠘⢶⣤⡴⠃⡀⡀⠸⡀⡀⢀⡏⡀⡀⡀⣿⡀⡀⠸⡀⡀⡀⡀⡀⡀⣿⡀⡀⡀⣿⡀⣿⡀⡀⡀⢹⡄⢸⡀⡀⡀⣷⡀⢸⣤⣤⡴⠟⡀
// ⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀⡀

#include <iostream>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cctype>
#include <ctime>
#include <sstream>
#include <functional>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl "\n"
using namespace std;

int Ceil(int a, int b){
    return (a+b-1)/b;
}


int main(){

ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int t=1;
// cin>>t;
while (t--){
  ll a, b;
  cin>>a>>b;
  cout<<a/b<<endl;
  //ceil value i.e greatest integer closed to a/b
   cout<< Ceil(a,b)<<endl;
    // floor value i.e smallest integer closed to a/b;
    cout<<a/b<<endl;
}
return 0;

}