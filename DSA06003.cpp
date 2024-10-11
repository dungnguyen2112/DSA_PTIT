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
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            int j = i;
            for (int k = i + 1; k < n; k++)
            {
                if (a[k] < a[j])
                {
                    j = k;
                }
            }
            if (j != i)
            {
                dem++;
                swap(a[i], a[j]);
            }
        }
        cout << dem << endl;
    }
}