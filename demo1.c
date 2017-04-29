#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	FILE *fp;
	char str[50],tmp[6];
	int i,j = 0,m = 0,n = 0;
	int i_arr[4][10] = {0};
	
	if((fp = fopen("./data.scv","r+")) == NULL) {
		printf("read file fial!");
		exit(1);
	}
		
	
	while(!feof(fp)){
		fgets(str,50,fp);
		for(i = 0; i < strlen(str); i ++){
			tmp[j] = str[i];
			j ++;
			if(str[i] == 9 || str[i] == 10){
				i_arr[m][n] = atoi(tmp);
				printf("%d\t",i_arr[m][n]);
				n ++;
				j = 0;
			}
		}
		printf("\n");
		n = 0;
		m ++;
	}
	fclose(fp);
	printf("result= %f",average(i_arr[0]));
	return 0;
}

