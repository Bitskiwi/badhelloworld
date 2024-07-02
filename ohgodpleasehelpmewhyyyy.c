#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char totally_secure_password[5] = "1234";

int password(char *pass){
	if(strcmp(pass, totally_secure_password) == 0){
		return 1;
	} else {
		return 0;
	}
}

int main(int argc, char *argv[]){
	if(password(argv[1]) == 0){
		printf("wrong password");
		return 0;
	}
	a:
	goto c;
	b:
	goto d;
	c:
	goto b;
	d:
	goto e;
	e:
	goto h;
	f: 
	goto g;
	g:
	goto i;
	h:
	goto f;
	i:
	int ret_val = system("gcc main.c -o x");
	if(ret_val != 0){
		printf("\nhello world\n");
	}
}
