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
void thap(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << a << " -> " << c << endl;
        return;
    }
    thap(n - 1, a, c, b);
    thap(1, a, b, c);
    thap(n - 1, b, a, c);
}

int main()
{
    faster()
    int n;
    cin >> n;
    thap(n, 'A', 'B', 'C');
}