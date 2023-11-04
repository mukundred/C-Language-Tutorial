#include<stdio.h>
// arr[]={1,2,3,4,5,6,7,8} (Before)
// arr[]={11,4,13,8,15,12,17,16} (After)
int main()
{
int arr[7] = {1,2,3,4,5,6,7,8};
for(int i = 0; i<= 6; i++){
    if(i%2==0){
    arr[i] *=2;
    }
    else{
        arr[i]+=10;
    }
}
for(int i = 0; i<= 6; i++){
    printf("%d ", arr[i]);
}

return 0;
}