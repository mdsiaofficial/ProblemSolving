#include <iostream> 
#include <stdio.h> 

main() { 
    int i, n; 

    printf("Enter the number : "); 
    scanf("%d", &n);
    int div;
    printf("\nThe divisors are :\n\n");     
    for(i = 1; i <= n; i++) {
        if(n % i == 0){
            int lel = n % i;
            printf("%d\t", i); 
            
            if(lel%2==0){
                div = lel;
            }
                
        }
            
    }

    cout << endl <<div << endl;
    return 0; 
}