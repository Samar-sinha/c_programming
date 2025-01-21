#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements : ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int i = 0;
    int j = n-1;
    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else break;
    }
    if(i>j) printf("It is a palindrome.");
    else printf("not palindrome.");
    return 0;
}