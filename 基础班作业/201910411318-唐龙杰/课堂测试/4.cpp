#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
int main()
{
	char v[10000]={'\0'};
	scanf("%s",v);	int i;	
	int len=strlen(v);  
	if(v[0]=='0')
	{ 		
		i=2;		
		while(v[i]=='0')			
		i++;		
		int xiaoshu=i+1-2;		
		if(i<len)			
			printf("%c",v[i++]);	
		if(i<len)			
			printf(".");	
		for(;i<len;i++)			
			printf("%c",v[i]);
		printf("e-%d\n",xiaoshu);	}			
	else{  
		i=0;		
		printf("%c.",v[0]);
		while(v[i]!='.'&&i<len)			
			i++; 	
		int ex=i-1;		
		for(i=1;i<len;i++)			
			if(v[i]!='.')				
				printf("%c",v[i]);	
		printf("e%d\n",ex);	}	
	return 0;
}