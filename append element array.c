#include<stdio.h>
int main(){
    int size;
    printf(" enter the size of the array ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf(" enter the array at position %d :",i);
        scanf("%d",&arr[i]);
    }
    int choice;
    printf(" enter 1 to insert a element in an array\n2 to print the array\n3 to exit :");
    scanf("%d",&choice);
    if(choice==1){
        int pos;
        printf(" enetr the position at which you want to insert data :");
        scanf("%d",&pos);
        // shift elements forward in array
        size++;
        for(int i=size-1;i>=pos;i--){
            arr[i]=arr[i-1];
            // insert new element 


        }
        int x;
        printf(" enter the new element :");
        scanf("%d",&x);
        arr[pos]=x;
        // print new array
        for(int i=0;i<size;i++)
        {
            printf("%d",arr[i]);
        }

    }
    else if(choice==2){
        for (int i=0;i<size;i++)
        {
            printf("%d",arr[i]);
        }
    }
    else{
        printf("thnx");
    }
    return 0;
}
