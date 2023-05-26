#include <stdio.h>

// void returns nothing
void main() {
	printf("Hello, World!");
}

/*
// return with ()
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
int main() {
    printf("Hello, ");
    printf("World!");
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

/*
int main() {
    printf("Hello, World!\n");
    printf("I'm learning C.\n");
    return 0;
}
*/

/*
int main() {
    printf("Hello, World!\nI'm learning C.\n");
    return 0;
}
*/

/*
// write in one line. It's not recommended
int main() {printf("Hello, World!\n"); return 0;}
*/

/*
// input arguments
// don't care about the syntax! Compile and execute by the following arguments:
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
*/

/*
// snake_case
void print_hello_world() {
	printf("Hello, World!\n");
}

int main() {
	print_hello_world();
	return 0;
}
*/

/*
// camelCase
void printHelloWorld() {
	printf("Hello, World!\n");
}

int main() {
	printHelloWorld();
	return 0;
}
*/

/*
void print_message(char msg[]) {
    printf("%s\n", msg);
}

int main() {
    print_message("Hello, World!");
    return 0;
}
*/
