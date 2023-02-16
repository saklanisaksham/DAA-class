#include<stdio.h>
#include<math.h>
void jumpsearch(int arr[],int size,int key){
    int blocksize = sqrt(size);
    int st=0;
    int end=blocksize;

    while(arr[end] <= key && end < size){
        st = end;
        end+=blocksize;
        if(end>size-1) end=size;
    }
    for(int i=st;i<end;i++){
        if(arr[i]==key){
            printf("Element found");
            return ;
        }
    }
    printf("Element not found");

}

void main(){
    int arr[]={1,3 ,5,7,11,13,15,17,19,20};
    int key = 17;
    int size = sizeof(arr)/sizeof(arr[0]);
    jumpsearch(arr,size,key);
}
