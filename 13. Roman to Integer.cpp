#include <bits/stdc++.h>

using namespace std;

int roman_int(char a)
{
    switch (a)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0;
        break;
    }
}

int main()
{
    // test case {MCMXCIV}
    FILE *tests = freopen("tests.txt", "r", stdin);
    string s;
    cin >> s;

    int v, t;
    int number = 0;
    for (int i = 0; i < s.size(); i++)
    {

        v = t;
        t = roman_int((s[i + 1]));
        if (t > roman_int(s[i]))
        {
            number += t - roman_int(s[i]);
            i++;
        }
        else
        {
            number += roman_int(s[i]);
        }
    }
    cout << number;

    cout << endl;
    return 0;
}