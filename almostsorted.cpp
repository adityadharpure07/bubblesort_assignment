#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool flag=true;
      for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    } 
    
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                j++;
            }
    }
    
    for(int j=0;j<n;j++){
       if(arr[j]>arr[j+1]){
                flag=false;
                break;
                
            }
    }
    if(flag==true) cout<<"Almost sorted";
    else cout<<"not almost sorted";
   
}