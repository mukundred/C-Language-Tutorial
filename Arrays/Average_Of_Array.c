#include<stdio.h>
int main()
{
int n;
printf("Enter Number Of Elements : ");
scanf("%d", &n);
int arr[n];
for(int i = 0 ; i<n ; i++){
    scanf("%d", &arr[i]);
}
int sum = 0;
for(int i =0 ; i<n ; i++){
    sum += arr[i];
}
printf("Sum of Array : %d\n", sum);
float avg;
avg = sum/n;
printf("Average of Array : %.1f", avg);
return 0;
}