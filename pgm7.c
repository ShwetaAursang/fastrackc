#include <stdio.h>
void main()
{
   int *a,i,j,tmp,n,b;
   FILE *fp;
   fp = fopen("Input.txt","w+");   
   
   printf(" Input the number of elements to store in the file : ");
   scanf("%d",&n);
   
   printf(" Input %d number of elements in the file : \n",n);
  //// for(i=0;i<n;i++)
     // {
	 // printf(" element - %d : ",i+1);
          scanf("%d",&b);
          fprintf(fp,"%d\n",b);
	 // }   
   fclose(fp);
   fp = fopen("Input.txt","r"); 
   if(fp == NULL)
   {
     printf("Unable to read file");
   }
     for(i=0;i<n;i++)
      {
          fscanf(fp,"%d\n",a+i);
	  } 
   printf("%d\n",*(a+i));
 fclose(fp);
    
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
       if( *(a+i) > *(a+j))
       {
      tmp = *(a+i);
      *(a+i) = *(a+j);
      *(a+j) = tmp;
       }
    }
   }

   printf("\n The elements in the file after sorting : \n");
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : %d \n",i+1,*(a+i));
      }         
//printf("\n");
 //fclose(fp);
}
