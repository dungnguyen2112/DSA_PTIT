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

vector<long long> f;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        long long n;
        cin >> n;
        long long a[n + 5];
        f.resize(n + 5);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        f[0] = a[0];
        f[1] = max(a[0], a[1]);
        for (long long i = 2; i < n; i++)
        {
            f[i] = max(f[i - 1], f[i - 2] + a[i]);
        }
        cout << f[n - 1] << endl;
    }
}