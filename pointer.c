// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter number=");
//     scanf("%d",&a);
//     printf("value=%d",a);
//     printf("address=%d",&a);
// }

// #include<stdio.h>
// int main(){
//     int a=10;
//     printf("value=%d",a);
//     printf("address=%d",&a);
// }

// #include<stdio.h>
// int main(){
//     int a=10;
//  int  *p;
//     p=&a;
//     printf("value=%d",*p);
//     return 0;
// }
//write a  program to input two  numbers and perform addition using pointer.
// #include<stdio.h>
// int main(){
//     int a,b,sum;
//  int *p_a,*p_b,*p_sum;
// p_a=&a;
// p_b=&b;
// p_sum=&sum;
// printf("enter two number=");
// scanf("%d%d",p_a,p_b);
// *p_sum=*p_a+*p_b;
// printf("sum=%d",*p_sum);
// }
//write a program to input two number and find the smallest and greater one using pointer.
// #include<stdio.h>
//     int main (){
//         int num1,num2;
//         int *p_num1,*p_num2;
//       p_num1=&num1;
//       p_num2=&num2;
//       printf("enter two number=");
//       scanf("%d%d",p_num1,p_num2);
//       if (*p_num1<*p_num2){
//        printf("%d is smaller",*p_num1);
//       } 
//       else {
//        printf("%d is smaller",*p_num2);
//       }
//     }
// #include<stdio.h>
// int main(){
//     int *p;
//     int a;
//     p=&a;
//     printf("enter a number=");
//     scanf("%d",p);
//     printf("value of a=%d",a);
//     printf("value of *p=%d",*p);
// }

// #include<stdio.h>
// int main(){
//     int a=5;
//     int b=2;
//     int div_value=a/b;
    
//     printf("value of *p=%d",div_value);
// }

//TYPE CASTING IMPLICIT
//  #include<stdio.h>
// int main(){
//     int a=5;
//     int b=2;
//     float div_value=a/b;
//     printf("value of *p=%.2f",div_value);
//  }

// EXPLICIT 
//  #include<stdio.h>
// int main(){
//     int a=5;
//     int b=2;
//     float div_value=(float)a/b;
//     printf("value of *p=%.2f",div_value);
//  }

// #include<stdio.h>
// int main(){
//     int a=65;
//     char ch;
//     ch=(char)a;
//     printf("value of *p=%c",ch);
//  }

//POINTER TO POINTER VARIABLES.
// #include<stdio.h>
// int main(){
//     int a;
//     int *p;
//     int **q;
//     p=&a;
//     q=&p;
//     printf("enter a number=");
//     scanf("%d",p);
//     printf("value of a=%d",a);
//     printf("value of *p=%d",*p);
//     printf("value of **q=%d",**q);
//     printf("address of a=%d",&a);
//      printf("address of *p=%d",&p);
//       printf("address of **q=%d",&q);
// }
//write a program find sum of an array elements using pointer using while loop
// #include<stdio.h>
// int main(){
//     int arr[5]={ 1,2,3,4,5};
//     int *p;
//     int sum=0;
//     int *q;
//     p=&arr[0];
//     q=&arr[4];
//     while(p<=q){
//          sum=sum+*p;
//         p++;
//     }
//     printf("sum=%d",sum);
// }
//write a program to reverse  the array using the pointer.
// #include<stdio.h>
// int main(){
//     int arr[5]={ 1,2,3,4,5};
//     int *p;
//     int *q;
//     p=&arr[0];
//     q=&arr[4];
//     //for (int i=4;i>=0;i--){
//     while(q>=p){
//          printf("%d ",*q);
//          q--;
//     }
//    // }
// }
// write a program to return status; logic successful.
// #include<stdio.h>
// char *login(int password,long long number){
//     if(password==111 && number==9829741318){
//         return "status:loginsucessful";
//     }
//     else{
//         return " status:unloginsucessful ";
//     }
// }
// int main(){
//     int password;
//     long long number;
//      long long *q;
//     int *p;
//     p=&password;
//     q=&number;
//     printf("enter the password and number=");
//     scanf("%d%lld",p,q);
//     char *a=login(*p,*q);
//     printf("%s",a);
//     return 0;
// }

//DYANAMIC MEMORY ALLOCATION.

// //wap to input n numbers and display them using malloc.
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *arr,i,n;
//     int sum=0;
//     printf("enter range of number=");
//     scanf("%d",&n);
//     arr=(int*)malloc(n*sizeof(int));
//    printf("enter any %d number;",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("your numberare;");
//     for(i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     printf("%d",sum);
//     free(arr);
//     return 0;
// }
//wap to input n numbers and display them using calloc.
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *arr,i,n;
//     int sum=0;
//     printf("enter range of number=");
// scanf("%d",&n);
// arr=(int*)calloc(n,sizeof(int));
//     printf("enter any %d number;",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     printf("sum=%d",sum);
//     free(arr);
//     return 0;
// }
//wap to input 2 numbers and display them using recalloc.
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *arr,i,n;
//     int sum=0;
//     printf("enter range of number=");
//     scanf("%d",&n);
//     arr=(int*)calloc(n,sizeof(int));
//    printf("enter any %d number;",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     printf("sum=%d/n",sum);
//     int new_size=2;
//     arr=realloc(arr,new_size*sizeof(int));
//     printf("enter 2 number=");
//     for(i=n;i<n+new_size;i++){
//         scanf("%d",&arr[i]);
//     sum=sum+arr[i];}
//      printf("sum=%d",sum);
//     free(arr);
//     return 0;
// }
//wap to input n numbers and display them using recalloc.
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *arr,i,n;
//     int sum=0;
//     printf("enter range of number=");
//     scanf("%d",&n);
//     arr=(int*)calloc(n,sizeof(int));
//    printf("enter any %d number;",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     printf("sum=%d/n",sum);
//     int new_size;
//     printf("enter range of new size=");
//     scanf("%d",&new_size);
//     arr=realloc(arr,new_size*sizeof(int));
//     printf("enter %d new number =",new_size);
//     for(i=n;i<n+new_size;i++){
//         scanf("%d",&arr[i]);
//     sum=sum+arr[i];}
//      printf("sum=%d",sum);
//     free(arr);
//     return 0;
// }
