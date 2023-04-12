#include <stdio.h>

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

	return 0;
}
