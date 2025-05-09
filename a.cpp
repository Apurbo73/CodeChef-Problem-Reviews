#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, x;
        cin >> a;
        int b = 0;
        vector<int> v;
        for (int i = 0; i < a; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j] <= 4)
            {
                b++;
                break;
            }
        }
        if (b == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}