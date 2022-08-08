include<stdio.h>
 
int main() {
   int arr[5];
   int i;
   int sum = 0;
   int *ptr;
  
   printf("\nNhap 5 phan tu: \n");
  
   for (i = 0; i < 5; i++) {
       printf("Nhap a[%d] = ", i + 1);
       scanf("%d", *ptr[i]);
   }
   ptr = arr;
  
   
   for (i = 0; i < 5; i++) {
   	printf("\nHien thi 5 phan tu"")
      sum = sum + *ptr;
      ptr++;
   }
   return(0);
}
