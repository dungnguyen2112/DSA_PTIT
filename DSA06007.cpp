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

int k;
bool cmp(int a, int b)
{
    return abs(k - a) < abs(k - b);
}
int res[100005], res1[100005];
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        map<int, int> mp, mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(a, a + n);
        sort(a, a + n);
        int i = 0, j = n - 1;
        while (a[i] == b[i])
        {
            i++;
        }
        while (a[j] == b[j])
        {
            j--;
        }
        cout << i + 1 << ' ' << j + 1 << endl;
    }
}