#include<iostream>
using namespace std;

int MaximumCircularSum(int arr[],int n){
    if(n == 1){
        return 0;

    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int currentMax = 0,maxi = 0,currentMin = 0,mini = 0;
    for(int i = 0;i<n;i++){
        currentMax = max(currentMax+arr[i],arr[i]);
        maxi = max(maxi,currentMax);

        currentMin = max(currentMin+arr[i],arr[i]);
        mini = max(currentMin,mini); 
    }

    return max(maxi,sum-mini);
}

int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int val = MaximumCircularSum(a,n);
        cout<<val;
        return 0;

    }
}
