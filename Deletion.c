// #include<stdio.h>
// int main(){
//     int arr[20],i,j,n,k;
//    printf("Enter number of elements of array :");
//    scanf("%d",&n);
//    for(i=0;i<n;i++){
//     printf("Enter the %d element of array :",(i+1));
//     scanf("%d",&arr[i]);
//    } 
//    printf("Enter the index from which you want to delete the element :");
//    scanf("%d",&k);

//    for(i=k;i<=n-1;i++){
//     arr[i]=arr[i+1];
//    }
//    n--;
//    for(i=0;i<n;i++){
//     printf("%d ",arr[i]);
//    }
//    return 0;
   

// }

#include<stdio.h>

int main(){
    int arr[20]={1,2,3,4};
    int n=4;
    int i,j;
    int k;
    printf("Enter the index :");
    scanf("%d",&k);
    for(i=k;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
