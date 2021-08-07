#include <bits/stdc++.h>

using namespace std;

int main () {
   int n, s;
   vector<int> ai;
   vector<int> bi;

   cin >> n >> s;
   
   for (int i = 0; i < n; i++){
      int num; cin >> num;
      ai.push_back(num);
   }

   for (int i = 0; i < n; i++){
      int num; cin >> num;
      bi.push_back(num);
   }
   int existe = 0;
   if ( (ai[s-1] == 1 || bi[s-1] == 1) && ai[0] != 0 ){
      if (ai[s-1] == 0) {
         for (int i = s-1; i <= n; i++){
            if (ai[i] == 1 && bi[i] == 1){
               existe = 1;
               i = n;
            }
         }  
         if (existe != 0)
            cout << "YES" << endl;
         else
            cout << "NO" << endl;
      }
      else if (ai[s-1] == 1)
         cout << "YES" << endl;
      else
         cout << "NO" << endl;
   }
   else 
      cout << "NO" << endl;

   return 0;
}