#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < (2 * n) - r; c++)
        {
            cout << "* ";
        }

        for (int c = 0; c < 2 * r + 1; c++)
        {
            if (c % 2 != 0)
            {
                cout << "* ";
            }
            else
            {
                cout << r + 1 << " ";
            }
        }

        for (int c = 0; c < (2 * n) - r; c++)
        {
            cout << "* ";
        }

        cout << "\n";
    }
}