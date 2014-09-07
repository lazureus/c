SOURCE:
======

My own idea

PURPOSE:
========

Test aim is to check will compiler throw a warning when we initialize enum struct member with int above the enum range.

CONCLUSION:
===========

* _**GCC compiler:**_

    No warning.


* _**CLANG compiler:**_

    CLANG thrown compiler following warning:

    >main.c:40:16: warning: integer constant not in range of enumerated type 'rgb_color_t' [-Wassign-enum]

    Additionally in test were used different static code analysis tools, none of them throw the warning.

* _**GHS compiler:**_

    Not tested.

* _**SPLINT:**_

    Not tested.

* _**OCLINT:**_

    Not tested.
