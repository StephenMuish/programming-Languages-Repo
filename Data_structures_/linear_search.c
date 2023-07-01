

#include <stdio.h>
//#include <conio.h>

int main(){
int n,numbers[25],data,i,flag=0;

printf("Enter the number of elements\n");
scanf("%d",&n);

printf("Enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&numbers[i]);

}
printf("Enter the element to be searched\n:");
scanf("%d",&data);
for(i=0;i<n;i++){

if(numbers[i]==data){

flag =1;
break;
}
}
if(flag == 1)
printf("Data found at location :%d\n",i+1);
else
printf("Data not found\n");

return 0;
}
