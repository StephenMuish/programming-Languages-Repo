#include <stdio.h>

int main(void){

//initializing the selection
int swap, size, j, i, nums[30];

//prompt the user to enter the size of the array he wants to be sorted
printf("\t\tThis is an selection sort Algorithm.\nEnter the size of your array.\nSize :");
scanf("%d", &size);

//loop to read the array from te user.
for(i=0;i<size;i++){

printf("Enter element %d\nElement: ", i+1);
scanf("%d", &nums[i]);

}

//print array before sorting.
printf("The array before sorting.\n");
for(i=0;i<size;i++){
printf("Index %d : %d\n", i+1, nums[i]);

}
//sorting the entered array.
for(i=0;i<size;i++){

for(j=i+1;j<size;j++){
if(nums[j]< nums[i]){
swap = nums[j];
nums[j]=nums[i];
nums[i]=swap;
}
}
}

//print array after sorting
printf("Array after sorting.\n");
for(i=0;i<size;i++){
printf("Index %d : %d\n", i+1, nums[i]);
}

printf("Thanks and bye!\n");
return 0;
}
