#include<bits/stdc++.h>
#include<syslog.h>
#define ll long long
#define limit 1000000000
#define  vi vector<ll>


using  namespace std;

int main(){
    
    int memo1,n,res,memo2,x,min = 2000000;


    int arr[1000];
    int tmp[1000];

    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++){
        if(arr[j] < x){
             tmp[j] = x - arr[j];
             if(min == tmp[j]){
                memo1 = arr[j-1];
                memo2= arr[j];
                if(memo1 < memo2){
                    res = memo1;
                }else{
                    res = memo2;
                }
             }else if(min > tmp[j]){
                min = tmp[j];
                res = arr[j];
             }

        }else{  
             tmp[j] = arr[j] - x;
              if(min == tmp[j]){
                memo1 = arr[j-1];
                memo2= arr[j];
                if(memo1 < memo2){
                    res = memo1;
                }else{
                    res = memo2;
                }
             }else if(min > tmp[j]){
                min = tmp[j];
                res = arr[j];
             }
        }
    }

    cout << res <<endl;
    

}

