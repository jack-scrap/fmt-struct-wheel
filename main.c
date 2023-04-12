#include <stdio.h>
#include <time.h>

const char wheel[2 * 2] = {
	'-',
	'\\',
	'|',
	'/'
};

void err(char* msg) {
	printf("Error: %s\n", msg);
}

int main(int argc, char* argv[]) {
	if (argc != 1) {
		err("Wrong number of arguments");

		return 1;
	}

	printf("%c\n", wheel[time(NULL) % sizeof wheel / sizeof *wheel]);

	return 0;
}
