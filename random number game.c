#include<stdio.h>
#include<stdlib.h>          //these header files are not so imp in devc++
#include<time.h>
int main(){
	int number,guess,nguesses=0;
	srand(time(0));//this line is not very imp in this app
	number= rand()%100;
	//printf("the number is %d\n",number);
	//keep running the loop until the number is guessed
	do{
		printf("guess the number between 1 to 100\n");
		scanf("%d",&guess);
		if(guess>number){
			printf("lower number please\n");
		}
		else if(guess<number){
				printf("higher number please\n");
			}
			else{
			printf("you guessed it in %d attempts\n",nguesses);
		}
		nguesses++;
	}while(guess!=number);
}

