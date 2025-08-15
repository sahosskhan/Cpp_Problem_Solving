#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, sum = 0, i;
    cin >> num;
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
    }
    if (sum == num)
        cout << "perfect number";
    else
        cout << "not perfect number";
}
