#include<stdio.h>
int main(){
    int arr[100];
    int n;
    int i,j;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter element to find in array :");
    scanf("%d",&key);
    int temp = 0;

    for(i=0;i<n;i++){
        if(arr[i]==key){
            temp = 1;
            break;
        }
        else{
            temp = 0;
        }
    }
    if(temp ==1){
        printf("Element found at %d index",i);
    }
    else{
        printf("Element not found");
    }

    return 0;
}