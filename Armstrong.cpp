#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, rem, arm = 0, temp, count;
    cin >> num;
    temp = num;
    while (num != 0)
    {
        count++;
        num /= 10;
    }
    num = temp;
    while (num != 0)
    {
        rem = num % 10;
        arm += pow(rem, count);
        num /= 10;
    }
    if (temp == arm)
        cout << "armstrong";
    else
        cout << "not armstrong";
    return 0;
}
