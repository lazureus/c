SOURCE:

    [ Efficient C language tips part 1] (http://embeddedgurus.com/stack-overflow/2008/06/efficient-c-tips-1-choosing-the-correct-integer-size/)

PURPOSE:
    Test aim is to prove that compiler will throw a warning about comparision to the value greater than
    type can hold.

CONCLUSION:

    GCC compiler:

        Warning was thrown for case when there is always true comparision with e.g. 0 or other numerical value,define
        , however it doesn't throw a warning if comparision is performed against some const variable or usual variable.

    CLANG compiler:

        The same situation occurs for the CLANG compiler, warnings were thrown for a always true comparision.

    GHS compiler:

        No warning.

    SPLINT:

        No warning.

    OCLINT:

        There were two warnings saying that there is always true comparision :

            main.c|18 col 20 warning| comparison of constant 3000 with expression of type 'uint_fast8_t' 
            (aka 'unsigned char') is always true [-Wtautological-constant-out-of-range-compare] [c/oclint]
