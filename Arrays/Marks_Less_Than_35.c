#include<stdio.h>
int main()
{
int n;
printf("Enter Number Of Students : ");
scanf("%d", &n);
int maRks[n];
int a = 0;
for(int i = 0 ; i< n; i++){
a +=1;
printf("Enter Marks of %d Students : ",a);
    scanf("%d", &maRks[i]);
    
}
for(int i = 0 ; i<n; i++){
    if(maRks[i]<35){
        printf("Roll Number Of Student Whose Marks Are Less Than 35 is %d\n", i);
    }
}

return 0;
}