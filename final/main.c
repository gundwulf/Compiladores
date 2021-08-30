#include <stdio.h>

#include "input.h"

#include "input.c"

#include "output.h"

#include "errors.h"

#include "scanner1.h"

void initInput();

int main()

{

    char name = 'A';

    error("'%c' is not a variable", name);

    printf("%c", getName());

    match('=');

    printf("%c", getNum());

    match('+');

    printf("%c", getName());

    return 0;
}

void initInput()

{
    nextChar();
}