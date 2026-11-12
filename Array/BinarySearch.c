#include<stdio.h>
int main(){
    int arr[20]={1,2,3,4};
    int key = 3;
    int mid;
    int n = 4;
    int i = 0;
    int low = 0;
    int high = n-1;

    while(low<high){
        mid = (low+high)/2;
        if(key==mid){
            printf("%d",mid);
            
        }
        else if(key<mid)
        {
        high = mid-1;
        }
        else if(key>mid){
        low = mid+1;
        }
        else{
            printf("Element not found");
        }
        
    }
    printf("Element found at %d index",mid);
    
}
