#include<stdio.h>
int main(){

    int length, breadth;
    // prostho er nam breadth/width ekla bollei hoy
    printf("Enter the value of Length & Breadth: ");
    
    scanf("%f%f", &length, &breadth); 
    // input nilam, doirgho ar prostho variable e value rakhlam

    int area = length * breadth;
    // ayatokhetro er khetrofol er sutro = doirgho * prostho ;

    printf("\nArea of a Rectangle: %f\n", area);
    
    return 0;
}