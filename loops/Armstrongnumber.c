#include<stdio.h>
int main(){
    int ld,sld,tld;
    int i = 1;
    while(i<=500){
        int j = i;
        ld = j%10;
        j = j/10;
        sld = j%10;
        j =j/10;
        tld = j%10;
        if(((ld*ld*ld) + (sld*sld*sld) + (tld*tld*tld)) == i) printf("%d ",i);
        i++;
    }
    return 0;
}