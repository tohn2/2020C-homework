#include<stdio.h>
int main(){
	int begin,end,n,f=0;
	while(scanf("%d",&n)!=EOF){
		for(begin=1;begin<n;begin++){
			for(end=begin+1;end<n;end++){
				if((begin+end)*(end-begin+1)/2==n){
					f=1;
					int i;
					for(i=begin;i<=end;i++){
						printf("%d ",i);
					}
					printf("\n");
				}
			}
		}
		if(f==0)printf("NONE");
	}
	return 0;
}