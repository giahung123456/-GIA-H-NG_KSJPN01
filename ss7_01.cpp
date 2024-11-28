#include<stdio.h>
  main(){
 
    int arr[] = {8,3,44,5,2,61,22};  

    int n = sizeof(arr) / sizeof(arr[0]); 

    
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    
    printf("Do dai cua mang la: %d\n", n);

 
}