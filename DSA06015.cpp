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
        int n;
        cin >> n;
        int a[n + 5];
        int sum = 1e7;
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
}