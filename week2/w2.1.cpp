#include<bits/stdc++.h>
using namespace std;
int searchcount(int arr[],int lb,int ub,int key){
    while(lb<=ub){
        int mid = lb + (ub-lb)/2;
        if(arr[mid]==key){
            return arr[mid];
        }
        else if(arr[mid]>key)
            ub=mid+1;
        else
            lb=mid-1;
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int key;
        cin>>key;
        int s=searchcount(a,0,n,key);
        if(s){
            int count=0;
            for(int i=0;i<n;i++){
                if(a[i]==key){
                    count++;
                }
            }
            cout<<key<<"-"<<count<<"\n";
        }
        else{
            cout<<s;
        }
    }
}
