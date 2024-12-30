#include<stdio.h>
#include<string.h>
int main(){
	char string[]="cuong le ca tim";
	int size=strlen(string);
	int count=1;
	for(int i=0;i<size;i++){
		if(string[i]==' '){
			printf("%c",string[i]);
			count=1;
		}else if(count==1){
			printf("%c",string[i]-32);
			count=0;
		}else{
			printf("%c",string[i]);
		}
	}
}
