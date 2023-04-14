/*Question
  Take N as input, Calculate it's reverse also Print the reverse.
*/



#include<iostream>
using namespace std;

int main(){
    int n , remain , ans = 0;
    cin >> n;
    
    while(n != 0){
        remain = n % 10;
        ans = ans*10 + remain;
        n /= 10;
    }
    cout << ans;
    return 0;
    
}
