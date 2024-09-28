#include<bits/stdc++.h>
#define ll long long
#define limit 1000000000
#define  vi vector<ll>

using  namespace std;
int main(){

   ll N;

   cin >> N;

   ll arr[1001];
   ll c = 1;
   for(int i = 0; i <= 30;i++){
      c = pow(3,i);
      arr[i] = c;
      
   }

   vi memo;
   for (int i = 30; i >= 0; i--)
   {
      if(N-arr[i] > 0 || N >= arr[i]){
         memo.push_back(arr[i]);
         N-=arr[i];
      }
   }
   
   cout << memo.size() <<endl;
   sort(memo.begin(),memo.end());
   for (int i = 0; i < memo.size();i++){
      cout << memo[i]<< " ";
   }
   


}