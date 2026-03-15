include<stdio.h>
#include<conio.h>
#include<graphics.h>
struct student{
char name[50];
int rollno;
char address[50];
char gender[10];
int age;
} ;
void main(){
clrscr();
// creating an object of student structure
struct student std[10];
//creating a file pointer to accss a file
FILE  *fp;
int i;
//opening a file
fp=fopen("student.data","r");
//checking if file  exists or not
if (fp==NULL){
printf("unable to find file");
}
else{
printf("working upto here:success\n");
printf("details are:\n");
for(i=0;i<10;i++){
fscanf(fp,"%s %s %s %d %d",&std[i].name,&std[i].address,&std[i].gender,&std[i].age,&std[i].rollno);
printf("%s %s %s %d %d\n",std[i].name,std[i].address,std[i].gender,std[i].age,std[i].rollno);
}}
int max_age=std[0].age;
int min_age=std[0].age;
//comparing and repalcing the max and min age
int max_index=0;
int min_index=0;
for(i=0;i<10;i++){
if(max_age<std[i].age) {
max_age=std[i].age;
max_index=i;}
if(min_age>std[i].age){
min_age=std[i].age;
min_index=i;
}
 }
 // dispaly the max and min age
 printf("max age=%d\n",max_age);
 printf("min age=%d\n",min_age);
 printf("details of max and min age student:\n");
 for(i=0;i<10;i++){
 if(max_age==std[i].age){
 printf("%s %s %s %d %d\n", std[i].name,std[i].address,std[i].gender,std[i].age,std[i].rollno);}
if(min_age==std[i].age){
printf("%s %s %s %d %d\n",std[i].name,std[i].address,std[i].gender,std[i].age,std[i].rollno);
}
 }
 // graphics mode
 char text[100];
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turbo c3\\bgi");
 rectangle(50,50,300,150);
 // displaying the text  inside rectangle for highest age
 sprintf(text,"highest age student detail:");
 outtextxy(60,60,text);
 //for printting rollno
 sprintf(text, "rollno=%d",std[max_index].rollno);
 outtextxy(60,80,text);
 //for  printing name
 sprintf(text,"name=%s",std[max_index].name);
 outtextxy(60,90,text);
 sprintf(text,"gender=%s",std[max_index].gender);
 outtextxy(60,100,text);
 sprintf(text,"address=%s",std[max_index].address);
 outtextxy(60,110,text);
 sprintf(text,"age=%d",std[max_index].age);
 outtextxy(60,120,text);
 rectangle(320,50,550,150);
 //printing for min age student
 sprintf(text,"detail of min age student:");
 outtextxy(322,60,text);
 sprintf(text,"name=%s",std[min_index].name);
 outtextxy(330,80,text);
 sprintf(text,"age=%d",std[min_index].age);
 outtextxy(330,90,text);
 sprintf(text,"address=%s",std[min_index].address);
 outtextxy(330,100,text);
 sprintf(text,"rollno=%d",std[min_index].rollno);
 outtextxy(330,110,text);
 sprintf(text,"gender=%s",std[min_index].gender);
 outtextxy(330,120,text);
fclose(fp);
getch();
}