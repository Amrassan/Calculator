#include <stdio.h>
#include <string.h>

int main() 
{
    int operationNum = 0;
    int acceptedAns = 0;
    char operationName[20];    
    float num1, num2, num3;


    puts("Welcome to the calculator program!\n"
           "1.Addition\t 2.Subtraction\t 3.Multiplication\t 4.Division\t 5.Modulus\n"
           "Enter the number of the operation you would like to perform: ");
           
    do {           
        scanf("%d", &operationNum);
        
        if (operationNum >= 1 && operationNum <= 5)
        {
            acceptedAns = 1;
        }
        else 
        {
            puts("Your choice should be between 1-5. Try again!");
        }
    } while (acceptedAns == 0);

    switch(operationNum) 
    {
        case 1:
            strcpy(operationName, "addition");
            break;
        case 2:
            strcpy(operationName, "subtration");
            break;
        case 3:
            strcpy(operationName, "multiplication");
            break;
        case 4:
            strcpy(operationName, "division");
            break;
        case 5:
            strcpy(operationName, "module");
            break;
        default:;
    }        

    printf("Type in the two numbers you want to perform the %s on:\n", operationName);
    scanf("%f %f", &num1, &num2);    

    switch(operationNum) 
    {
        case 1:
            num3 = num1 + num2;
            break;
        case 2:
            num3 = num1 - num2;
            break;
        case 3:
            num3 = num1 * num2;
            break;
        case 4:
            if (num2 == 0) 
            {
                puts("Division by zero is not possible!");        
                acceptedAns = 0;
            }
            else 
            {
                num3 = num1 / num2;
            }
            break;
        case 5:
            num3 = (int) num1 % (int) num2;
            break;
        default:;
    }
    
    if (acceptedAns == 1)
    {
        printf("The %s of %.2f and %.2f is %.2f", operationName, num1, num2, num3);
    }
    
    return 0;    
}
