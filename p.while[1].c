// for loop 
#include <stdio.h>
int main(){
		
int start;
int stop;
int sum;

printf("enter start");
scanf("%d",&start);

printf("enter the stop");
scanf("%d",&stop);

while(start<=stop){
printf("%d\n",start);
start++;
sum+=start;
}


printf("the sum%d",sum);

return 0;
}