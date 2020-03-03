#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(b==0){
			printf("error");
		}
		for(int i=a;i>1;i--){
			if(a%i==0&&b%i==0){
				a=a/i;
				b=b/i;
			}
		}
		printf("%d/%d\n",a,b);
	}
return 0;
}
