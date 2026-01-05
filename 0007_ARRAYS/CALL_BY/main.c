#include <stdio.h>

// Call by Reference function
void printMemoryAddressAndValue(float *value){
    printf("\nMEMORY ADDRESS: \t%p", value);
    printf("\nVALUE: \t%5.2f", *value);
}

// Call by Value function
float addValue(float aValue, float bValue){
    return aValue + bValue;
}

int main()
{
    float myFloat = 42.42f;

    printMemoryAddressAndValue(&myFloat);

    float userInput = 0.0f;
    printf("Enter a value (float) to add: ");
    scanf("%f",&userInput);

    float newValue = addValue(myFloat, userInput);
    printMemoryAddressAndValue(&newValue);

    return 0;
}
