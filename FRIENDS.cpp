#include<iostream>
using namespace std;
int SD(int x)
{
    int s = 0,i;
    for(i=1; i*i <x ; i++)
        if(x%i == 0)
        s = s + i + x/i;
    return s-x;
}
int main()
{
     int n;
     cin >> n;
      for( int a = 1; a <=n; a++)
     {
         int m, n;
         cin >> m >> n;
         if(SD(m) == n && SD(n) == m)
            cout << "YES" << endl;
         else cout << "NO" << endl;
              }
}
