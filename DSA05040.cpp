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

int f1[1000005], f2[1000005];
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            if (a[i] > a[i - 1])
                f1[i] = f1[i - 1] + 1;
            else
                f1[i] = 1;
        }
        for (int i = n - 1; i >= 0; --i)
        {
            if (a[i] > a[i + 1])
                f2[i] = f2[i + 1] + 1;
            else
                f2[i] = 1;
        }
        int max1 = -1e9;
        for (int i = 0; i < n; i++)
        {
            max1 = max(max1, f1[i] + f2[i] - 1);
        }
        cout << max1 << endl;
        memset(f1, 0, sizeof(f1));
        memset(f2, 0, sizeof(f2));
    }
}
