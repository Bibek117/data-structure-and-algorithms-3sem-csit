//Binary search

#include<stdio.h>
#include<conio.h>
int main(){
    //input
    int arr[50],low,high,mid,i,key,num,flag = 0;
    printf("\nEnter the number of elements : ");
    scanf("%d",&num);
    
    printf("\nEnter the array elements : \n");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("\nEnter the search key : ");
    scanf("%d",&key);

    printf("\nThe elements of array are : ");
    for(i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    //set
    low = 0;
    high = num-1;
   

   //main loop
    while(low<=high){ 
        mid = (low+high)/2;
            if(key==arr[mid]){
                flag =1;
                break;
            }else if(key<arr[mid]){
                high = mid - 1;
            }else{  //key>arr[mid]
                low = mid + 1;
            } 
    }
    //checking flag for possible result
    if(flag == 1){
        printf("\nSeach successful and the key %d is at location %d",key,mid+1);
    }else{
        printf("\nSearch failure");
    }

    return 0;
}