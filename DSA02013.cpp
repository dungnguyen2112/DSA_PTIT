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

int n, p, s;
vector<vector<int>> res;
int prime[205];
vector<int> prime1;
void sang()
{
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(200); i++)
    {
        if (!prime[i])
        {
            for (int j = i * i; j <= 200; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= 200; i++)
    {
        if (!prime[i])
        {
            prime1.push_back(i);
        }
    }
}
vector<int> tmp;
void Try(int i, int sum)
{
    if (tmp.size() == n)
    {
        if (sum == s)
        {
            res.push_back(tmp);
        }
        return;
    }
    for (int j = i; j < prime1.size(); j++)
    {
        if (sum + prime1[j] <= s)
        {
            tmp.push_back(prime1[j]);
            Try(j + 1, sum + prime1[j]);
            tmp.pop_back();
        }
        else
            return;
    }
    tmp.clear();
}
int main()
{
    sang();
    int x;
    cin >> x;
    while (x--)
    {
        res.clear();
        cin >> n >> p >> s;
        for (int i = 0; i < prime1.size(); i++)
        {
            if (prime1[i] > p)
            {
                Try(i, 0);
                break;
            }
        }
        sort(res.begin(), res.end());
        cout << res.size() << endl;
        for (auto i : res)
        {
            for (auto j : i)
                cout << j << " ";
            cout << endl;
        }
    }
}