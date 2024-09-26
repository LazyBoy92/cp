#include<bits/stdc++.h>
#define limit 1000000
using namespace std;

vector<int> prime;

vector<int> Sieve(int n){

    vector<bool> elim(limit+1,false);
   
    for (int i = 2; i <= limit; i++){
        if(!elim.at(i)){
            prime.push_back(i);
            int j = i*2;
            while(j <= limit){
                elim.at(j) = true;
                j+=i;
            }
            
        }
    }
    return prime;    
}



int main(){

Sieve(77777);
int t,n;

cin >> t;
for (int i = 0; i < t; i++)
{
    cin >> n;
    cout << prime[n-1]<<endl;
}


}