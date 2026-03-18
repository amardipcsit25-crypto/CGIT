//write a program to print a your name and count.
// #include<stdio.h>
// int main(){
//     int i,count=0;
//     char name[20];
//    printf("enter your name=");
//     scanf("%s",&name);
//     for (i=0;i<10;i++){
//         printf("%c",name[i]);
//         count++;
//     }
//     printf("\n");
//     printf("number of digiti is %d",count);
// }
// //write a programe to print your name and count how many digits a name have.
// #include<stdio.h>
// int main(){
//     int i,count=0;
//     char name[20];
//    printf("enter your name=");
//     scanf("%s",&name);
//     for (i=0;name[i]!='\0';i++){
//         printf("%c",name[i]);
//         count++;
//     }
//     printf("\n");
//     printf("number of digiti is %d",count);
// }
//write a programe to print your full name using fgets .
// #include<stdio.h>
// int main(){
//     int i;
//     char name[200];
//    printf("enter your name=");
//     fgets(name,20,stdin);
//     printf("welcome=");
//     for (i=0;name[i]!='\0';i++){
//         printf("%c",name[i]);
  
//     }

//     #include<stdio.h>
// int main(){
    
//     char name[200];
//    printf("enter your name=");
//     fgets(name,sizeof(name),stdin);
//     fputs(name,stdout);
// }


//           OR using gets.
// #include<stdio.h>
// int main(){
//     int i;
//     char name[20];
//    printf("enter your name=");
//     gets(name);
//     printf("welcome");
//     for (i=0;name[i]!='\0';i++){
//         printf("%c",name[i]);
//     }
   
// }
// #include<stdio.h>
// int main(){
//     char name[2];
//    printf("enter your name=");
//     gets(name);
//     printf("welcome=");
 //     puts(name);
//     }

//write a programe to reverse to string.
// #include<stdio.h>
// int main(){
//     int i,count=0;
//     char name[20];
//    printf("enter your name=");
//     fgets(name,sizeof(name),stdin);
//     for(i=0;name[i]!=0;i++){
//      count++;}
//      for(i=count;i>=0;i--){
//         printf("%c",name[i]);
//      }
//     }


//write a program to check if two strings are same or not.
// #include<stdio.h>
// int main(){
//     int i,j;
//     char name[50]="ram";
//     char name2[50]="ram";
//      for( i=0;name[i]!=0;i++){
//         for( j=0;name2[j]!=0;j++){
//         }
//     }  
//     if (name[i]==name2[j]){
//         printf("same");
//     }
//     else{
//         printf("not same");
//     }
//     printf("memory address=%d",name);
//      printf("memory address=%d",name2);

// }
//write a programe to convert a string to  oppercase and lowercase.
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name[50]="ram";
//     strupr(name);
//     printf("uppercase=%s",name);
    
// } 
//    OR LOWERCASE OF STRING.
// #include<stdio.h>
// #include<string.h>
// int main(){
//        char name[20]="AMARDIP SINGH";
//        strlwr(name);
//        printf("lowercase=%s",name);
//        }

// or
// #include<stdio.h>
// int main(){
//     int i;
//     char name[50]='ram';
//     //printf("enter a name=");
//     //fgets(name,sizeof(name),stdin);
//      for(i=0;name[i]!='\0';i++){
//         if(name[i]>='a'&&name[i]<='z'){
//         name[i]=name[i]-32;
//         }
//         else{
//             name[i]=name[i];
//         }
        
//     }
//     printf("%s",name);
// }
//  OR PRE BUILT FUNCTION
       //Strlen()
//  #include<stdio.h>
// #include<string.h>
// int main(){
//     char name[50]="ram";
//    int lengh= strlen(name);
//     printf("lengh=%d",lengh);
    
// } 
//write a programe to copy a string into another.
// #include<stdio.h>
// #include<string.h>
// int main(){
//        char copy[20];
//        char name[20]="Amardip Singh";
//        strcpy(copy,name);
//        printf("copy string=%s",copy);
// }
//write a pragrame to compare between  two wherther they are same or not.
// #include<stdio.h>
// #include<string.h>
// int main(){
//        char name1[20],name2[20],a;
//        printf("enter first name=");
//        fgets(name1,10,stdin);
//        printf("enter another name=");
//        fgets(name2,10,stdin);
//       a= strcmp(name1,name2);
//       if(a==0){
//        printf("same");}
//        else{
//               printf("not same");
//        }
      // } 
      //OR NOT USING PRE DEFINED FUNCTION STRCMP.
//     #include<stdio.h>
// int main(){
//        int i,j,flag=0;
//        char name1[20],name2[20];
//        printf("enter first name=");
//        gets(name1);
//        printf("enter another name=");
//        gets(name2);
//       for(i=1;name1[i]!='\0';i++){
//             for(j=1;name2[j]!='\0';j++){
//          if (name1[i]!=name2[j]){
//             flag=1;
//             break;
//         }
//             }
//       }
//       if (flag==0){
//       printf("same");}
//       else {
//             printf("not same");
//       }
// }

 
// write a programe to combine two string into one.
// #include<stdio.h>
// #include<string.h>
// int main(){
//        char name1[20],name2[20],a;
//        printf("enter first name=");
//        fgets(name1,10,stdin);
//         printf("enter another name=");
//       fgets(name2,10,stdin);
//        strcat(name1,name2);
//       printf("combine name=%s",name1);
// }
//write a prograne to check the greater string among three strings. 
// #include<stdio.h>
// #include<string.h>
// int main(){
//        char name1[20],name2[20],name3[20];
//        printf("enter first name=");
//        fgets(name1,10,stdin);
//         printf("enter another name=");
//       fgets(name2,10,stdin);
//       printf("enter third name=");
//       fgets(name3,10,stdin);
//       int  length1=strlen(name1);
//       int length2=strlen(name2);
//       int length3=strlen(name3);
//       if(length1!=length2&&length1!=length3&&length2!=length3){
            
//       if(length1>length2&&length1>length3){
//             printf("string 1 is greater");}
//             else if(length2>length1&&length2>length3){
//             printf("string 2 is greater");}
//             else{
//                  printf("string 3 is greater"); 
//             }
//       }
//       else{
//             printf("two number or equal,cannot find greater ");
//       }  
// }
// write a pragrame to count no.of vowel in a given string.
// #include<stdio.h>
// #include<string.h>
// int main(){
//        char name[20],count=0,i;
//        printf("enter first name=");
//        fgets(name,10,stdin);
//    strlwr(name);
//   for(i=0;name[i]!='\0';i++){
//       if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u|'){
//             count++;
//       }
//   }
//   printf("number of vowel chracter=%d",count);
// }
//write a programe to input a string and count the no. of space in it.
// #include<stdio.h>
// #include<string.h>
// int main(){
//        char sentance[20],space=0,i;
//        printf("enter sentance=");
//        fgets(sentance,15,stdin);
//    strlwr(sentance);
//   for(i=0;sentance[i]!='\0';i++){
//       if(sentance[i]==' '){
//            space++;
//       }
      
//   }
//   printf("number of  word=%d",space+1);
// }
//write a progrome to check  if a given string is palindorme or not
// #include<stdio.h>
// #include<string.h>
// int main(){
//       char name[50],copy[20],a;
//       printf("enter name=");
//       gets(name);
//       strlwr(name);
//     strcpy(copy,name);
//    a= strcmp(copy,strrev(name));
//     //printf("copy=%s",copy);
//     //printf("reverse=%s",name);
//     ///printf("\n");
//       if(a==0){
//             printf("palindrome");
//       }
//       else{
//             printf("not palindrome");
//       }

//  } 
//write a programe to input name of 5 cities and display them.
// #include<stdio.h>
// #include<string.h>
// int main(){
// char cities[5][50];
//      int i;
//       printf("enter the name of 5 cities=");
//       printf("\n");
//       for(i=1;i<=5;i++){
//             printf("name of citiesis%d=",i);
//       gets(cities[i]);
//        }
//        for(i=1;i<=5;i++){
//             printf("name of citiessis %s=",cities[i]);
     
//       }
// }