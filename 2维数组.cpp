#include<stdio.h>
main(){
	int a[2][3]={{23,24,77},{11,13,8}};
	int b[3][2];
	int i,j;
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++){
			b[j][i]=a[i][j];
		}
	}
	//Êä³ö
	int t=0;
	for(j=0;j<=2;j++){
		t=0;
		for(i=0;i<=1;i++){
		    printf("%d",b[j][i]);
		    t++;
		    if(t=1){printf(" ");}
		    if(t=3){printf("\n");}
		}
	} 
} 
