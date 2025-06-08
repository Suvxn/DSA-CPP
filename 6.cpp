#include<iostream>
using namespace std;

int main()
{
    // pattern 1

    // int i,j, n;
    // cout<<"Enter the number of rows: ";
    // cin>>n;
    // i=1;
    // while (i <= n)
    // {
    //     j=1;
    //     while (j <= n)
    //     {
    //         cout<< i ;
    //         j++;
    
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // pattern 2

    // int i,j, n;
    // cout<<"Enter the number of rows: ";
    // cin>>n;
    // i=1;
    // while (i <= n)
    // {
    //     j=1;
    //     while (j <= n)
    //     {
    //         cout<< j ;
    //         j++;
    
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // pattern 3

    // int i,j, n;
    // cout<<"Enter the number of rows: ";
    // cin>>n;
    // i=1;
    // while (i <= n)
    // {
    //     j=1;
    //     while (j <= n)
    //     {
    //         cout<< n-j+1 << " " ;
    //         j++;
    
    //     }
    //     cout<<endl;
    //     i++;
    // }
    
    // pattern 4
    // int i,j, n;
    // cout<<"Enter the number of rows: ";
    // cin>>n;
    // i=1;
    // while (i <= n)
    // {
    //     j=i;
    //     while (j <= n)
    //     {
    //         cout<< "* " ;
    //         j++;
    
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //pattern 5
      int i,j, n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    i=1;
    while (i <= n)
    {
        j=1;
        while (j <= i)
        {
            cout<< "* " ;
            j++;
    
        }
        cout<<endl;
        i++;
    }
    return 0;
} 
    