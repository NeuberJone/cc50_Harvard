#include <iostream>
#include <string>

using namespace std;

int main ()
{

    int i,j,n = 9;

    while(n > 8 || n < 0)
    {
        cout << "Digite o valor de n: ";
        cin >> n;
    }
        for(i = 1; i <= n; i++)
        {
            for(j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        for(j = 1;j <= i; j++)
        {
            cout << "#";
        }
        cout << "  ";
        for(j = 1;j <= i; j++)
        {
            cout << "#";
        }
            for(j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        cout << "\n";

    }

    return 0;
}