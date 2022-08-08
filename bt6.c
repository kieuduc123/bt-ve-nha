#include <stdio.h>
#include<malloc.h>
int main(){
  int i, n;
  
  int *ptr;
  printf("\nNhap so sv : ");
  scanf("%d",&n);
  //cap phap bo nho dong nhu cau su dung
  //ptr= (int*)malloc(n*sizeof(int));
  ptr = (int*)calloc(n,sizeof(int));
  
  
  if(ptr==NULL){
    printf("\nKhong du bo nho cho ban!!!");
    exit(0);
  }
  printf("\nNhap vao %d sv : ",n);
  for(i = 0; i < n; i++){
    scanf("%d ",(ptr+i));
    //scanf("%d",&ptr[i]);
  }
  printf("\nThong tin : ");
  for(i = 0; i < n; i++){
    printf("%d ",*(ptr+i));
    //printf("%d",ptr[i]);
  }
  //free(ptr);
  ptr=(int*)realloc(ptr,(newSize * sizeof(int)));
  for(i=n ; i< newSize; i++){
    scanf("%d",(ptr+i)),
  }
  return 0;
}

