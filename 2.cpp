#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;

    // check whether the number is even or odd
        if(a%2==0)
        {
            cout<<"even\n";
        }
        else {
            cout<<"odd \n";
        }
// check which number is greater
        int x , y ;
       
        cout<<"enter value of x " <<  endl;
         cin>>x;
     
        cout<<"enter value of y " << endl;
        cin>>y;

        if(x>y)
        {
            cout<<x;
        }
        else {
            cout<<y;
        }

        return 0;
    }