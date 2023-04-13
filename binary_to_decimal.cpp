/* Question:
  Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

*/


#include<iostream>
using namespace std;

int binary_to_decimal(int n){
    int num = n;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0
	int base = 1;

	int temp = num;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;

		dec_value += last_digit * base;

		base = base * 2;
	}

	return dec_value;
}
int main(){
    int n;
    cin >> n;
    
    cout<<binary_to_decimal(n);
    return 0;
    
}

