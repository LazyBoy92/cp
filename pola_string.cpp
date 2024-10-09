#include<bits/stdc++.h>
#define rep(i,a,b) for (int i = int(a); i < int(b); i++)

using namespace std;

int main(){
   
    string m;

    cin >> m;

    char ans[256][256];

    int n = ceil(sqrt(m.size()));
    int l = 0;

   

    rep(i,0,n){
        rep(j,0,n){
            ans[i][j] = m[l];
            l++;            
        }   
    }


    

    rep(i,0,n){
        if((i+1)%2 != 0){
            rep(j,0,n){
                 if(ans[i][j] == '\0'){
                    ans[i][j] = '.';
            }
                cout << ans[i][j];
            }
        }else{
            for (int j = n-1; j >= 0; j--){
                    if(ans[i][j] == '\0'){
                    ans[i][j] = '.';
            }
                cout << ans[i][j];
            }
            
        }
        cout << endl;
    }

   

    


    




  
    
}