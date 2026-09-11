// Anticlockwise

// #include<stdio.h>
// int main(){
//     int arr1[20];
//     int arr[20];
//     printf("Enter the number of element of an array  :");
//     int n,i,j;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter %d element of array :",(i+1));
//         scanf("%d",&arr[i]);
//     }
//     int k;
//     printf("Enter the value of k :");
//     scanf("%d",&k);
//     for(j=0;j<k;j++){
//         int temp =arr[0];
//         for(i=0;i<n;i++){
//            arr[i]=arr[i+1];
//         }
//         arr[n-1]=temp;
//     }
//     for(i=0;i<n;i++){
//         printf("%d",arr[i]);
//     } 
// }

// Clockwise

// #include<stdio.h>
// int main(){

//     int arr[]={1,2,3,4,5,6};
//     int i,j,k;
//     int n=6;

//     printf("Enter the value of k :");
//     scanf("%d",&k);

//     for(j=0;j<k;j++){
//         int temp = arr[n-1];
//         for(i=n-1;i>0;i--){
//             arr[i]=arr[i-1];
//         }
//         arr[0]=temp;
//     }

//     for(i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }
// }


#include<stdio.h>
int main(){
    printf("\n------------------------Age Prediction------------------------\n");
    int n;
    printf("Enter Your age : ");
    scanf("%d",&n);
    printf("YOUR AGE IS : %d",n);
    return 0;

}