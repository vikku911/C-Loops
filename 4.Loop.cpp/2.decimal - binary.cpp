#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i =0;
    int ans =0; 
    for(;n!=0;){
        int bit = n &1;                               //last binary digit ke liye 
        
        ans = (bit* pow(10,i)+ans);               //binary ka last digit ko combine karne ke liye riqired order mein
         n= (n>>1);                        // right shift by 1 , taki next turn mein last binary digit change ho jaye. 
         i++;
    }
   
    cout<<ans;
}
/*
5
101

10
1010
*/