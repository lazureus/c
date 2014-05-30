SOURCE:
=======

[ Efficient C language tips part 1] (http://embeddedgurus.com/stack-overflow/2008/06/efficient-c-tips-1-choosing-the-correct-integer-size/)

PURPOSE:
========

Test checks if compiler warn about comparision to the value greater than type can hold.

CONCLUSION:
===========

* _**GCC compiler:**_

    GCC thrown following warning when there was comparision to the const :

    >main.c:16:5: warning: comparison is always true due to limited range of data type [-Wtype-limits]
    >main.c:18:9: warning: comparison is always true due to limited range of data type [-Wtype-limits]

    However it doesn't throw a warning if comparision is performed against variables with/without const type qualifier.

* _**CLANG compiler:**_

    CLANG thrown following warning when there was comparision to the const:

    >main.c:16:16: warning: comparison of constant 300 with expresion of type 'uint8_t' (aka 'unsigned char')
    >is always true [-Wtautological-constant-out-of-range-compare]
    >
    >main.c:18:20: warning: comparison of constant 3000 with expresion of type 'uint_fast8_t' (aka 'unsigned char')
    >is always true [-Wtautological-constant-out-of-range-compare]

    However it doesn't throw a warning if comparision is performed against variables with/without const type qualifier.

* _**GHS compiler:**_

    No warning.

* _**SPLINT:**_

    No warning.

* _**OCLINT:**_

    There were two warnings saying that there is always true comparision.

