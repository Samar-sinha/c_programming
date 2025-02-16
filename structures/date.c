#include<stdio.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    } date;
    date a,b;

    a.day = 27;
    a.month = 07;
    a.year = 2005;

    b.day = 27;
    b.month = 07;
    b.year = 2005;
    
    bool flag = true;

    // if(a.day!=b.day) flag = false;
    // else if(a.month!=b.month) flag = false;
    // else if(a.year!=b.year) flag = false;

    // if(flag==true) printf("The dates are equal");
    // else printf("The dates are not equal");

    date c;
    
    c = a;

    if(a.day!=c.day) flag = false;
    else if(a.month!=c.month) flag = false;
    else if(a.year!=c.year) flag = false;

    if(flag==true) printf("The dates are equal");
    else printf("The dates are not equal");

    return 0;
}
