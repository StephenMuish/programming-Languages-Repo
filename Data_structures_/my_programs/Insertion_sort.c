#include <stdio.h>

int main(void){

//initializing the elements
int temp, size, j, i, nums[30];

//prompt the user to enter the size of the array he wants to be sorted
printf("\t\tThis is an insertion sort Algorithm.\nEnter the size of your array.\nSize :");
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
for(i=1;i<size;i++){

temp =nums[i];
j=i-1;
while(j>=0 && temp < nums[j]){
nums[j+1]=nums[j];
j=j-1;
}
nums[j+1]=temp;
}

//print array after sorting
printf("Array after sorting.\n");
for(i=0;i<size;i++){
printf("Index %d : %d\n", i+1, nums[i]);
}

printf("Thanks and bye!\n");
return 0;
}



