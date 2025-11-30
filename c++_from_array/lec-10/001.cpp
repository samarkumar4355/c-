#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    char str[] ="aaabbccc";
    int n =8;
    int cnt=1;
    for(int i =1;i<n;i++){
        if(str[i]==str[i-1]){
            cnt++;
        }
        for(int i=0; i<n;i++){
            cout<<str[i]<<cnt;
        }
       
    }

    return 0;
}