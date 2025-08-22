#include<iostream>
using namespace std;
void reverse_array(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int arr[100],n;
    cout<<"enter no of elements"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse_array(arr,n);
    cout<<"array after reversing"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}