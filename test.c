#include <stdio.h>
#include "utf8.h"

int main(){

	char* s = "一二三四五六七八九十𪽏𫝀";
	char c[5];
	u_int32_t uc[20];
	int n, i, j;

	n = u8_toucs(uc, 20, s, -1);

	for(i=0; i<=n; i++){
		j = u8_toutf8(c, 4, uc+i, 4);
		printf("%s, %d: s[%d]\t= %X\n", c, j, i, uc[i]);
	}

	return 0;

}
