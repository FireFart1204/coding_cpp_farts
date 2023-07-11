#include<iostream>
using namespace std;

void sort(int a[],int n){
      for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) { 
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void sumTriplet(int a[],int n,int target){

    sort(a,n);
    
   for(int i=0;i<n;i++){
       int l = i+1;
       int r = n-1;
       while(l<r){
           if(a[i]+a[l]+a[r] == target){
            cout<<a[i]<<","<<a[l]<<" and "<<a[r]<< endl;
            l++;
            r--;
       }
       else if(a[i]+a[l]+a[r] > target){
           r--;
       }
       else{
           l++;
       }
       }
       


   }

}


int main(){
    int n,target;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>target;
    sumTriplet(a,n,target);
    return 0;



}
