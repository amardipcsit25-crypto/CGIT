//write a programe to print Hellow world indide a print_hello function
// #include<stdio.h>
// int print_number(){
//     int i;
//     for(  i=1;i<=10;i++){
//     printf("%d ",i);
// }
// }
// int main(){
//     print_number();
//     return 0;
// }
//write a programe to add two number inside a function add num.
// #include<stdio.h>
// void add_num(){
//     int a=5,b=4;
//     printf("sum=%d",a+b);
// }
// int main(){
//     add_num();
//     return 0;

// }
// OR
// #include<stdio.h>
// void add_num(int a,int b){ //parameters
//     //int a=5,b=4;
//     printf("sum=%d\n",a+b);
// }
// int main(){
//     add_num(5,4);//arguments
//     add_num(3,6);
//     return 0;
// }

//write a programe to add,subtract, multiply,division of 2 numbers.
// #include<stdio.h>
//     void add_num(int num1,int num2){
//         printf("%d\n",num1+num2);
//     }
//     void subtract_num(int num1,int num2){
//     printf("%d\n",num1-num2);}
//     void multiply_num(int num1,int num2){
//     printf("%d\n",num1*num2);}
//     void division_num(int num1,int num2){
//     printf("%d\n",num1/num2);}

// int main(){
//     add_num(4,5);
//     subtract_num(4,5);
//     multiply_num(4,5);
//     division_num(4,5);

// }
//without argument and with return type.
// #include<stdio.h>
// int num_hellow(){
//     printf("hellow world");
//     return 1;
// }
// int main(){   // in turbo c void main()
//     int num=hellow();
//     printf("returned valure=%d",num);
// }


// #include<stdio.h>
// #include<time.h>
// int main(){
//     printf("time in milisecond=%d",time(0));
// }
//WRITE A PRAGRAME TO SUGGESTED PIN OR  PASSWORD.
// #include<stdio.h>
// #include<stdlib.h>
//  #include<time.h>
//  int generate_pin(){
//     int pin;
//     srand(time(0));
//       pin= rand()%7; //or passwoerd  =rand()%7;
//     return pin;
//  }
//  int main(){
//     int pass=generate_pin();
//     printf("suggested pin=%d",pass);
//  }
//WITH ARGUMENT AND WITH RETURN TYPE.
// #include<stdio.h>
// int add_num(int num1, int num2){
//     int sum=num1+num2;
//     return sum;
// }
// int main(){
//     int total =add_num(2,4);
//     printf("sum=%d\n",total);
//     int new_value=total*2;
//     printf("after multiply=%d",new_value);

//}
// #include<stdio.h>
// int calculate_salary(int days){
//     int salary=1000*days;
//     return salary;
// }
// int main(){
//     int gross_salary =calculate_salary(30);
//     printf("grossv salary=%d\n",gross_salary);
//     int tax=gross_salary*0.1;
//     printf("tax amount=%d\n",tax);
//     printf("\n");
//     int net_salary=gross_salary-tax;
//     printf("net salary=%d\n",net_salary);
// }
//write a prgrame to input a number and print that nnumber einside a function
// #include<stdio.h>
// void  print_num(int num){
//     printf("%d",num);
// }
// int main()
// {
//     printf("ENTER A number");
//     int num;
//     scanf("%d",&num);
//     print_num(num);
// }
//write a programe to input a number and find its  square and cube value insude two different function.
// #include<stdio.h>
// #include<math.h>
// int find_cube(int num){
//     int c=pow(num,3);
//   return c;
// }  
// int find_square(int num){
//   int square;
//     square=pow(num,2);
//   return square;
// }  
// int main(){
//     int num;
//     printf("emter a number=");
//     scanf("%d",&num);
//     int m=find_square(num);
//     int n=find_cube(num);
//     printf("squre of number %d\n",m);
//     printf(" cube of number %d",n);
//   }
// // //geekshies
//write a programe to input a number and check if it palindrome or not inside  function.
// #include<stdio.h>
// int palindrome(int num){
//   int rev=0,rer=0;
//   while(num>0){
//     rer=num%10;
//     rev=rev*10+rer;
//     num=num/10;}
//   return rev;
// }
// int main(){
//   int num,a;
//   printf("enter number=");
//   scanf("%d",&num);
//   a=palindrome(num);
//   printf("%d\n",a);
//   if (num==a){
//     printf("palindrome");
//   }
//   else{
//     printf("not palindrome");
//   }
// }
//write a programe to create an array of size 5 and find their whole sum inside function.
// #include<stdio.h>
// int sum( int arr[5]){
//   int i,sum=0;
//   for(i=0;i<5;i++){
//     sum=sum+arr[i];
//   }
//   return sum;
// }
// int main(){
//   int a;
//   int arr[5]={1,3,4,5,6};
//   a=sum(arr);
// printf("%d",a);
// }
//write a programe to input two number and a charater then perform add,sub,multi,div making all functions and perform calculartions inside a function.
// #include<stdio.h>
// int add(int num1, int num2){
//   int add=num1+num2;
//   printf("add %d",add);
// }
// int sub(int num1, int num2){
//   int sub=num1-num2;
//   printf("sub %d",sub);
// }
// int mul(int num1, int num2){
//   int mul=num1*num2;
//  printf("mul %d",mul);
// }
// int div(int num1, int num2){
//     int div= num1/num2;
//   printf("div %d",div);
// }
// int calculation( char ch,int num1, int num2){
//     if(ch=='+'){
//         add(num1,num2);
//     }
//     else if(ch=='-'){
//        sub(num1,num2);
//     }
//     else if(ch=='*'){
//         mul(num1,num2);
//     }
//     else if(ch=='/'){
//         div(num1,num2);
//     }
//     else{
//         printf("invalid");
//     }
// }
// int main(){
// char ch;
//  int num1,num2;
// printf("enter number");
// scanf("%d%d",&num1,&num2);
// printf("+,-,*,/=");
// scanf(" %c",&ch);
// calculation(ch,num1,num2);
// return 0;
//  }
  
//a programe to demostrate local and global varibles.
// #include<stdio.h>
// int b=10;//global variables
// void display(){
//     int a=5;//local variables
//     printf("a=%d",b);
// }
// int main(){
//     display();
//     printf("b=%d",b);
// }
 
// #include<stdio.h>
// int dispaly(){
//    register int count=0;//auto int count=0;//static int count=0;
//     //count++;
//     printf("count =%d\n",count);
// }void main(){
//     dispaly();
//     dispaly();
//     dispaly();
// }
// #include<stdio.h>
// int readdata(int a, int b){
// printf("enter number=");
// scanf("%d%d",&a,&b);
// }
// int processdata(int a,int b){
//   int sum=a+b;
//   return sum;
// }
// int display(int sum){
// printf("%d",sum);
// }
// int main(){
//   int s;
// int a,b;
//   readdata(a,b);
//   s=processdata(a,b);
//   display(s);
//   return 0;
// }
//write a programe to check wherther a number  is even or odd using a function.
// #include<stdio.h>
// int even_odd(int num){
//   int even;
//   if (num%2==0)
// {
//   return even;
// } 
// }
// int main(){
//   int num;
//   printf("enter a number=");
//   scanf("%d",&num);
//   int e=even_odd(num);
//   //printf("%d",e);
//   if(e==0){
//     printf(" %d is even number",num);
//   }
// else{
//   printf(" %d is odd number",num);
// }
//   return 0;
// }

//write a program to input a number and find the factorial of its using a function.
// #include<stdio.h>
// int factorial(int num){
//   int i,f=1;
//   for(i=num;i>=1;i--){
//     f=f*i;
// }
// return f;
// } 
// int main(){
//   int num;
//   printf("enter a number=");
//   scanf("%d",&num);
//   int f=factorial(num);
//   printf("factorial of given number=%d",f);
//   return 0;
// }
//write a progrme to check whether a number is prime or not using a function.
// #include<stdio.h>
// int prime(int num){
//   int i=1,prime=0;
//   for(i=2;i<num;i++){
//     if(num%i==0){
//       prime=1;
//       break;
//     }
//   }
//   return prime;
// }
// int main(){
//   int num;
//   printf("enter number=");
//   scanf("%d",&num);
//   int p=prime(num);
//   if (p==0){
//     printf("%d is prime number",num);
//   }
//   else{
//     printf("%d is not prime  number ",num);
//   }
//   return 0;
// }
//write a programe to find the maximum of three numbers using a function.
// #include<stdio.h>
// int maximum(int num1,int num2,int num3){
//     if(num1>num2&&num1>num3){
//     return num1;
//   }
//   else if(num2>num1&&num2>num3){
//     return num2;
// }
// else if(num3>num1 && num3>num2){
//     return num3;
// }
// else {
//   return 0;
// }
// }
// int main(){
//   int num1,num2,num3;
//   printf("enter three numbers=");
//   scanf("%d%d%d",&num1,&num2,&num3);
//   int max=maximum(num1,num2,num3);
//   if(max!=num1 && max!=num2 && max!=num3){
//     printf("No one no. is the greatest");
//   }
//   else{
//   printf(" maximun number=%d",max);
//   }
//   return 0;
// }
//write a program to generate a random 4 digit password using a function.
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int password(){
//   int pass;
//   srand(time(0));
//   pass=rand()%9999+1000;
//   return pass;
// }
// int main(){
//   int p;
//   p=password();
//   printf(" 4 digit password is %d",p);
//   return 0;
// }


//    RECURSIVE FUNCTION



//Write a program to print numbers from 1 to5 using recursive functio.
// #include<stdio.h>
// int printnum(int n){ // if void 
//   if(n>5){
//     return 0 ; // then return ;
//   }
//   else{
//     printf("%d",n);
//     printnum(n+1);
//   }
// }
// int main(){
//   printnum(1);
// }
//Write a program to print numbers from 5 to 1 using recursive function.
// #include<stdio.h>
// int printnum(int n){ // if void 
//   if(n<1){
//     return 0; // then return ;
//   }
//   else{
//     // printnum(n-1);
//     printf("%d",n);
//      printnum(n-1);
//   }
// }
// int main(){
//   printnum(5);
//   return 0;
// }

//Write a program to print numbers from n to 1 using recursive function.
// #include<stdio.h>
// int printnum(int num){ // if void 
//   if(num<1){
//     return 0; // then return ;
//   }
//   else{
//     printf("%d",num);
//     printnum(num-1);
//   }
// }
// int main(){
//   int num;
//   printf("enter  number from where to  start=");
//   scanf("%d",&num);
//   printnum(num);
//   return 0;
// }
//Write a programe to print numbers from 1 to n using recusive functio.
// #include<stdio.h>
// int printnum(int num){ // if void 
//   if(num<1){
//     return 0; // then return ;
//   }
//   else{
//     printnum(num-1);
//     printf("%d",num);
//   }
// }
// int main(){
//   int num;
//   printf("enter  number  to  end=");
//   scanf("%d",&num);
//   printnum(num);
//   return 0;
// }
//write a program to input and find factorial of the number using recursion function.
// #include<stdio.h>
// int  factorial(int num){
//   int f=1;
//   if(num<1){
//     return 1;
//   }
//   else{
//     //factorial(num-1);
//     f=f*num*factorial(num-1);    
// }
// return f;
// }
// int main(){
//   int num;
//   printf("enter a number=");
//   scanf("%d",&num);
//   factorial(num);
//   int a=factorial(num);
//   printf("%d",a);
//   return 0;
// }

//      FIBONANIC SERIES
//WRITE A pragrame to find 2nd index valve of fibonacci series using recursive function.
// #include<stdio.h>
// int  fibonacci(int num){
//   int f;
//   if(num==0){
//     return 0;
//   }
//   else if(num==1){
//   return 1;
//   }
//   else{
//     int f= fibonacci(num-1)+fibonacci(num-2); 
//     return f;  
//   }
// }
// int main(){
//   int num=2;
//   // printf("enter a number=");
//   // scanf("%d",&num);
//   // fibonacci(num);
//   int a=fibonacci(num);
//   printf("%d",a);
//   return 0;
//}
//WRITE A pragrame to find n print its fibonacci series using recursive function.
// #include<stdio.h>
// int  fibonacci(int num){
//   int f;
//   if(num==0){
//     return 0;
//   }
//   else if(num==1){
//   return 1;
//   }
//   else{
//     int f= fibonacci(num-1)+fibonacci(num-2); 
//     return f;
//   }
// }
// int main(){
//   int num;
//   printf("enter a number=");
//   scanf("%d",&num);
//   fibonacci(num);
//   for(int i=0;i<=num;i++){
//   int a=fibonacci(i);
//   printf("%d ",a);}
//   return 0;
// }
//write a program to input a number and display its reverse value using recursion function,
// #include<stdio.h>
// int reverse(int num){
//   int rev=0,s;
//   if(num==0){
//     return 0;
//   }
//   else{
//     do{
//       s=num%10;
//       rev=rev*10+s;
//       num=num/10;
//     }
//     while(num>0);
//   return rev;
//   }
// }
// int main(){
//   int num;
//   printf("enter  number=");
//   scanf("%d",&num);   
//   int a=reverse(num);
//   printf("reverse number=%d",a);
//   return 0;
// }
//write a program  to multiply two numbers using recursive function. 
// #include<stdio.h>
// int multiply(int num1, int num2)
// {
//   if(num1==0||num2==0){
//    return 0;
//   }
//   else{
//      int a=num1+multiply(num1,num2-1);
//     return a;
//   }
// }
// int main(){
//   int num1,num2;
//   printf("enter two numbers=");
//   scanf("%d%d",&num1,&num2);
//   int b=multiply(num1,num2);
//   printf(" multiply of two numbers=%d",b);
//   return 0;
// }
 //write a program  to display the  first 10 numbers of fibonacci series using recursive function.
//   #include<stdio.h>
//   int  fibonacci(int num){
//     int f;
//     if(num==0){
//       return 0;
//     }
//     else if(num==1){
//     return 1;
//     }
//     else{
//       int f= fibonacci(num-1)+fibonacci(num-2); 
//       return f;
//     } 
//   }
//   int main(){
//     int n=10;
//     for(int i=0;i<n;i++){
//     //fibonacci(i);
//     int a=fibonacci(i);
//     printf("%d ",a);}
//     return 0;
//   }
  