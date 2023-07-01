#include <stdio.h>

//A function for swaping

void swap(int *Element1, int *Element2){

//initilise  swapping element.
int temp;

//swap elements.
temp = *Element1;
*Element1 = *Element2;
*Element2 = temp;

}

//function to print elements.

void print(int Array[], int size){

printf("\n{");
for(int i =0; i<size;i++){

printf("%d ", Array[i] );

}
printf("}\n");
}

//functon to partition the array.
int partition(int nums[], int low, int high){

//initialize required elements.
int start, end,pivot;

//partition the array.

start = low;
end= high;
pivot = low;

while(start < end){

while(nums[start] < nums[pivot]){

start++;

}

while(nums[end] > nums[pivot]){

end--;

}

swap(&nums[end], &nums[start]);

}
printf("%d\n",nums[pivot]);

swap(&nums[pivot], &nums[end]);

return end;
}

//Quick sort algorithm.

void Quick_sort(int nums[], int *low, int *high){

int Index;

if(*low < *high){
Index = partition(nums, *low, *high);


Quick_sort(nums, *low, Index-1);

Quick_sort(nums,Index+1, *high);

}
}

void main(){

//initializing the required variables.
int nums[30],size,k,high,low;



//prompt the user to enter the size of the array he wants to be sorted
printf("\t\tThis is an quick sort Algorithm.\nEnter the size of your array.\nSize :");
scanf("%d", &size);

//loop to read the array from te user.
for(k=0;k<size;k++){

printf("Enter element %d\nElement: ", k+1);
scanf("%d", &nums[k]);

}
low = 0;
high = size;



Quick_sort(nums, &low, &high);

print(nums,size);

}

















