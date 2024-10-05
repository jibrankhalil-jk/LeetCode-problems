#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string same = "";
    int matching = 0;
    for (int i = 0; i < strs.size(); i++)
    {
        for (int j = i; j < strs.size(); i++)
        {
            string word1 = strs[i];
            string word2 = strs[j];

            if (word1[0] == word2[0])
            {
                for (int i = 0; i < word1.size(); i++)
                {
                    if (word1[i] == word2[i])
                    {
                        same += word1[i];
                    }
                }
                
            }

            else
            {
                break;
            }
        }
    }

    return "";
}

int main()
{
    // FILE *tests = freopen("tests.txt", "w", stdin);
    // int n;
    // cin >> n;
    vector<string> strs;
    strs.push_back("flower");
    strs.push_back("flow");
    strs.push_back("flight");
    cout << longestCommonPrefix(strs) << endl;
    return 0;
}