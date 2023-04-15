  
  
 /* 
  Question
  LCD and GCD
 */
 
 
 
 
 #include<iostream>

using namespace std;

int gcd(int a,int b){
    int val = min(a,b);
    while (val){
        if(a%val == 0 && b%val == 0){
            break;
        }
        val--;
    }
    return val;
}

int lcd(int a,int b){
    int val = max(a,b);
    do{
        if(a%val == 0 && b%val == 0){
            cout << val;
            break;
        }
        val++;
    }
    while(true);
}

int main()
{
    int n1,n2;
    cin >> n1 >> n2;
    
    cout << gcd(n1,n2);
    lcd(n1,n2);
    return 0;
}
