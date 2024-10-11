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
int n, k;
int a[1000];

void khoitao()
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}

void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        for (int j = 1; j <= k; j++)
        {
            a[j] = 0;
        }
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin >> n >> k;
        set<int> st;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        sinh();
        int dem = 0;
        for (int i = 1; i <= k; i++)
        {
            if (st.find(a[i]) == st.end())
            {
                dem++;
            }
        }
        cout << dem << endl;
        memset(a, 0, sizeof(a));
    }
}