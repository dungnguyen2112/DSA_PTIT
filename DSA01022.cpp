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
int n, a[1000], b[1000];
bool final = false;

void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] >= a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        final = true;
    }
    else
    {
        int j = n;
        while (a[i] > a[j])
        {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        khoitao();
        int dem1 = 0;
        while (!final)
        {
            dem1++;
            int dem = 0;
            for (int i = 1; i <= n; i++)
            {
                if (a[i] == b[i])
                {
                    dem++;
                }
            }
            if (dem == n)
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