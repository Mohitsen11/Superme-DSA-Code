#include <iostream>
#include <vector>
#include <string>

using namespace std;

string convert(string s, int numRows)
{

    // base case
    if (numRows == 1)
    {
        return s;
    }

    int i = 0;
    int row = 0;
    bool direction = 1; // means top -> bottom store

    vector<string> ans(numRows);

    while (true)
    {

        if (direction)
        {
            while (i < s.size() && row < numRows)
            {
                ans[row++].push_back(s[i++]);
            }

            row = numRows - 2;
        }

        else
        {
            while (i < s.size() && row >= 0)
            {
                ans[row--].push_back(s[i++]);
            }

            row = 1;
        }

        if (i >= s.size())
        {
            break;
        }
        direction = !direction;
    }

    string output;

    for (int i = 0; i < ans.size(); i++)
    {
        output += ans[i];
    }

    return output;
}

int main()
{

    string s;

    cin >> s;

    int numRows = 3;

    string ans = convert(s, numRows);

    cout << "String after Zigzag conversion:\n";

    cout << ans << "\n";

    return 0;
}