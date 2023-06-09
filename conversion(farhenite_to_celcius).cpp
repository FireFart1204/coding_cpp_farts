/*Question
  Take the following as input.

Minimum Fahrenheit value
Maximum Fahrenheit value
Step

Print as output the Celsius conversions. Use the formula C = (5/9)(F – 32) E.g. for an input of 0, 100 and 20 the output is
0 -17
20 -6
40 4
60 15
80 26
100 37

Input Format
The first line of the input contains an integer denoting the Minimum Fahrenheit value. The second line of the input contains an integer denoting the Maximum Fahrenheit value. The third line of the input contains an integer denoting the Step.
*/



#include<iostream>
using namespace std;

int main()
{
    int maxf,minf,tempc,tempf,step;
    cin>>minf>>maxf>>step;
    tempf = minf;
    while(tempf <= maxf){
        tempc = (5*(tempf - 32))/9;
        cout << tempf << " " << tempc << endl;
        tempf += step;
    }
    return 0;
    
    
}
