#include <stdio.h>
#include <time.h>

int main() {
    time_t start_time = 0;  // Initialize start time to 0 (unset)

    printf("Press any key to start the clock...");
    getchar();  // Wait for user input

    start_time = time(NULL);  // Set the start time to the current time

    printf("Clock started at: %s", ctime(&start_time));  // Print the start time

    return 0;
}
