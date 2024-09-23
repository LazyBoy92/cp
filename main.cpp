#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,n,m;
    
    string player[81];
    int arr[6][6];
    int tmp[5];



    cin >> t;

    string id;

    for (int i = 1; i <= t; i++){
        cin >> n >> m;
        cin >> id;

        for(int j = 1; j <= n;j++){
            cin >> player[j] >> arr[j][1] >> arr[j][2] >> arr[j][3];
            if(player[j] == id){
                tmp[1] = arr[j][1];
                tmp[2] = arr[j][2];
                tmp[3] = arr[j][3];
            }
        }  

    int x = 1;
   for (int j = 1; j <= n; j++)
   {
     if(arr[j][3] > tmp[3]){
        x++;
     }else if(arr[j][3] == tmp[3] && arr[j][2] > tmp[2]){
        x++;
     }else if(arr[j][3] == tmp[3] && arr[j][2] == tmp[2] && arr[j][1] > tmp[1]){
        x++;
     }
   }
    
    if(x <= m){
        cout << "YA"<<endl;
    }else{
        cout << "TIDAK" <<endl;
    }

    }
   

}