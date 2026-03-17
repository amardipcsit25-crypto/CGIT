  // //write a programe to print a index of number which is less than 25.
  // #include<stdio.h>
  // int main(){
  //   int i;
  //   int size=4;
  // int arry[4];
  // printf("enter  a number=");
  // for(i=0;i<size;i++)
  // scanf("%d",&arry[i]);
  // for (i=0;i<size;i++){
  //   if(arry[i]>25){
  // printf("%d ",i);}

  // }
  // return 0;
  // }

// //write a programe to print samller and larger number in an array.
// #include<stdio.h>
// int main (){
//     int arr[5],i,small,larger;
//     printf("enter number=");
//     for (i=0;i<=5;i++){
   
//     scanf("%d",&arr[i]);}
//     small=arr[0];
//     larger=arr[0];
    
//     for(i=1;i<=5;i++){
        
        
//         if(small>arr[i])
//         {
//             small=arr[i];
//         }
//         if(larger<arr[i])
//         {
//             larger=arr[i];
//         }
        
        
//     }
//     printf("%d is smaller number and %d is larger number  ",small,larger);
//     return 0;
// }

  //write a programe to sorting in ascending order.
// #include<stdio.h>
// int main(){ 
  
//     int size,i,j,temp;
//   printf("enter size of array=");
//   scanf("%d",&size);
//     int arr[size]; 
//     printf("enter a number="); 
//     for(i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<size;i++){
//       for (j=i;j<size;j++){
//         if(arr[i]>arr[j]){
//             temp=arr[i];   
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//       }
//     }
//     for(i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
//}

//write a programe to sorting in descending order.
// #include<stdio.h>
// int main(){ 
  
//     int size,i,j,temp;
//   printf("entere size of array");
//   scanf("%d",&size);
//     int arr[size]; 
//     printf("enter a number="); 
//     for(i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<size;i++){
//       for (j=i;j<size;j++){
//         if(arr[i]<arr[j]){
//             temp=arr[i];   
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//       }
//     }
//     for(i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
  
// }
//write a programe by using multi dimension array.
// #include<stdio.h>
// int main(){
//   int i,j;
//   int arr [2][3]={{31,17,13},{10,12,8}};
//   for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//       printf("%d ",arr[i][j]);
//     } 
//     printf("\n");
//   }
//return 0;
// }
//write a programe to print 2*3 matrix by taking input from users.
// #include<stdio.h>
// int main(){
//   int i,j;
//   int arr [2][3];
//   for(i=0;i<2;i++){
//     for(j=0;j<3;j++){
//       printf("enter  arr[%d][%d]=",i,j);
//       scanf("%d",&arr[i][j]);
//     } 
//   }
   
//   for(i=0;i<2;i++){
//     for(j=0;j<3;j++){
//       printf("%d ",arr[i][j]);
//     } 
//     printf("\n");
//   }
//   return 0;
// }
//write a programe to take a input from user  and print  their sum.
// #include<stdio.h>
// int main(){
//   int i,j,sum=0,col,row;
// printf("enter row=");
// scanf("%d",&row);
// printf("enter column=");
// scanf("%d",&col);
// int arry[row][col];
// for(i=0;i<row;i++){
//   for(j=0;j<col;j++){
//     printf("enter arry[%d][%d]=",i,j);
//     scanf("%d",&arry[i][j]);
//     sum=sum+arry[i][j];
//   }
//   printf("%d",sum);
// }
// return 0;
// }
//write a programe to create an array of size 5 and display them.
// #include<stdio.h>
// int main(){ 
//   int i,size=5;
//   int arry[size];
//   printf("enter 5 number=");
//   for(i=0;i<size;i++){
//     scanf("%d",&arry[i]);

//   }
//   for(i=0;i<size;i++){
//     printf(" %d",arry[i]);
    
//   }
//   return 0;
// }
//write a programe to count even and odd elements in an array.
// #include<stdio.h>
// int main(){ 
//   int i,count=0,count2=0;
//   int size;
//   printf("enter a size of array=");
//   scanf("%d",&size);
//   int arry[size];
//   printf("enter  number=");
//   for(i=0;i<size;i++){
//     scanf("%d",&arry[i]);

//   }
//   for(i=0;i<size;i++){
//    if(arry[i]%2==0){
//     count++;
//    }
//    else{
//     count2++;
//    }

//   }
  
//     printf(" the number of  even number in array is %d ",count);
//    printf("\n");
//     printf("the number of odd number in array is %d",count2);
  
//   return 0;
// }
//writ]e a programe to find second largest and second smallesr element in an array.
//   #include<stdio.h>
// int main(){ 
//     int size,i,j,temp;
//   printf("entere size of array=");
//   scanf("%d",&size);
//     int arr[size]; 
//     printf("enter a number="); 
//     for(i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<size;i++){
//       for (j=i;j<size;j++){
//         if(arr[i]>arr[j]){
//             temp=arr[i];   
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//       }
//     }
//     printf("%d is second smallest number in array",arr[1]);
//     printf("\n");
//        printf("%d is second largest number in array",arr[size-2]);
//     return 0;
//   }
//write a programes to copy array into another array.
// #include<stdio.h>
// int main(){                               
//   int i,size;
//   printf("enter the size of array=");
//   scanf("%d",&size);
//   int arry[size];
//   int arry2[size];
//   printf("original number=");
//   for(i=0;i<size;i++){
//     scanf("%d",&arry[i]);
//     }
//      for(i=0;i<size;i++){
//     arry2[i]=arry[i];
//     }
//     printf("copy number=");
//  for(i=0;i<size;i++){
//     printf(" %d",arry2[i]);
//     }
//     return 0;
// }
//write a programe to insert an element at a given position.
// #include<stdio.h>
// int main(){
//   int i,size,po,num;
//   printf("enter size of array=");
//   scanf("%d",&size);
//    int arry[size];
//    printf("enter elements=");
//    for(i=0;i<size;i++){
//     scanf("%d",&arry[i]);
//    }
//     printf("enter a position of insert elements=");
//   scanf("%d",&po);
//   printf("enter a insert  elements=");
//   scanf("%d",&num);
//       for(i=size;i>=po;i--){
//       arry[i]=arry[i-1];]
//       } 
//   arry[po]=num;
//   size++;
//   for(i=0;i<size;i++){
//     printf(" %d",arry[i]);
//   }
//   return 0;
// }
//write a programe to separate even and odd elements into two array.
// #include<stdio.h>
// int main(){
//   int i,size,even_count=0,odd_count=0;
//   printf("enter size of array=");
//   scanf("%d",&size);
//   int arry[size];
//   int even_arry[size],odd_arry[size];
//   printf("enter elements of an array=");
//   for(i=0;i<size;i++){
//    scanf("%d",&arry[i]);
//   }
//   for(i=0;i<size;i++){
//   if(arry[i]%2==0){
//     even_arry[even_count]=arry[i];
//     even_count++;
//    }
//   else{
//    odd_arry[odd_count]=arry[i];
//     odd_count++;
//   }
//  }
//  printf("enven elememts=");
//   for(i=0;i<even_count;i++){
//   printf(" %d",even_arry[i]);
//   }
//   printf("\n");
//   printf("odd elements=");
//   for(i=0;i<odd_count;i++){
//     printf(" %d",odd_arry[i]);
//   }
//   return 0;

// }
//write a programe to transpose a matrix 3*2. 
// #include<stdio.h>
// int main(){
//   int i,j;
//   int arr [3][2];
//   for(i=0;i<3;i++){
//     for(j=0;j<2;j++){
//       printf("enter  arr[%d][%d]=",i,j);
//       scanf("%d",&arr[i][j]);
//     } 
//   }
//    printf("matrix=\n");
//   for(i=0;i<3;i++){
//     for(j=0;j<2;j++){
//       printf("%d ",arr[i][j]);
//     } 
//     printf("\n");
//   }
//   printf("traspose matrix=\n");
//    for(i=0;i<2;i++){
//     for(j=0;j<3;j++){
//       printf("%d ",arr[j][i]);
//     } 
//     printf("\n");
//     }
//   return 0;
  
// }
//write a programe to merge two array into one.
// #include<stdio.h>
// int main(){
//   int s1,s2,i,j;
//   printf("enter size of array1=");
//   scanf("%d",&s1);
//   printf("enter size of array2=");
//   scanf("%d",&s2);
//   int arry1[s1];
//   int arry2[s2];
//   int s3=s1+s2;
//   int arry3[s3];
//   printf("enter the elements of array1=");
//   for(j=0;j<s1;j++){
//     scanf("%d",&arry1[j]);
//   }
//   printf("enter the elements of array2=");
//   for(i=0;i<s2;i++){
//     scanf("%d",&arry2[i]);
//   }
//   for( j=0;j<s1;j++){
//     arry3[j] = arry1[j];  
// }
//   for(i = 0; i<s2;i++){
//     arry3[s1+i] = arry2[i];
//   }
//   printf("merged array= ");
//    for( j=0;j<s3;j++){
//     printf("%d  ",arry3[j]);
//   }
// }