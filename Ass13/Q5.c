#include <stdio.h>
#include <stdlib.h> // For NULL definition

// Step a: Define the structure of type machine
typedef struct machine {
    int name;
    char *memory;
} machine;

int main() {
    // Step b: Create a pointer mp of type machine and assign values
    machine *mp = (machine *)malloc(sizeof(machine)); // Allocate memory for the machine structure
    mp->name = 1;
    mp->memory = NULL;

    // Step c: Display the content of mp
    printf("Initial content of mp:\n");
    printf("Name: %d\n", mp->name);
    printf("Memory: %s\n", (mp->memory != NULL) ? mp->memory : "NULL");

    // Step d: Create a character array CPUtype and assign a value to memory field
    char CPUtype[] = "64 bit memory";
    mp->memory = CPUtype; // Assign the address of CPUtype to memory field

    // Step e: Assign the value 10 to the name field using the pointer mp
    mp->name = 10;

    // Step f: Display the updated content of mp
    printf("\nUpdated content of mp:\n");
    printf("Name: %d\n", mp->name);
    printf("Memory: %s\n", (mp->memory != NULL) ? mp->memory : "NULL");

    // Free the allocated memory for machine structure
    free(mp);

    return 0;
}

