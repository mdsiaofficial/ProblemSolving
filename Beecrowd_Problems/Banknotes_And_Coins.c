#include <stdio.h>
#include <math.h>
 
int main(void) {
    
    float notes, aux;
    scanf("%f", &notes);

    aux= remainder(notes,10.0);
    printf("Note: %.1f\n", aux);

    
	return 0;
}