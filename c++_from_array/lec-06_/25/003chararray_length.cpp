#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char str[] = "coding blocks";
	int cnt = 0;

    // // done using while loop  , method 1 //
	// while (str[cnt]!='\0')
	// {
	// 	cnt++;
	// }
    // cout<<cnt;


	
    //   done using for loop , method 2  //

	// for (int i = 0; str[i]!='\0'; i++)
	// {
	// 	cnt++;
	// }
    //  cout<<cnt;
   

    // method 3 //
    
	cout<<"Length of array is: "<<strlen(str);

	return 0;
}