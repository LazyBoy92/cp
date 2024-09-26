#include<iostream>
#include<vector>
#define limit 1000000
using namespace std;

int position[limit];

void Sieve(){

    for (int i = 2; i <= limit; i++)
    {
        position[1] = -1, position[0] = -1;

        if(position[i] == 0){
            position[i] = i;

            int j = i*2
            for (; j <= limit; j+=i){
                 position[j] = -1;    
            }
            
        }
    }    
}



int main(){


Sieve();

vector<int> x;

for (int i = 0; i < 77777; i++)
{
    if(position[i] > 0){
        x.push_back(position[i]);
    }
    
}

int n,t[77777];
cin >> n;
for (int l = 0; l < n; l++)
{
   cin >> t[l];
}

for (int p = 0; p < n; p++)
{
  cout << x[t[p]-1] <<endl;
}











}