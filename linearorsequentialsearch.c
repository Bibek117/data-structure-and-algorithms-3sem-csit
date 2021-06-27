//linear search or sequential search
#include<stdio.h>
int main(){
    int a[50],n,i,key,flag=0;
    printf("\nEnter the number of items : ");
    scanf("%d",&n);
    printf("\nEnter the array elements : ");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    printf("\nEnter the search key : ");
    scanf("%d",&key);
    printf("\nThe array is ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    for(i=0;i<n;i++){
        if(key==a[i]){
          flag=1;
            break;
        }
    }
    if(flag==1){
        printf("\nsearch successful and the key %d is present at location %d",key,(i+1));
    }else{
        printf("\nSearch fail");
    }
  return 0;
}