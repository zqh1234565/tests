#include<stdio.h>
main(){
	int x,i,a=0;
	printf("������\n");
	scanf("%d",&x);
	for(i=2;i<x;i++){
		if((x%i)!=0){
			a++;
		}
		else{
			printf("x��������");break;
		}
	}
	
		if(a==x-2){
			printf("x������");}
}
