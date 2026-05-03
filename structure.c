//write a programe to store name,roll_no,age of student in a structure and display it.
// #include<stdio.h>
// #include<string.h>
    // struct student{
    //     int roll_no;
    //     char name[50];
    //     int age;
    // };
    // int main(){
    //     struct student std;
    //     std.roll_no=5;
    //     std.age=19;
    //     strcpy(std.name,"amardip");
    //     printf("detail of the student;");
    //     printf("\n");
    //     printf("roll no=%d\n",std.roll_no);
    //     printf("naem=%s\n",std.name);
    //     printf("age=%d\n",std.age);
    // }
          //OR
//  #include<stdio.h>
// #include<string.h>
//     struct student{
//         int roll_no;
//         char name[50];
//         int age;
//     };
//     int main(){
//         struct student std={05,"amardip",19};
//         printf("detail of the student;");
//         printf("\n");
//         printf("roll no=%d\n",std.roll_no);
//         printf("name=%s\n",std.name);
//         printf("age=%d\n",std.age);
//     }
//write a programe to input roll_no,age and name to display them.
//  #include<stdio.h>
// #include<string.h>
//     struct student{
//         int roll_no;
//         char name[50];
//         int age;
//     };
//     int main(){
//         struct student std;
//         printf("enter roll no=");
//         scanf("%d",&std.roll_no);
//         printf("enter age=");
//         scanf("%d",&std.age);
//         printf("enter name=");
//         scanf("%s",&std.name);
//         printf("detail of the student;");
//         printf("\n");
//         printf("roll no=%d\n",std.roll_no);
//         printf("naem=%s\n",std.name);
//         printf("age=%d\n",std.age);
//     }
// write a programe to input of a employee.
//  #include<stdio.h>
// #include<string.h>
//     struct student{
//         long long int contact_number;
//         char name[29];
//         char position[20];
//          char gender[12];
//         int id_no;
//         int salary;
//         int age;
//     };
//     int main(){
//         struct student std;
//         printf("enter contact number=");
//         scanf("%lld",&std.contact_number);
//         printf("enter age=");
//         scanf("%d",&std.age);
//         printf("enter name=");
//         scanf("%s",&std.name);
//         printf("enter posotion=");
//         scanf("%s",&std.position);
//         printf("enter salary=");
//         scanf("%d",&std.salary);
//         printf("enter id number=");
//         scanf("%d",&std.id_no);
//         printf("detail of the student;");
//         printf("\n");
//         printf("contact number=%lld\n",std.contact_number);
//         printf("name=%s\n",std.name);
//         printf("age=%d\n",std.age);
//         printf("position=%s\n",std.position);
//         printf("gender=%s\n",std.gender);
//         printf("salary=%d\n",std.salary);
//         printf("id number=%d\n",std.id_no);
//     }
// // write a programe to store details of 3 students roll_no,name ,age and display them.
// #include<stdio.h>
// struct student{
//     int roll_no;
//     char name[20];
//     int age;
// };
// int main(){
//     struct student std[3];
//   printf("enter details of 3 studentd=\n");
//   for(int i=0;i<3;i++){
//     printf("enter roll number=");
//     scanf("%d",&std[i].roll_no);
//      printf("enter name=");
//     scanf("%s",&std[i].name);
//     printf("enter age =");
//     scanf("%d",&std[i].age);
//   }
//   printf("details of 3 studentes are=\n");
//   printf("roll number\t name\t age\t");
//   for(int i=0;i<3;i++){
//     printf("%d\t",std[i].roll_no);
//     printf("%s\t",std[i].name);
//     printf("%d\t",std[i].age);
//     printf("\n");
//   }  
// }
//write a programe to print the younger age.
//  #include<stdio.h>
// struct student{
//     int roll_no;
//     char name[20];
//     int age;
// };
// int main(){
//     struct student std[3];
//   printf("enter details of 3 studentd=\n");
//   for(int i=0;i<3;i++){
//     printf("enter age=");
//     scanf("%d",&std[i].age);
//   }
//   int young_age=std[0].age;
//   for(int i=0;i<3;i++){
//     if(young_age>std[i].age){
//         young_age=std[i].age;
//      printf("%d",young_age);   
//     }
//   }  
// }
//write a programe to take input of students details and print the details of younger students.
// #include<stdio.h>
// struct student{
//     int roll_no;
//     char name[20];
//     int age;
// };
// int main(){
//     int i;
//     struct student std[3];
//   printf("enter details of 3 studentd=\n");
//   for( i=0;i<3;i++){
//      printf("enter roll number=");
//     scanf("%d",&std[i].roll_no);
//      printf("enter name=");
//     fgets(std[i].name,sizeof(std[i].name),stdin);
//     printf("enter age =");
//     scanf("%d",&std[i].age);
//   }
//   int young_age=std[0].age;
//   for( i=0;i<3;i++){
//     if(young_age>std[i].age){
//         young_age=std[i].age;
//     }
// }
//      printf("yunger age=%d\n",young_age);
//      for(i=0;i<3;i++){
//      if(young_age==std[i].age){
//     printf("name=%s\n",std[i].name);
//     printf("roll number=%d\n",std[i].roll_no);}
//      }   
// }
// //write a programe to store details of n employes and dispaly details of highest paid salary. 
// #include<stdio.h>
// struct employes{
//     int salary;
//     char name[20];
//         char position[50];
//          char gender[50];
//         int age;
// };
// int main(){
//     struct employes std[5];   
// int i,n;
// printf("enter number number of employes=");
// scanf("%d",&n);
// for(i=0;i<n;i++){
// printf("enter the details of %d employees\n",i+1);
// printf("enter name,salary,position,age,gender=");
// scanf("%s%d%s%d%s",&std[i].name,&std[i].salary,&std[i].position,&std[i].age,&std[i].gender);
// }
// int highest_salary=std[0].salary;
// for(i=0;i<n;i++){
//     if(highest_salary<std[i].salary){
//         highest_salary=std[i].salary;
//     }
// }
// printf("higest salary=%d\n",highest_salary);
// for(i=0;i<n;i++){
//     if(highest_salary==std[i].salary){
//         printf("name=%s\n",std[i].name);
//         printf("position=%s\n",std[i].position);
//         printf("age=%d\n",std[i].age);
//         printf("gender=%s\n",std[i].gender);
//     }
// }
// }

//nested structure
// #include<stdio.h>
// struct student{
//     int roll_no;
//     char name[40];
//     struct bithdate{
//         int dd,mm,yy;
//     }dob;
// };
// // or
// // struct bithdate {
// //     int  dd,mm,yy;
// //         int dd,mm,yy;
// //     };
// // struct student{
// //     int roll_no;
// //     char name[40];
// //     struct bithdate dob;
// // } ;
// // } ;
// int main(){
//     struct student std;
//     printf("enter roll no,name & birth (bb-mm-yy)=");
//     scanf("%d",&std.roll_no);
//     scanf("%s",&std.name);
//    scanf("%d",&std.dob.dd);
//    scanf("%d",&std.dob.mm); 
//    scanf("%d",&std.dob.yy);
// printf("roll no=%d\n",std.roll_no);
// printf("name=%s\n",std.name);
// printf("birth date=%d-%d-%d",std.dob.dd,std.dob.mm,std.dob.yy);
// }

// #include<stdio.h>
// #include<stdlib.h>
// struct employes{
//     int salary;
//     char name[20];
//         char position[50];
//          char gender[50];
//         int age;
// };
// int main(){
// int i,n;
// printf("enter number number of employes=");
// scanf("%d",&n);
// struct employes *std;
// std=(struct employes*)malloc(n*sizeof(struct employes));
// for(i=0;i<n;i++){
// printf("enter the details of %d employees\n",i+1);
// printf("enter name,salary,position,age,gender=");
// scanf("%s%d%s%d%s",&std[i].name,&std[i].salary,&std[i].position,&std[i].age,&std[i].gender);
// }
// int highest_salary=std[0].salary;
// for(i=0;i<n;i++){
//     if(highest_salary<std[i].salary){
//         highest_salary=std[i].salary;
//     }
// }
// printf("higest salary=%d\n",highest_salary);
// for(i=0;i<n;i++){
//     if(highest_salary==std[i].salary){
//         printf("name=%s\n",std[i].name);
//         printf("position=%s\n",std[i].position);
//         printf("age=%d\n",std[i].age);
//         printf("gender=%s\n",std[i].gender);
//     }
// }
// }
//write a programe to store detail of student(roll_no,name,address(city ,zip card/pin code)).
// #include<stdio.h>
// struct student{
//     int roll_no;
//     char name[40];
//     struct address{
//         int pin;
//         char city_name[50];
//     }ad;
// } ;
// int main(){
//     struct student std;
//     printf("enter roll no,name & address(city,pin card)=");
//     scanf("%d",&std.roll_no);
//     scanf("%s",std.name);
//    scanf("%s",std.ad.city_name);
//    scanf("%d",&std.ad.pin); 
// printf("roll no=%d\n",std.roll_no);
// printf("name=%s\n",std.name);
// printf("details=%s-%d",std.ad.city_name,std.ad.pin);
// }

// stucture using a function.

//  #include<stdio.h>
// struct student{
//     int roll_no;
//     char name[40];
//     int age;
// } ;
// int dispaly( struct student std){
// printf("detail of the students=\n");
//     printf("roll no=%d\n",std.roll_no);
// printf("name=%s\n",std.name);
// printf("age=%d",std.age);
// }
// int main(){
//     struct student std;
//     printf("enter roll no,name & age=");
//     scanf("%d",&std.roll_no);
//     scanf("%s",std.name);
//     scanf("%d",&std.age);
//     dispaly(std);
// }
// ways to access number of a structure.
//  #include<stdio.h>
// struct student{
//     int roll_no;
//     char name[40];
//     int age;
// } ;
// int main(){
// struct student std;
//     struct student *p;
//     p=&std;
//     printf(" enter detail of the students:\n");
//     printf("enter roll no,name & age=");
//     scanf("%d",&std.roll_no);
//     scanf("%s",&std.name);
//     scanf("%d",&std.age);
//     printf("detail of the students=\n");
//     printf("roll no=%d\n",p->roll_no);
// printf("name=%s\n",p->name);
// printf("age=%d",p->age);
// }
                 //  UNION 
// #include<stdio.h>
//     union student{
//         int roll_no;
//         char name[50];
//         int age;
//     };
//     int main(){
//         union student std;
//         printf("size of union= %d",sizeof(std));
//     }
    
//   #include<stdio.h>
// union student{
//     int roll_no;
//     char name[40];
//     int age;
// } ;
// int main(){
// union student std;
//     printf(" enter detail of the students\n");
//     printf("enter roll no=");
//     scanf("%d",&std.roll_no);
//     printf("enter name=");
//     scanf("%s",&std.name);
//     printf("enter  age=");
//     scanf("%d",&std.age);
//     printf("detail of the students=\n");
//     printf("roll no=%d\n",std.roll_no);
// printf("name=%s\n",std.name);
// printf("age=%d",std.age);
// }
                 //TYPEDEF
// #include<stdio.h>
// int main(){
//     typedef int integer;
//     integer num1=2,num2=5;
//     printf("%d\n",num1);
//     printf("%d",num2);
// }
 