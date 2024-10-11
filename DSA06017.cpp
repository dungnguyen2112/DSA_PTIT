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
    if (abs(0 - a) != abs(0 - b))
        return abs(0 - a) < abs(0 - b);
    return b > a;
}
int prime[1000005];
vector<int> v;
void sang()
{
    for (int i = 2; i <= sqrt(1000000); i++)
    {
        if (!prime[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 5], b[m + 5];
        int sum = 1e7;
        bool check = false;
        multiset<long long> st;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            st.insert(b[i]);
        }
        for (auto i : st)
        {
            cout << i << ' ';
        }
        cout << endl;
    }
}