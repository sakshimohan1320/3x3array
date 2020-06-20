//*C program to initialize a 3x3 array,insert elements into the array,read and print an arrayof elements using only pointers*//

#include<stdio.h>
void main()
{
int arr1[3][3],i,j;
printf("\n\nRead a 2D array of size 3x3 and print the matrix :\n");
printf("\n\nRead a 2D array of size 3x3 and print the matrix :\n");
 
printf("Input elements in the matrix :\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("element - [%d],[%d]:",i,j);
scanf("%d",&arr1[i][j]);
}
}
printf("\nThe matrix is : \n");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
printf("%d\t",arr1[i][j]);
}
printf("\n\n");
}

//*C program to find and print the sum of all diagonal elements*//

#include<stdio.h>
int main()
{
int i,j,rows,columns,a[10][10], sum=0;
printf("\n Enter number of rows and columns :");
scanf("%d %d", &i,&j);

printf("\n Enter the matrix elements \n");
for(rows=0;rows<i;rows++)
{
for(column=0;columns<j;columns++)
{
scanf("%d", &a[rows][columns]);
}
}
for(rows=0;rows<i;rows++)
{
sum = sum + a[rows][rows];
}
printf("\n The sum of Diagonal Elements of a matrix = %d", sum);
return 0;
}
