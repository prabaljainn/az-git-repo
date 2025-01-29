// Write your code here
// You can set your Template at profile settings [https://maang.in/profile/template-code]

#include <bits/stdc++.h>
using namespace std;

int main(){

    int a , b ,c ;
    cin >> a>> b >> c;
    int min = a;
    int max = a;

    if (b<min){
        min = b;
    }
    if (c<min){
        min = c;
    }
    if (b>max){
        max = b;
    }
    if (c>max){
        max = c;
    }

    cout << min <<" "<< max ;
    return 0;


}
