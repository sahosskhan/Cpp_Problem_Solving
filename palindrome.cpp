#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, rem, rev = 0, temp;
    cin >> num;
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (rev == temp)
        cout << "palindrome";
    else
        cout << "not palindrome";
}