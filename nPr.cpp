#include<bits/stdc++.h>
using namespace std;
 
int fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
 
int nPr(int n, int r)
{
    return fact(n) / fact(n - r);
}
 
// Driver code
int main()
{
    int n = 5;
    int r = 2;
 
    cout << n << "P" << r << " = " << nPr(n, r);
}