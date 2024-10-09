#include<bits/stdc++.h>


using namespace std;

struct node{
  int x;
  node *next;
    
};



int main(){
    node *node1,*node2;

    node1 = new node;
    node2 = new node;

    node1->x = 1;
    node1->next = node2;

    node *conductor;
    conductor = node1;

    while (conductor != NULL)
    {   
        cout << "ini alamat : "<<conductor<<endl;
        cout << conductor->x <<endl;
        conductor = conductor->next;
    }
    



    

}