#include <stdio.h>

/*
// void nothing to return
void main() {
	printf("Hello, World!");
}
*/

/*
// return by ()
int main() {
	printf("Hello, World!");
	return (0);
}
*/

/*
// return without ()
int main() {
	printf("Hello, World!");
	return 0;
}
*/

/*
// using escape character \n for new line
int main() {
	printf("Hello, World!\n");
	return 0;
}
*/

// input arguments
// don't care about the syntax! compile and execute by the following arguments:
// 	1: $ a.out Hello, World! -> Hello,
// 		argv[0] is: a.out
// 		argv[1] is: Hello,
// 		argv[2] is: World!
// 	   so execute as:
// 	2: a.out "Hello, World!" -> Hello, World!
int main(int argc, char* argv[]) {
	printf("%s\n", argv[1]);
	return 0;
}


