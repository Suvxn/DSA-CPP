#include<iostream>
using namespace std;

int main()
{
    // print namaste duniya :-) 
    cout<<"Namaste Duniya :-)"<<endl;

    // datatypes in c++
    int a = 10;
    float b = 10.5;
    char c = 'a';
    bool d = true;
    double e = 10.5;

    // print the datatypes along with their size
    
    cout<<"int a = "<<a<<endl;
    cout<<"Size of int = "<<sizeof(a)<<endl;
    cout<<"float b = "<<b<<endl;
    cout<<"Size of float = "<<sizeof(b)<<endl;
    cout<<"char c = "<<c<<endl;
    cout<<"Size of char = "<<sizeof(c)<<endl;
    cout<<"bool d = "<<d<<endl; 
    cout<<"Size of bool = "<<sizeof(d)<<endl;
    cout<<"double e = "<<e<<endl;
    cout<<"Size of double = "<<sizeof(e)<<endl;



      cout<<"Variables "<<endl;
    // variables in c++
    int f = 10;
    float g = 10.5;
    char h = 'a';
    bool i = false;
    string j = "Hello";

    // print the variables
    cout<<"int f = "<<f<<endl;
    cout<<"float g = "<<g<<endl;
    cout<<"char h = "<<h<<endl;
    cout<<"bool i = "<<i<<endl;
    cout<<"string j = "<<j<<endl;

    // typcasting example
    int x = 'x';
    char y = 110;

    cout <<"x = "<< x<<endl;
    cout <<"y = "<< y<<endl;

    //operators
    int m = 2;
    int n = 4;

    cout <<"m + n = "<< m+n<<endl;
    cout <<"m - n = "<< m-n<<endl;
    cout <<"m * n = "<< m*n<<endl;
    cout <<"m / n = "<< m/n<<endl;
    cout <<"m % n = "<< m%n<<endl; 
  
    //relational operators
    cout <<"m > n = " << (m>n)<<endl;
    cout <<"m < n = " << (m<n)<<endl;
    cout <<"m >= n = "<< (m>=n)<<endl;
    cout <<"m <= n = "<< (m<=n)<<endl;
    cout <<"m == n = "<< (m==n)<<endl;
    cout <<"m != n = "<< (m!=n)<<endl;

    // logical operators
    bool k = true;
    bool l = false;

    cout <<"k && l = "<< (k&&l)<<endl;
    cout <<"k || l = "<< (k||l)<<endl;
    cout <<"!k = "<< (!k)<<endl;
    cout <<"!l = "<< (!l)<<endl;
    

    // bit wise operators
    // int o = 5;
    // int p = 3;

    // cout <<"o & p = "<< (o&p)<<endl;
    // cout <<"o | p = "<< (o|p)<<endl;
    // cout <<"o ^ p = "<< (o^p)<<endl;
    // cout <<"~o = "<< (~o)<<endl;
    // cout <<"o << 1 = "  << (o<<1)<<endl;

   
    

    return 0;
}