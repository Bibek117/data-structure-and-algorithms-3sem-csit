//program to find fibonnaci series upto nth term using recursion
#include <stdio.h>
/*int series(int n){
  if(n==1){
    return 0;
    }
if(n==2){
    return 1;
        }else{
        return (series(n-1)+series(n-2));
    }}*/
int series(int n){
if(n<=2){
    return 1;
        }else{
        return (series(n-1)+series(n-2));
    }}
int main(){
int num,i,a;
printf("Enter the nth term upto which you want to display  fibonacci series:\n");
scanf("%d",&num);
for(i=1;i<=num;i++){
a=series(i);
printf("%d\t",a);
}
return 0;
}
