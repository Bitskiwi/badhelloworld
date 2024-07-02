#include <stdio.h>
#include <string.h>

struct hello_world_struct {
	char hello_world[20];
};

enum crack_baby_enum{
	buzzed,
	baked,
	cooked,
	sauteed
};

void four_chan(){
	FILE *fptr;
	fptr = fopen("121304912.txt", "w");
	fprintf(fptr, "Steve Jobs is still alive in Cairo");
	fclose(fptr);
}

void asfdgfhjgfdsasfdgfgdfasgdsfh(char string[20]){
	char favorite_color[100]; // no U's as a little fuck you to the europeans
	scanf("%s", favorite_color);
	printf("just kidding i don't fucking care");
	four_chan();
	enum crack_baby_enum mune_ybab_kcarc;
	while(baked){
		for(int i = buzzed; i < baked; i++){
			switch(baked){
				case baked:
					if(baked + baked == cooked){
						printf("%s", *string);
					}
				default:
					printf("fuck you math doesn't work <3");
			}
		}
		break;
	}
}

int main(){
	struct hello_world_struct hello_world_struct_instance;
	strcpy("hello world", hello_world_struct_instance.hello_world);
	char *Hello_World = hello_world_struct_instance.hello_world;
	asfdgfhjgfdsasfdgfgdfasgdsfh(*Hello_World);
}
