// #include<stdio.h>
// int main(){
//     int i,j,element,n,k;
//     int arr[20];
//     printf("Enter the number of elements : ");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter the %d element of array :",(i+1));
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter the index in which u want to enter the number :");
//     scanf("%d",&k);
//     printf("Enter the element :");
//     scanf("%d",&element);
//     j=n-1;
//     while(j>=k){
//         arr[j+1]=arr[j];
//         j--;
//     }
//     arr[k]=element;
//     n++;
//     for(i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int arr[20]={1,2,4};
//     int i,j,n=3;
//     int k = 2;
//     int element = 3;
//     for(j=n-1;j>=k;j--){
//         arr[j+1]=arr[j];
//     }
//     arr[k]=element;
//     n++;
//     for(i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int arr[20]={1,2,4};
//     int i,j;
//     int  n = 3;
//     int k = 2;
//     int element = 3;
//     j = n-1;
//     while(j>=k){
//         arr[j+1]=arr[j];
//         j--;
//     }
//     arr[k]=element;
//     n++;
//     for(i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }

// }

