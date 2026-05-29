//write a program to write "ram" to a  file name.text.
// #include<stdio.h>
// int main(){
// int i;
// char name[50]="ram";
// FILE *fp;
// fp=fopen("name.txt","w");
// for(i=0;name[i]!='\0';i++){
//     fputc(name[i],fp);
// }
// printf("file created successfully");
// fclose(fp);
// }
  
// #include<stdio.h>
// int main(){
// char  ch;
// FILE *fp;
// fp=fopen("name.txt","r");
// while(!feof(fp)){
//     ch=fgetc(fp);
//     printf("%c",ch);
// }
// printf("file created successfully");
// fclose(fp);
// }
//write a program to input your name and write it to a file name.text.
// #include<stdio.h>
// int main(){
// int i;
// char name[50];
// printf("enter your name=");
// scanf("%s",name);
// FILE *fp;
// fp=fopen("yourname.txt","w");
// for(i=0;name[i]!='\0';i++){
//     fputc(name[i],fp);
// }
// printf("file created successfully");
// fclose(fp);
// }
//   TO READ A FILE AND DISPLAY THE CONTENTS OF THE FILE.
// #include<stdio.h>
// int main(){
// char  ch;
// FILE *fp;
// fp=fopen("yourname.txt","r");
// while(!feof(fp)){
//     ch=fgetc(fp);
//     printf("%c",ch);
// }
// printf("file created successfully");
// fclose(fp);
// }
// //write a program to print Tribhuban University in tu.file name.
// #include<stdio.h>
// int main(){
//     char name[20];
//     printf("enter the input:");
//     gets(name);
//     FILE *TU;
//     TU=fopen("tu.file","a");
//     for(int i=0;name[i]!='\0';i++){
//         fputc(name[i],TU);
//     }
//     fclose(TU);
// }
//     TO DISPLAY IT IN .
// #include<stdio.h>
// int main(){
//     char ch;
//     FILE *TU;
//     TU=fopen("t.file","r");
//     if(TU==NULL){
//         printf("file not found");
//     } 
//     else{  
//   while(!feof(TU)){
//    ch=getc(TU);
//    printf("%c",ch);
//   }
//  fclose(TU);
// }
// }
// //   USING AN APPEND IN FILE HANDILING.
// #include<stdio.h>
// int main(){
//     FILE *TU;
//     TU=fopen("tu.file","a");
//     if(TU==NULL){
//         printf("file not found");
//     }
//     else{
//         fprintf(TU," \n");
//     fprintf(TU,"i am from nepal");
//     fclose(TU);
//     }
// }
//write a program to count the number of words and vowels in a file name.txt or any other file.
// #include<stdio.h>
// int main(){
//     int count=0,count1=0;
//     FILE *fp;
//     fp=fopen("yourname.txt","r");
//     if(fp==NULL){
//         printf("file not found");
//     }
//     else{
//     while(!feof(fp)){
//         char ch=getc(fp);
//         count++;
//         printf("%c",ch);
//         if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
//             count1++;
//         }   
//     }
//     printf(" number of word=%d\n",count-1);
//     printf(" number of vowels=%d",count1);
//     fclose(fp);
// }
// }
//write a program to input your current address and store it in address.txt file and then append your permanent address to the file and check the no.of vowels and constants the file has .
// #include<stdio.h>
// #include<string.h>
// int main(){
//     int i,num;
//     int count=0,count1=0;
//     char address[20];
//     FILE *ad;
//     printf("enter 1 for enter c address,2 read 3 for entering permanent adderess,4 for even and odd=");
//     scanf("%d",&num);
//   switch(num){
//     case 1: 
//     printf("enter your current address:");
//     scanf("%s",&address);
//     strlwr(address);
//     ad=fopen("address.txt","w");
//     for(i=0;address[i]!='\0';i++){
//         putc(address[i],ad);
//     }
//     break;
//     case 2:
//     ad=fopen("address.txt","r");
//     while(!feof(ad)){
//         char ch=getc(ad);
//         printf("%c",ch);
//     }
//     break;
//     case 3:
//     ad=fopen("address.txt","a");
//     fprintf(ad,"\n");
//     fprintf(ad,"permanent address is Siraha");
//     break;
//     case 4:
//    ad=fopen("address.txt","r");
//     while(!feof(ad)){
//         char ch=getc(ad);
//         printf("%c",ch);
//         if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
//             count++;
//         }
//         else{
//             count1++;
//         }
//     }
//     printf("vowel letter=%d\n",count);
//     printf("constant letter=%d",count1-1);
//   }
//     fclose(ad);
// }
//wap to input sentence and store it in sentence.txt.Then copy all vowels from the sentence.txt to vowel.txt and constant ton constant.txt.
// #include<stdio.h>
// #include<string.h>
// int main(){
//     int i;
//     char sentence[100];
//     FILE *s,*v,*c;
//     printf("enter a sentence:");
//     gets(sentence);
//     s=fopen("sentence.txt","w");
//     for(i=0;sentence[i]!='\0';i++){
//         putc(sentence[i],s);
//     }
//     fclose(s);
//     s=fopen("sentence.txt","r");
//     v=fopen("vowel.txt","w");
//     c=fopen("constant.txt","w");
//     if(s==NULL || v==NULL || c==NULL){
//         printf("file not found");
//     }
//     else{
//     while(!feof(s)){
//         char ch=getc(s);
//         if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
//             putc(ch,v);
//         }
//         else if(ch==' '){
//             putc(ch,v);
//             putc(ch,c);
//         }
//        else{
//             putc(ch,c);
//         }
//     }
// }
//     fclose(s);
//     fclose(v);
//     fclose(c);
// }   
//write  a program to print 10 characters only from a file sentence.txt.
// #include<stdio.h>
// int main(){
//     char ch;
//     FILE *s;
//     s=fopen("sentence.txt","r");
//     if(s==NULL){
//         printf("file not found");
//     }
//     else{
//         for(int i=0;i<10;i++){
//             ch=getc(s);
//             printf("%c",ch);
//         }
//     }
//     fclose(s);
// }
//write a program to copy the content of TU.text to university.text.
// #include<stdio.h>
// int main(){
//     int i;
//     FILE *TU,*u;
//     TU=fopen("tu.file","r");
//     u=fopen("university.file","w");
//     if(TU==NULL){
//         printf("file not found");
//     }
//     else{
//         while(!feof(TU)){
//             char ch=getc(TU);
//             putc(ch,u);
//         }
//     }
//     fclose(TU);
// }
// using r+:
// #include<stdio.h>
// int main(){
//     FILE *fp ;
//     char ch ;
//     char caste[100]="Lama";
//     fp=fopen("yourname.txt","r+");
//     if(fp==NULL){
//         printf("file not found");
//     }
//     printf("details of file:");
//     while(!feof(fp)){
//         ch=getc(fp);
//         printf("%c",ch);
//     }
//     fprintf(fp,"\n");
//     for(int i=0;caste[i]!='\0';i++){
//             putc(caste[i],fp);
//     }
//     fclose(fp);
//     return 0;   
// }
// by using w+(in this program older data is deleted by new one.)
// #include<stdio.h>
// int main(){
//     int i;
//     char caste[50];
//     FILE *fp;
//     printf("enter your caste:");   
//     scanf("%s",&caste);
//    if (fp==NULL){
//     printf("file not found");
//    } 
//     fp=fopen("yourname.txt","w+");
//     for(i=0;caste[i]!='\0';i++){
//         fputc(caste[i],fp);
//     }
//     rewind(fp);
//     while(!feof(fp)){
//         char ch= getc(fp);
//         printf("%c",ch);
//     }
//     fclose(fp);
// }
//write a program to  save data of 3 employees to a file data.txt.
// #include<stdio.h>
// int main(){
//     FILE *fp;
//     fp=fopen("data.txt","w");
//     fprintf(fp,"Ram ktm 50000\n");
//     fprintf(fp,"amar siraha 40000\n");
//     fprintf(fp,"singh  lahan 20000\n");
//     fclose(fp); 
//  } 
// or by using fscanf.
// #include<stdio.h>
// int main(){
//     FILE *fp;
//     char name[50],address[50];
//     int salary;
//     fp=fopen("data.txt","r");
//     while(!feof(fp)){
//         fscanf(fp,"%s %s %d",&name,&address,&salary);
//      printf("%s %s %d\n",name,address,salary);
//     }
//     fclose(fp);
// }
// compare to it.
// #include<stdio.h>
// #include<string.h>
// int main(){
//     FILE *fp;
//     char name[50],address[50];
//     int salary;
//     int line=0,count=0;
//     fp=fopen("data.txt","r");
//     while(!feof(fp)){
//         char ch=getc(fp);
//       if(ch=='\n'){
//         line++;
//       }
//     }
//     rewind(fp);
//     while(count<line){
//         fscanf(fp,"%s %s %d",&name,&address,&salary);
//         if(strcmp(address,"ktm")==0){
//       printf("%s %s %d\n",name,address,salary);}
//       count++;
//     }
//     fclose(fp);
// }

//write a program to find the no. of lines form a file data.txt.
// #include<stdio.h>
// int main(){
//     int line=0;
//     FILE *fp;
//     char ch;
//     fp=fopen("data.txt","r");
//     if(fp==NULL){
//         printf("file not found");
//     }
//     else{
//         while(!feof(fp)){
//             ch=getc(fp);
//             if(ch=='\n'){
//                 line++;
//             }
//         }
//         printf("number of lines=%d",line);
//     }
//     fclose(fp);
//}
//write a program to input for 5 employees detail and store it in emp.txt and print the detail of employees whose salary is greater than 20000.
// #include<stdio.h>
// int main(){
//     int i,number;
//     char name[5][50];
//     int salary[5];
//     int count=0,line=0;
//     FILE *ep;
//     ep=fopen("emp.txt","w+");
//     for(int i=0;i<5;i++){
//         printf("enter the details of %d employ:\n",i+1);
//         printf("enter name of employ:\n");
//         scanf("%s",name[i]);
//         printf("enter the salary:");
//         scanf("%d",&salary[i]);
//         fprintf(ep,"%s %d\n",name[i],salary[i]);
//     }
// fclose(ep);
// }

// #include<stdio.h>
// int main(){
//     int i;
//     char name[5][50];
//     int salary[5];
//     FILE *ep = fopen("emp.txt", "r");
//     if(ep == NULL){
//         printf("file not found");
//         return 1;
//     }
//     rewind(ep);
//     i = 0;
//     while(!feof(ep)){
//         fscanf(ep, "%s %d", name[i], &salary[i]);
//         if(salary[i] > 20000) {
//             printf("%s %d\n", name[i], salary[i]);
//         }
//         i++;
//     }
//     fclose(ep);
//     return 0;
// }
    
//write a program to store detail of employees (id,name,age) to a binary file for 1 employee.

// #include<stdio.h>
// struct employee{
//     int id;
//     char name[50];
//     int age;
// };
// int main(){
//     struct employee emp;
//     FILE *fp;
//     fp=fopen("employee.dat","wb");
//     if(fp==NULL){
//         printf("file not found");
//         return 1;
//     }
//     printf("enter employee id:");
//     scanf("%d",&emp.id);
//     printf("enter employee name:");
//     scanf("%s",emp.name);
//     printf("enter employee age:");
//     scanf("%d",&emp.age);
//     fwrite(&emp,sizeof(struct employee),1,fp);
//     fclose(fp);
// }
// to read the data of employee from binary file.
//  #include<stdio.h>
//     struct employee{
//         int id;
//         char name[50];
//         int age;
//     };
//     int main(){
//         struct employee emp;
//         FILE *fp;
//         fp=fopen("employee.dat","rb");
//         if(fp==NULL){
//             printf("file not found");
//             return 1;
//         }
//         fread(&emp,sizeof(struct employee),1,fp);
//         printf("employee id=%d\n",emp.id);
//         printf("employee name=%s\n",emp.name);
//         printf("employee age=%d\n",emp.age);
//         fclose(fp);
//     }
//write a program to store detail of employees (id,name,age) to a binary file for 5 employee.
// #include<stdio.h>
// struct employee{
//     int id;
//     char name[50];
//     int age;
// };
// int main(){
//     int i;
//     struct employee emp[5];
//     FILE *fp;
//     fp=fopen("employee.dat","wb");
//     if(fp==NULL){
//         printf("file not found");
//         return 1;
//     }
//     for(i=0;i<5;i++){
//         printf("enter the detail of %d employees",i+1);
//     printf("enter employee id:");
//     scanf("%d",&emp[i].id);
//     printf("enter employee name:");
//     scanf("%s",emp[i].name);
//     printf("enter employee age:");
//     scanf("%d",&emp[i].age);
//     fwrite(&emp,sizeof(struct employee),1,fp);}
//     fclose(fp);
// }

//random access in file handling.
//SEEK SET.
// #include<stdio.h>
// int main(){
//     FILE *fp;
//     fp=fopen("tu.txt","r");
//     if(fp==NULL){
//         printf("file not found");
//         return 1;
//     }
//     fseek(fp,1,SEEK_SET);
//     while(!feof(fp)){
//     char ch=getc(fp);
//     printf("%c",ch);
//     }
//     fclose(fp); 
// }
      // SEEK CUR.
//       #include<stdio.h>
// int main(){
//     FILE *fp;
//     fp=fopen("tu.txt","r");
//     if(fp==NULL){
//         printf("file not found");
//         return 1;
//     }
//     fseek(fp,1,SEEK_CUR);
//     char ch=getc(fp);
//     printf("%c",ch);
//     fclose(fp); 
// }
        // SEEK END.
// #include<stdio.h>
// int main(){
//     FILE *fp;
//     fp=fopen("tu.txt","r");
//     if(fp==NULL){
//         printf("file not found");
//         return 1;
//     }
//     fseek(fp,-3,SEEK_END);
//     char ch=getc(fp);
//     printf("%c",ch);
//     fclose(fp); 
// }
//       F TELL.
// #include<stdio.h>
// int main(){
//     FILE *fp;
//     fp=fopen("tu.txt","r");
//     if(fp==NULL){
//         printf("file not found");
//         return 1;
//     }
//     fseek(fp,1,SEEK_SET);
//     char ch=fgetc(fp);
//     printf("%c",ch);
//     int pos=ftell(fp);
//     printf("\nposition of file pointer=%d",pos);
//     fclose(fp); 
// }
// //     REWIND.
// #include<stdio.h>
// int main(){
//     FILE *fp;
//     fp=fopen("tu.txt","r");
//     if(fp==NULL){
//         printf("file not found");
//         return 1;
//     }
//     fseek(fp,1,SEEK_SET);
//     char ch=fgetc(fp);
//     rewind(fp);
//     printf("%c",ch);
//     int pos=ftell(fp);
//     printf("\nposition of file pointer=%d",pos);
//     fclose(fp); 
// }

// wap to print something in the file by taking file name form the user.
// #include<stdio.h>
// int main(){
//     FILE *fp;
//     char name[20];
//         printf("Enter the name of the file:");
//     scanf("%s",name);
//     fp=fopen(name,"w");
//     if(fp==NULL){
//         printf("Unable to create file!");
//         return 0;
//     }
//     fprintf(fp,"Hello,it's me Amardip Singh.");
//     fclose(fp);
//     printf("File created successfully!");
//     return 0;
// }

//   in the read mode.
// #include<stdio.h>
// int main(){
//     FILE *fp;
//     char name[20];
//         printf("Enter the name of the file:");
//     scanf("%s",name);
//     fp=fopen(name,"r");
//     if(fp==NULL){
//         printf("Unable to create file!");
//         return 0;
//     }
//      while(!feof(fp)){
//         char ch = fgetc(fp);
//         if(ch != EOF){
//             printf("%c",ch);
//         }
//     }
//     fclose(fp);
//     printf("File read successfully!");
//     return 0;
// }