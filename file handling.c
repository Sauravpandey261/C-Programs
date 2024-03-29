#include<stdio.h>  
main()  
{  
FILE *fp ;  
char buff[255] ;  
fp = fopen("hello.txt","r") ;  
while(fscanf(fp,"%s",buff)!=EOF){
	printf("%s",buff);
}
fclose(fp);
}
