#include<iostream>
using namespace std;
int f(int x, int n){
    //base case
    if(n==0){
        return;
    }
   //recursive case
   int A = f(x,n-1);

   return x*A;

}
int main (){
   int n = 3;
   int x=2;
   cout<< f(x,n);
   
    return 0;
}