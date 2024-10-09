        #include<bits/stdc++.h>
        #define rep(i,a,b) for(int i = int(a); i < int(b); i++)


        using  namespace std;

        int main(){
            // ios_base::sync_with_stdio(false);
            // cin.tie(NULL);

            int N;
            

            cin >> N;

            double arr[N];
            rep(i,0,N){
                cin >> arr[i];
            }

        double med ;

        sort(arr,arr+N);

        
        if(N%2 == 0){
             med = (arr[N/2-1]+arr[N/2]) / 2.0 ;        
         }else{ 
             med = arr[N/2];
    
         }
            

           cout << fixed << setprecision(1) << med<<endl;
            
        }

