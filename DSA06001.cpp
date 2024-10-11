#include <bits/stdc++.h>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#define faster()                           \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL);
using namespace std;
using std::string;

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        set<int> st;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if (n % 2 == 0)
            for (int i = n - 1; i >= n / 2; i--)
            {
                cout << a[i] << ' ' << a[n - i - 1] << ' ';
            }
        else
        {
            for (int i = n - 1; i >= (n - 1) / 2; i--)
            {
                if (i != (n - 1) / 2)
                    cout << a[i] << ' ' << a[n - i - 1] << ' ';
                else
                    cout << a[i] << ' ';
            }
        }
        cout << endl;
    }
}