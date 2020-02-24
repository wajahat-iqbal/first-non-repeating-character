#include <iostream>
#include<string.h>
using namespace std;
int main()
{
     char str[24]="aaabbbbcccfffgggkkkj";
     int n=strlen(str);
     for(int i=1;i<n-1;i++){
        if( i==1 && str[i-1]!=str[i] || str[i-1]!=str[i] && str[i]!=str[i+1] || str[i]!=str[i+1] && i==n-2 ){
		  cout<<i;
		  break;}
   }
    return 0;
}
