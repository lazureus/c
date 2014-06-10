SOURCE:
=======

My own idea.

PURPOSE:
========

Test check if compiler warn about passing integer above the enum range to function.

CONCLUSION:
===========

* _**GCC compiler:**_

    No warning.

* _**CLANG compiler:**_

    CLANG thrown following warning :

    >main.c:38:11: warning: integer constant not in range of enumerated type 'rgb_color_t' [-Wassign-enum]

* _**GHS compiler:**_

    Not tested.

* _**SPLINT:**_

    SPLINT thrown following warning:

    >main.c|38 col 11 warning| Function hello expects arg 1 to be rgb_color_t gets int: 4 [c/splint]

    However this warning was manifested against mismatched types passed to the function.

* _**OCLINT:**_

    Not tested.
