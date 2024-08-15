// ***
// *** You MUST modify this file
// ***

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void eliminate(int n, int k)
{
    // 1. Memory Allocation:
    // Allocate an array of 'n' elements to represent the people.
    // A 'char' type is sufficient because you only need to store a boolean state
    // (e.g., 0 for "still in" and 1 for "eliminated").
    // dynamically allocate memory for 'n' characters.
    char *cake_fans; // Declare a pointer to char

    // 2. Error Handling:
    // Check if the memory allocation failed (i.e., if malloc returned NULL).
    // If it failed, print an error message to stderr and exit the program.


    // 3. Initialize Variables:
    // `eliminated`: Counts how many people have been removed so far.
    // The loop should continue until `n - 1` people are eliminated, leaving one survivor.
    int eliminated = 0;

    // `step`: Determines the direction of counting.
    // It should start as 1 (forward) and alternate to -1 (backward) after each elimination.
    int step = 1;

    // `iter`: Represents the current person's index in the circle (0 to n-1).
    // This is the index of the person currently being considered.
    int iter = 0;

    // `counter`: Keeps track of the count towards 'k'.
    // When this counter reaches 'k', the current person is eliminated.
    int counter = 0;

    // 4. Main Elimination Loop:
    // The loop continues as long as not everyone except one person has been eliminated.
    while (eliminated < n - 1)
    {
        // a. Skip Eliminated People:
        // If the person at the current `iter` index has already been eliminated (marked with 1),
        // increment `iter` by `step` and handle wrap-around without incrementing `counter`.
        // Then, use `continue` to restart the loop iteration.


        // b. Count Current Person:
        // If the person at `iter` is still in the game, increment `counter`.


        // c. Check for Elimination:
        // If `counter` reaches `k`, it's time to eliminate someone.
        if (counter == k)
        {
            // Reset `counter` for the next round of counting.

            // Change `step` direction: If it was 1, make it -1; if it was -1, make it 1.
            // This can be done with a ternary operator or an if-else statement.

            // Mark the current person at `iter` as eliminated in your `cake_fans` array.

            // Increment the `eliminated` count.

            // Print the index of the eliminated person.
            // Remember that array indices are 0-based, but people are typically numbered 1 to 'n'.
            
        }

        // d. Move to Next Person:
        // Update `iter` by adding `step`.

        // Handle wrap-around for `iter`:
        // If `iter` goes below 0, wrap it to the end of the array (`n - 1`).
        // If `iter` goes above `n - 1`, wrap it back to the beginning of the array (0).

    }

    // 5. Find and Print the Last Remaining Person:
    // After the loop, exactly one person remains.
    // Iterate through the `cake_fans` array from index 0 until you find the person
    // who is not marked as eliminated (i.e., their value is 0).
    // Print their index (remembering the 1-based numbering).
    

    // 6. Memory Deallocation:
    // Free the dynamically allocated memory to prevent memory leaks.
    
}