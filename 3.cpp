#include<iostream>
using namespace std;

int main()
{
    //while loop
    // int i = 1;
    // while (i <= 5) {
    //     cout << i << endl;
    //     i++;
    // }

    // find the sum of n even nos
    int n ;
    cout << "Enter the value of n: ";
    cin >> n;
    int sum = 0;
    int i = 2;
    while (i <= n * 2) {
        sum = sum + i;
        i = i + 2;
    }
    cout << "Sum of first " << n << " even nos is " << sum << endl;

    return 0;
}