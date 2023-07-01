#include <stdio.h>

int main(void)
{

int nums[12] = {4, 7, 8, 9, 16, 20, 24, 38, 39, 45, 54, 77};
int low = 0, high = 11, mid, flag, check=0;
int  data_element;

printf("Enter the data element you would like to search.\nData element : ");
scanf("%d", &data_element);


while(low<=high)
{
check = check + 1;
mid = (high + low)/2;

if( data_element < nums[mid])
{
high = mid -1;
}
else if(data_element > nums[mid])
{

low = mid + 1;
}
if(data_element == nums[mid])
{
flag =1;
break;
}
else 
{
flag =0;
}
}
if(flag ==1){
printf("The data element was found a index %d\n",mid + 1);
}
else{
printf("The data element was not found!\n");
}

printf("The Number of comparisons is :%d\n",check);
return 0;
}
