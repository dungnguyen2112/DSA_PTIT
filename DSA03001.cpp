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
int val[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int dem = 0;
        for (int i = 9; i >= 0; i--)
        {
            if (val[i] <= n)
            {
                dem += n / val[i];
                n %= val[i];
            }
        }
        cout << dem << endl;
    }
}