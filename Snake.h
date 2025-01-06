//
// Created by peter on 27/12/2024.
//

#ifndef SNAKE_H
#define SNAKE_H
// Fatter stadig ikke hvordan man bruger en .h rigtigt :'(
#endif //SNAKE_H

// Array of strings: Char arr[3][10], den første "kasse" betyder hvor mange strings og den anden "kasse" betyder længden for hver streng. Hvis det skal være en pointer, så sætter man bare "*" foran.
// Det vil sådan ud char arr[2][10] = {Wallah,wallah,walh}
// Hvis man skal tælle et arr[] = {0,1,2,3,4} Meget vigtigt at den første tælles som 0.

// ++i starter fra 1, hvor i++ starter fra 0.

// % Hvis man skal regne det i hovedet, er det vigtigt at finde "resten" for eksempel 15%4, hvor tæt kan du få 4 op uden at ramme over 15? Du kan få op til 12 (4*3), derved tager du "resten" op til 15 hvilket er 3. Svaret er 3.

// %d for int (tildelt)
// %c for char
// %lf for double, kan skrive det med stort hvis det skal være en lang double.
// %p for printe det der er gemt i en pointer
// %s for at udprinte en "string"
// %lu for not signed int.

// >>. Håber det ikke det her bliver et spørgsmål, her er hvordan man regner det : Example: Let’s take a=21; which is 10101 in Binary Form. Now, if a is right shifted by 1 i.e a = a >> 1 then a will become a=a/(2^1). Thus, a = a/(2^1) = 10 which can be written as 1010.
// << The left-shift by 1 and right-shift by 1 are equivalent to the product of the first term and 2 to the power given element(1<<3 = 1*pow(2,3)) and division of the first term and second term raised to power 2 (1>>3 = 1/pow(2,3)) respectively. 
// a << 1 = 42
// a >> 1 = 10 

struct PackedStruct { // Husk, man skal lægge de forskellige variabler sammen.
    char a; // 1 byte
    int b; // 4 bytes
    double c; // 8 bytes
};

// En parameter, som optræder i en funktionsdefinition, kaldes en formel parameter. En formel parameter er et navn.

// En parameter, som optræder i et kald af en funktion, kaldes en aktuel parameter. En aktuel parameter er et udtryk, som beregnes inden det overføres
// Eksempel;
// type function_name (formal_parameters){
// declarations
// commands}

// Forskel på global og lokal. Er om de er defineret i en funktion eller ej, for eksempel hvis de er defineret udenfor "main" er de global.


// function_name (actual_parameters)


// Pointers:
// Dereferencing operator(*) used to declare pointer variable and access the value stored in the address.
// Address operator(&) used to returns the address of a variable or to access the address of a variable to a pointer



// The continue statement in C is a jump statement used to skip the current iteration of a loop and continue with the next iteration.
// It is used inside loops (for, while, or do-while) along with the conditional statements to bypass the remaining statements in the current iteration and move on to next iteration.

// The strlen() function in C calculates the length of a given string. The strlen() function is defined in string.h header file. It doesn’t count the null character ‘\0’.



//  DO while løkkke = do {
// Body of the loop
// Update expression} while (condition);

//malloc():
// The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size.
// It returns a pointer of type void which can be cast into a pointer of any form.
// It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially.

//calloc():
//“calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type.
//It is very much similar to malloc() but has two different points and these are:
//It initializes each block with a default value ‘0’.
//It has two parameters or arguments as compare to malloc().

//free():
// At frigive eller deallokere hukommelsesblokke, som tidligere er allokeret af calloc(), malloc() eller realloc() funktioner.
// Det frigør hukommelsesblokkene og returnerer hukommelsen til heap.
// Bruges for det meste efter de tre tidligere nævnte funktioner eller efter man har brugt hukommelsen til det man ønskede. Man kan også bruge det i bunden af sit program inden man afslutter det med en "return".
// Der findes også en free(arr), som frigiver et array fra hukommelsen. Den bruges gerne ligesom den anden.

//realloc():
// “realloc” or “re-allocation” method in C is used to dynamically change the memory allocation of a previously allocated memory. In other words, if the memory previously allocated with the help of malloc or calloc is insufficient, realloc can be used to dynamically re-allocate memory.
//  Re-allocation of memory maintains the already present value and new blocks will be initialized with the default garbage value.

// == Checks if the values of two operands are equal or not. If yes, then the condition becomes true.
// ++ læg sammen
// -- træk fra
// ! ikke
// <= Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true.
// >= Checks if the value of left operand is greater than or equal to the value of right operand. If yes, then the condition becomes true.
// && Called Logical AND operator. If both the operands are non-zero, then the condition becomes true.
// || eller
// += Add AND assignment operator. It adds the right operand to the left operand and assign the result to the left operand.
// -= Subtract AND assignment operator. It subtracts the right operand from the left operand and assigns the result to the left operand.
// sizeof() Returns the size of a variable. Eksempel sizeof(a), where a is integer, will return 4.
// & Binary AND Operator copies a bit to the result if it exists in both operands.
// ? : .Conditional Expression - Eksempel: If Condition is true ? then value X : otherwise value Y
