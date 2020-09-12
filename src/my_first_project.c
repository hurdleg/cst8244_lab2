#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
	puts("Hello World from QNX Neutrino RTOS!!!"); /* prints Hello World!!! */

	puts( "\n@author Gerald Hurdle (hurdleg@algonquincollege.com)" );
	puts( "I like to walk my dog Leo." );
	puts( "" );

	printf( "\n" );
	printf( "My PID is: %d\n", getpid() );
	printf( "My Parent's PID is: %d\n", getppid() );
	printf( "\n" );

	puts( "Enter 'q' to quit: ");
	getchar();

	return EXIT_SUCCESS;
}
