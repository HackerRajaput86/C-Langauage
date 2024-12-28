
#include<stdio.h>
#include<unistd.h>

int main (){

    int size , element , pos , i ;
        // Input the size of Array
    printf("Enter the size of array :\n");
        scanf("%d",&size);

    int arr[size];
        // Input the element of Array
    printf("Enter the element of array :\n");
        for ( i = 0; i < size; i++)
        {
            scanf("%d",&arr[i]);
        }
         // This is original Array
    printf("Your  array is :\n");
        for ( i = 0; i < size; i++)
        {
            printf("%d\t",arr[i]);
        }
        // Enter the position 
        printf("\nEnter the position where you want to insert :\n");
        scanf("%d",&pos);
        // Check if position is Valid
        if(pos<1 || pos>size)
        {
            printf("Invalid position");
            return(1);
        }
        // input the element for insert
    printf("Enter the element you want to insert :\n");
        scanf("%d",&element);
    
   
    
    for ( i = size+1; i >=pos; i--)  
    {                                   
        arr[i]=arr[i-1];
    }
    arr[pos-1]=element;                 

    printf("The array has updated .....\n");
        sleep(2);
        
    printf("This is new, Array After Insertion: \n");
        for ( i = 0; i < size+1; i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\n");
        {
            printf("\nThank you!\n");
            printf("Your insertion is Successful");
        }
        
  return 0;
}
