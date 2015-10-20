#include <stdio.h>

int main(int argc, char* argv[]) {

	char c;

/*	c = getchar();

	while (c != EOF) {

		if (ispunc(c) == 0)
			printf("%c",c);

	c = getchar();

	}
*/

	while ((getchar()) !=EOF) {

		if (!ispunc(c))
			printf("%c",c);
	}

	return 0;

}
