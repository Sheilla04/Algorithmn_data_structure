#include <iostream>
using namespace std;
int getSum(int arr[], int n){
  int sum=0;
  for(int i =0; i<n; i++){
    sum+=arr[i];
  }
  return sum;
}
int getMax(int arr[], int n){
  int max = arr[0];
  for(int i=1; i<n; i++){
    if(max< arr[i])
     max=arr[i];
  }
  return max;
}
int main(){
    int n;
    cout<<"Enter the number of integers: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; ++i){
        cout<<"Enter a number["<<i<<" of "<<n<<"] : "<<endl;
        cin>>arr[i];
    }
    cout<<"The summation of the integers: "<<getSum(arr,n);
    cout<<"\nMaximum: "<<getMax(arr, n);