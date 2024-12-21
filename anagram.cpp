#include <bits/stdc++.h>

using namespace std;

void palindromestring(string n, string k)
{
    cout << "enter a string: " << endl;
    cin >> n;
    // cout<<n<<endl;
    int i = n.length();
    for (int i = n.length() - 1; i >= 0; i--)
    {
        k = k + n[i];
    }
    // cout<<k<<"";
    if (n == k)
    {
        cout << "it's palindrome: " << endl;
    }
    else
    {
        cout << "it's not a palindrome: " << endl;
    }
    // cout<<n[4]<<" ";
    // cout<<i<<" ";
    cout << endl;
}

void gcd(int n, int m)
{
    cout << "Enter the number : " << endl;
    cin >> n >> m;
    int temp;
    if (n > 0 && m > 0)
    {
        if (n > m || n == m)
        {
            for (int i = 1; i <= n; i++)
            {
                if (n % i == 0 && m % i == 0)
                {
                    temp = i;
                    // cout<<temp<<" ";
                }
            }
        }
        else
        {
            for (int i = 1; i <= m; i++)
            {
                if (n % i == 0 && m % i == 0)
                {
                    temp = i;
                }
            }
        }
        cout << temp << " ";
        cout << endl;
    }
}

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

void lcm(int l)
{
    cout << "enter a numbers : " << endl;
    cin >> l;
    int ar[l];
    for (int i = 0; i < l; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                swap(ar[j], ar[j + 1]);
            }
        }
    }
    for (int i = 0; i < l; i++)
    {
        for (int j = 2; j < ar[l - 1]; j++)
        {
            if (ar[i] * j)
            {
                /* code */
            }
        }
    }
}

void star(int l)
{
    cin >> l;
    // for (int i = 1; i <= l; i++)
    // {
    //     for (int j = 1; j <= l-(l-i); j++)
    //     {
    //         cout<< "*";
    //     }
    //     cout<<endl;
    // }
    for (int i = 0; i < l; i++)
    {
        for (int j = 1; j <= l - (i + 1); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i) + 1; j++)
        {
            cout << "*";
        }
        for (int i = 1; i <= l - (i + 1); i++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void sumofN(int n, int k)
{
    k = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        k = k + i;
    }
    cout << k << endl;
}

void additionoftwomatrix(int n, int k)
{
    cout << "plese specify the order of a matrix: \n1.rows \n2.columns " << endl;
    cin >> n >> k;
    int king1[n][k];
    int king2[n][k];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> king1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> king2[i][j];
        }
    }
    cout << "****first array*******" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << king1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "********second array*******" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << king2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "****result*****" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << king1[i][j] + king2[i][j] << " ";
        }
        cout << endl;
    }
    //  for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < k; j++)
    //     {
    //         cout<<king1[i][j]*king2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}

void repeating(string n)
{
    cout << "enter a string : " << endl;
    cin >> n;
    int k = 0;
    for (int i = 0; i < n.length(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (n[i]==n[j])
            {
                k++;
            }   
            // cout<<n[i];
        }
    }
    cout<<k<<" ";
    cout<<endl;
}

void smalltocaps(int m,string n){
    cout<<"enter a option: \n";
    cout<<"1.caps to small: \n2.small to caps : \n"<<endl;
    cin>>m;
    switch (m)
    {
    case 1:
        cout<<"enter a string: "<<endl;
        cin>>n;
        for (int i = 0; i < n.length(); i++)
        {
            if(n[i]>=65 && n[i]<=90){
                cout<<char(n[i]+32);
            }
            else if(n[i]>=97 && n[i]<=122){
                cout<<n[i];
            }
        }
        cout<<endl;
        break;
    case 2:
        cout<<"enter a string: "<<endl;
        cin>>n;
        for (int i = 0; i < n.length(); i++)
        {
            if(n[i]>=97 && n[i]<=122){
                cout<<char(n[i]-32);
            }
            else if(n[i]>=65 && n[i]<=90){
                cout<<n[i];
            }
        }
        cout<<endl;
        break;

    default:
        cout<<"invalid input: "<<endl;
        break;
    }
}



int main()
{
    int a;
    cout << "Enter a test cases: " << endl;
    cin >> a;
    int m;
    while (a > 0)
    {
        string n, k;
        // int n, m;
        // anagram(n, m);
        // gcd(n, m);
        // sumofN(n, k);
        // palindromestring(n,k);
        // additionoftwomatrix(n,k);
        // repeating(n);
        smalltocaps(m , n);
        a--;

    }
    // star(l);
    return 0;
}