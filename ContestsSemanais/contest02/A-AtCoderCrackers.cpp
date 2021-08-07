#include <bits/stdc++.h>

using namespace std;

int main () {

   int n, k, calculo;
   cin >> n >> k;

   if (n >= k)
      cout << n % k << endl;
   else
      cout << 1 << endl;

   return 0;
}