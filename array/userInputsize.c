#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
    printf("\nEnter element %d : ",i+1);
    scanf("%d",&arr[i]); 
    }
    for(int i=0; i<n; i++){
    printf("\nelement %d is : %d",i+1,arr[i]); 
    }
    return 0;
}