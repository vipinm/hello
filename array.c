#include<stdio.h>
main(){
int a[2][3] = {1, 2, 3,{} , 5,6};
int i = 0, j = 0,k = 0;
for (i = 0;i <2 ;i++)
for (j = 0;j <4 ;j++){
printf(" a[%d][%d] = %d \n",i,j,a[i][j]);
printf(" a[%d][%d][%d] = %d \n",i,j,*(*(a+i)+j));
}
}
