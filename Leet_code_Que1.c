#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,3,4,5,5,6};
    int n=10;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                arr[i+1]=arr[j+1];
            }
        }
    }

    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}
