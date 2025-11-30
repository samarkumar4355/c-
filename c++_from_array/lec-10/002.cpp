#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    string str ="aaabbccdsaa";
    int cnt =1;
    int n=str.length();
    string ans=" ";
    for( int i=1; i<n; i++){
        if(str[i]==str[i-1]){
              cnt++;
        }
        else{
            ans = ans + str[i-1];
            ans = ans + to_string(cnt);
            cnt=1;
        }
    }
    ans = ans + str[n-1];
    ans = ans + to_string(cnt);


     cout<<ans<<endl;

    return 0;
}
