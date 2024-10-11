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
        vector<double> a(n), b(n);
        int f1[n + 5], f2[n + 5];
        memset(f1, 0, sizeof(f1));
        memset(f2, 0, sizeof(f2));
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            f1[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (a[i] > a[j] && b[j] > b[i])
                {
                    f1[i] = max(f1[i], f1[j] + 1);
                }
            }
        }
        cout << *max_element(f1, f1+n) << endl;
    }
}
