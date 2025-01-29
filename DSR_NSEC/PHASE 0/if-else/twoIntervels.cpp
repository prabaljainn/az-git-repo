#include <iostream>

using namespace std;

int main()

{

    int l1, l2, r1, r2;

    cin >> l1 >> r1 >> l2 >> r2;

    if (l2 <= r1 - l1 && r2 >= r1)
    {

        cout << l2 << " " << r1 << endl;
    }

    else if (l2 <= r1 - l1 && r2 <= r1 - l1)
    {
        cout << l2 << " " << r2 << endl;
    }

    else
    {
        cout << "-1" << endl;
    }
}