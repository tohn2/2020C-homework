#include<stdio.h>
#include<math.h>
double fun(int i){
	int mul=1;
	for(int j=1;j<=i;j++){
		mul=mul*j;
	}
	return mul;
}
double cos(int x){
	double sum=1.0,temp;
	int i=2,f=-1;
	do{
		temp=f*pow(x,i)/fun(i);
		sum=sum+temp;
		i=i+2;
		f=-f;
	}while(fabs(temp)>1e-6);//?
	return sum;
}
int main(){
	int x;
	while(scanf("%d",&x)!=EOF){
		printf("%lf",cos(x));
	}

}
