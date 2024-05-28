#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    // Define the environment variable for the child process
    char *my_env[] = {"JUICE=peach and apple", NULL};

    // Attempt to replace the current process image with "dinner_info"
    // Note: execle does not return on success, so we check for errors here
    if (execle("dinner_info", "dinner_info", "4", NULL, my_env) == -1) {
        perror("execle failed");
        exit(EXIT_FAILURE); // Exit if execle fails
    }

    // The following lines will not be reached if execle succeeds
    printf("Dinners: %s\n", argv[1]); // This will likely cause undefined behavior
    printf("Juice: %s\n", getenv("JUICE")); // This will not print anything meaningful after execle

    return 0;
}
