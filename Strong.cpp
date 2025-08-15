#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, num, sum = 0, rem, temp;
    cin >> num;
    temp = num;
    while (num != 0)
    {
        int fact = 1;
        rem = num % 10;
        for (i = 1; i <= rem; i++)
        {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    if (sum == temp)
        cout << "srong number";
    else
        cout << "not strong number";
}
