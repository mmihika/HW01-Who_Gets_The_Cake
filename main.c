// ***
// *** DO NOT modify this file
// ***
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void eliminate(int n, int k);

int main(int argc, char **argv)
{
    int valn, valk;
    scanf("%d %d", &valn, &valk);
    if ((valn <= 1) || (valk <= 1))
    {
        fprintf(stderr, "need two numbers greater than 1\n");
        return EXIT_FAILURE;
    }
    eliminate(valn, valk);
    return EXIT_SUCCESS;
}
