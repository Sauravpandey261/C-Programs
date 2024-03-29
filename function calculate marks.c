#include <stdio.h>
float per(float sc,float maths,float sst);
float per(float sc,float maths,float sst){
    return ((sc+maths+sst)/3.0) ;
}
int main(){
	float sc=88.0;
	float maths=90.0;
	float sst=97.0;
	printf("percentage is %f",per(sc,maths,sst));
	return 0;
}
