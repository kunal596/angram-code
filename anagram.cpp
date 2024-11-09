#include <bits/stdc++.h>

using namespace std;

void anagram(string n, string m)
{
    int l = 100;
    cout << "string 1: " << endl;
    cin >> n;
    cout << "string 2: " << endl;
    cin >> m;
    int y = 0;
    // cout<<n.length()<<" "<<m.length()<<endl;
    // cout<<n[0]<<" "<<m[0];
    if (n.length() == m.length())
    {
        for (int i = 0; i < n.length(); i++)
        {
            // cout << n[i] << " ";
            for (int j = 0; j < n.length(); j++)
            {
                if (n[i] == m[j])
                {
                    y++;
                }
            }
        }
        if (y == n.length())
        {
            cout << "it's anagram \n";
        }
        else
        {
            cout << "it's not an anagram \n";
        }
    }
    else
    {
        cout << "it's not an anagram \n";
    }
}
int main()
{
    int a;
    cout << "Enter a test cases: " << endl;
    cin >> a;
    while (a > 0)
    {
        string n, m;
        anagram(n, m);
        a--;
    }

    return 0;
}