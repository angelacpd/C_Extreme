#include <stdio.h>
#include <string.h>

#define CMD(NAME) \
	char NAME ## _cmd[256] = ""; \
	strcpy(NAME ## _cmd, #NAME);

int main(int argc, char** argv){
	CMD(copy)
	CMD(paste)
	CMD(cut)
	char cmd[256];
	scanf("%s", cmd);
	if (strcmp(cmd, copy_cmd) == 0){
		printf("First if");
	}
	if (strcmp(cmd, paste_cmd) == 0){
		printf("Second if");
	}
	if (strcmp(cmd, cut_cmd) == 0){
		printf("third if");
	}
	return 0;
}

/*
...
... content of stdio.h ...
...
... content of string.h ...
...
int main(int argc, char** argv) {
  char copy_cmd[256] = ""; strcpy(copy_cmd, "copy");
  char paste_cmd[256] = ""; strcpy(paste_cmd, "paste");
  char cut_cmd[256] = ""; strcpy(cut_cmd, "cut");
  char cmd[256];
  scanf("%s", cmd);
  if (strcmp(cmd, copy_cmd) == 0) {
  }
  if (strcmp(cmd, paste_cmd) == 0) {
  }
  if (strcmp(cmd, cut_cmd) == 0) {
  }
  return 0;
}
*/