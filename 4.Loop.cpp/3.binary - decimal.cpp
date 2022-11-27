#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i =0;
    int ans =0; 
    for(;n!=0;){
        int digit = n %10;                      // 101010 ko bhi as a decimal mein hi padega compiler isiliye reminder nikalte hai % use kar ke 
        
        ans = (digit* pow(2,i)+ans);        // jo digit (reminder) nikla usko 2 ke power se multiply krnege .
         n= (n/10);             //101010 se 10101 krne ke liye inshot digit ko n ka size kam krne ke liye. 
         i++;
    }
   
    cout<<ans;
}
/*

 1010
 10

 101
 5

*/
