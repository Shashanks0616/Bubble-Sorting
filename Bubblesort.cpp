#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"Enter the number"<<endl;
    int arr[i];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int counter = 1;
    while(counter>n){
        for(int i =0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=int arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            
        }
        counter++;
    }
    for(int i =0;i<n-1;i++){
        cout<<arr[i]<<"  "<<endl;
    }
    return 0;
}