#include <stdio.h>
#include <math.h>
 
int main(void) {
    
    float notes, aux;
    scanf("%f", &notes);

    aux= remainder(notes,10);
    printf("Note: %f\n", aux);
	return 0;
}