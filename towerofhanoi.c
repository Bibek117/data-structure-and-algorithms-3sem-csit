// tower of hanoi (TOH) problem in recursion

#include<stdio.h>
void tower(int n,char source,char target,char aux)
{
    if(n==1){
        printf("\nMove disk %d from peg %c to peg %c",n,source,target);
        return;
    }else{
        tower(n-1,source,aux,target);
        printf("\nMove disk %d from peg %c to peg %c",n,source,aux);
        tower(n-1,aux,target,source);
    }
}
int main(){
    int num;
    printf("\nEnter the number of disk  : ");
    scanf("%d",&num);
    tower(num,'s','t','a');
    return 0;
}