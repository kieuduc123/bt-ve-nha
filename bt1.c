#include <stdio.h>
 
void swap(int a, int b){
    printf(" truoc khi goi ham hoan vi, a = %d, b = %d\n", a , b);
    int tmp = a;
    a = b;
    b = tmp;
  
}
int main(){
    int a=1 ,b=2 ;
    swap(a, b);
    printf(" sau khi goi ham hoan vi, a = %d, b = %d\n", a , b);
}
