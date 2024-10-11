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
    int n;
    cin >> n;
    long long a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long sum = 1;
    sort(a, a + n);
    long long sum1 = max((long long)(a[0] * a[1]), (long long)(a[n - 1] * a[n - 2]));
    long long sum2 = max(max((long long)(a[n - 1] * a[n - 2] * a[n - 3]), (long long)(a[0] * a[1] * a[n - 1])), max((long long)(a[0] * a[n - 2] * a[n - 1]), (long long)(a[0] * a[1] * a[2])));
    cout << max(sum1, sum2);
}