#include <stdio.h>
int main() {
    int i,j,k;
    for(i=1;i<=4;i++){
        for(j=i;j<=4;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            if(k%2!=0 && i!=3 && i!=4){
                printf("*");
            }
            else if(i==3){
                printf("*");
        }
            else if(i==4){
                if(k==1 || k==2*i-1){
                    printf("*");
                
                }
                else{
                    printf(" ");
                }
                }
            else{
            	printf(" ");
			}
            }
            printf("\n");
     }
  }
