#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void checkanagram(char*str1 , char*str2){
    
    sort(str1,str1+(strlen(str1)));
    sort(str2, str2+(strlen(str2)));
   
}
int main(){
    char str1[100] ;
    char str2[100];

    cin>>str1;
    cin>>str2;
   
     checkanagram(str1, str2);

     int out = strcmp(str1,str2);

     if(out == 0){
        cout<<"true";
     } else{
        cout<<"false";
     }


return 0;
}