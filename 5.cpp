#include<iostream>
using namespace std;

int main()
{
    // make a pattern of stars (*) in a rectangle using while loop
    int i, j, n, m; 
    i = 0;
    cout<< "Enter the number of columns: ";
    cin >> m;
    cout << "Enter the number of rows: ";
    cin >> n;
   
    while (i < n)
    {
        j = 0;
        while (j < m)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
    }