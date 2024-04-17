#include<iostream>
using namespace std;
int main(){
	int a=10,b=20;
	swap(&a,&b);
	cout<<"a is"<<a<<"b is"<<b<<endl;
}
swap(&a,&b){
	int temp=&a;
	&a=&b;
	&b=temp;
}

