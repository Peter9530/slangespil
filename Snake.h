//
// Created by peter on 27/12/2024.
//

#ifndef SNAKE_H
#define SNAKE_H
// Fatter stadig ikke hvordan man bruger en .h rigtigt :'(
#endif //SNAKE_H

// Array of strings: Char arr[3][10], den første "kasse" betyder hvor mange strings og den anden "kasse" betyder længden for hver streng. Hvis det skal være en pointer, så sætter man bare "*" foran.
// Det vil sådan ud char arr[2][10] = {Wallah,wallah,walh}

// ++i starter fra 1, hvor i++ starter fra 0.

// %d for int (tildelt)
// %c for char
// %lf for double, kan skrive det med stort hvis det skal være en lang double.
// %p for printe det der er gemt i en pointer
// %s for at udprinte en "string"
// %lu for not signed int.

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