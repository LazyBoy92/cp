    #include<bits/stdc++.h>
    #define rep(i,a,b) for (int i = int(a); i <= int(b); i++)

    

    using  namespace std;
    
    struct person{
        string name;
        string no;
    };
    
    bool stat ;
    
    person tel[100001];

    void solve(int low ,int high, string target){
            stat = false;
            int tengah ;

            while(low <= high){

                tengah = (low+high)/2;

                if(target < tel[tengah].name){
                    high = tengah-1;
                }else if(target > tel[tengah].name){
                    low = tengah+1;
                }else if(target == tel[tengah].name){        
                    stat = true;
                    break;
                }
            }

            if(stat){
                cout << tel[tengah].no<<endl;
            }else{
                cout << "NIHIL"<<endl;
            }
    }

   
    int main(){

        int N,Q;

        cin >> N >> Q;

   
        for (int i = 1; i <= N; i++)
        {
            cin >> tel[i].name >> tel[i].no;

        }
        
        string target;  
        for (int i = 1; i <=Q; i++)
        {
            cin >> target;

            solve(1,N,target); 
            
        }
        


        

            
    }