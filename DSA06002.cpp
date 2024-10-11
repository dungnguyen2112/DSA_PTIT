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
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n >> k;
        int a[n + 5];
        set<int> st;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stable_sort(a, a + n, cmp);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
}