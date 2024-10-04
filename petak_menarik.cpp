        #include<bits/stdc++.h>
        // #define rep(i,a,b) for (int i = int(a); i <= int(b); i++)


        using  namespace std;



    int main(){

            int n,m,k,x = 101,y= 101;
        


            cin >> n >> m >> k;

         

            int arr[101][101];

            for(int i =0;i <= 100;i++){
                for(int j = 0;j <= 100;j++){
                     arr[i][j] = 1;
                    
                }
                
            }

            for(int i = 1;i <= n;i++){
                for(int j =  1;j <= m;j++){
                    cin >> arr[i][j];
                    
                }
                
            }


            
            

            

            

            

            for(int i = 1; i <= n;i++){
                
               for(int j = 1; j <= m;j++){
                    if(arr[i-1][j] * arr[i][j-1] * arr[i+1][j] * arr[i][j+1] == k){
                        if( y > j){
                            x = i;
                            y = j;
                        }else if(y == j && i < x){
                            x = i;
                            y = j;
                        }
                    }
                }
                
            }

        if (x == 101){
            x = 0;
            y = 0;
        }

        cout << x << " " << y <<endl;

    }