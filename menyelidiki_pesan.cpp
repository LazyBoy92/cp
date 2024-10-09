#include<bits/stdc++.h>
#define rep(i,a,b) for (int i = int(a); i < int(b); i++)


using namespace std;

int main(){

    int N;
    string j ,l,res;
   


    cin >> N;

    cin >> j >> l >> res;
   
   vector<char> tmp1(30,'?');
   vector<char> tmp2(30,'?');


   rep(i,0,N){
     char p = j[i];
     char k =  l[i];
     int xp = p - 'A';
     int yk = k - 'A';

     if(tmp1[xp] != '?' && tmp1[xp] != k || tmp2[yk] != '?' && tmp2[yk] != p){
        cout << "Pak Dengklek bingung";
        return 0;
     }

     tmp1[xp] = k;
     tmp2[yk] = p; 

   }

   rep(j,0,N){
    char i = res[j];
    int ip = i - 'A';
    if(tmp2[ip] != '?'){
        cout << tmp2[ip];
    }else{
        cout<< '?';
    }
   }
      
      


}