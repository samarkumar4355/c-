#include<iostream>
using namespace std;
int multi(int x,int y){
    
   
    if(y==0){
        return 0;
    }
    int A = multi(x,y-1);
    return x+A;
      
   
    }

   

int main(){
    int y = 2
   
    int x = 5;
   
    cout<<multi(x,y)
   
    return 0;
}