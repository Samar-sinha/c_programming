#include<stdio.h>
// void tower(int n, char s, char h, char d){
//     if(n==0) return;
//     tower(n-1, s, d, h);
//     printf("%c -> %c\n",s,d);
//     tower(n-1, h, s, d);
//     return;
// }
void tower(int n, char from_rod, char aux_rod, char to_rod){
    if(n==0) return;
    tower(n-1, from_rod, to_rod, aux_rod);
    printf("%c -> %c\n",from_rod, to_rod);
    tower(n-1, aux_rod, from_rod, to_rod);
    return;
}
int main(){
    int n;
    printf("Enter the number of disks : ");
    scanf("%d",&n); 
    tower(n, 'A', 'B', 'C');
    return 0;
}