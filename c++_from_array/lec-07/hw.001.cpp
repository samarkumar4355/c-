#include <iostream>
#include<cstring>
using namespace std;

char splitting(char*str1,char*str2){
    char ch[100];
    int i=0;
    while(str1[i]<strlen(str1)){
        if( str1[i] != str2[0]){
              ch[i] = str1[i];
        } else{
            return ch[i];
        }
        i++;

    }
}
int main(){
    char str1[100];
    char str2[100];

    cin.getline(str1,100);
    cin.getline(str2,100);

    splitting(str1,str2);
    
    return 0;
}