#include <stdio.h>  
void main(){  
   FILE *fp;  
  
   fp = fopen("saurav.txt","w+");  
   fputs("This is javatpoint", fp);  
    
   fseek( fp, 7, SEEK_SET );  
   fputs("sonoo jaiswal", fp);  
   fclose(fp);  
}
