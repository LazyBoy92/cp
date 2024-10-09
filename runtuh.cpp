#include<bits/stdc++.h>
#define rep(i,a,b) for (int i = int(a); i < int(b); i++)


using  namespace std;

int r,c;
char arr[21][9];



void down(int row,int total,int col){
    
    rep(i,0,row+1){
        if(i > row - total){
            arr[i][col] = '1';
        }else{
            arr[i][col] = '0';
        }
    }
}

int lastrow(int last,int col){
    rep(i,last,r){
        if(arr[i+1][col] == '1' || i ==r){
            return i;
        }
    }   
   return 0;
}

int count(int row,int col){
    int total = 0;
    rep(i,0,row){
        if(arr[i][col] == '1'){
            total++;
        }
    }
    return total;
}


int findlast(){
    int counter = -1;
    rep(i,0,r){
        bool isblock = true;
        rep(j,0,c){
            if(arr[i][j] != '1'){
                isblock = false;
            }
        }

         if(isblock){
            counter = i;
            rep(k,0,c){
                arr[i][k] = '0';
            }
        }

        
    }

    return counter;
}



int main(){
    
    cin >> r >>c;

    rep(i,0,r){
        rep(j,0,c){
             cin >> arr[i][j];
        }
       
    }

      
       
    int p = findlast();
    while (p > 0){
        
         rep(j,0,c){
            int total = count(p,j);
            int last = lastrow(p,j);
            down(last,total,j);
        }
        p = findlast();
        
    }
    

    rep(k,0,r){
        rep(l,0,c){
            cout << arr[k][l] ; 
        }
        cout  << endl;
        
    }

}
    