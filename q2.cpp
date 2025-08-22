#include<iostream>
using namespace std;
void duplicate_elements(int arr[],int &n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }
            else{
                j++;
            }
        }

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
    duplicate_elements(arr,n);
    cout<<"array after removing duplicate elements"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}