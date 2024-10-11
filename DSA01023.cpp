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
int n, k, a[1000], b[1000];
bool final = false;

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
        final = true;
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
        for (int i = 1; i <= k; i++)
        {
            cin >> b[i];
        }
        khoitao();
        int dem1 = 0;
        while (!final)
        {
            dem1++;
            int dem = 0;
            for (int i = 1; i <= k; i++)
            {
                if (a[i] == b[i])
                {
                    dem++;
                }
            }
            if (dem == k)
            {
                cout << dem1;
                break;
            }
            else
                sinh();
        }
        cout << endl;
    }
}