#include <stdio.h>
void main(){
int n=5, position, number;
int i=n-1;
int num[6]= {3, 4, 5, 6, 7, 8};
num[7]=num[7];
int check = n-1;
printf("Enter the number to insert\nNumber : ");
scanf("%d", &number);
printf("Enter the position to insert\nPosition : ");
scanf("%d", &position);
position = position-1;

while(i >= position){
    num[check]=num[i];
    check = check -1;
    i =i-1;
 }
 
num[position]=number;

printf("{");
for(int j =0;j<n+1;j++){
printf("%d", num[j]);

if(j<n){
printf(", ");
}
}
printf("}\n");
}
