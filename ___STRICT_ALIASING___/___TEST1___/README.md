SOURCE:
=======

[ Understanding strict aliasing] (http://cellperformance.beyond3d.com/articles/2006/06/understanding-strict-aliasing.html)

PURPOSE:
========

Test code checks are compilers able to throw a warning
when there's strict-aliasing rule violation.

CONCLUSION:
===========

* _**GCC compiler:**_

    GCC compiler checks for the strict-aliasing rule when -fstrict-alising
    option is activated, this is automatically done on the optimization levels
    equal or greater than -O2, for the -Osize option is also turned on.
    Warnings can be invoked when -Wstrict-alising is used, it's automatically
    enabled with the -Wall switch. More detailed information, please refer:

    >man gcc

    Compilation of the test code with the -O0 as well as -O3 optimization
    was successful, and went without warnings. Program runs as expected.
    Compilation of the test code with the -O3 and with -Wstrict-aliasing=2
    was successful, however there was one warning invoked such as:

    >main.c:7:5: warning: dereferencing type-punned pointer might break strict-aliasing rules

    Nevertheless program runs as expected. In the article it's written that
    more likely program won't work because it's violating strict-aliasing rule,
    which causes undefined behavior. I cannot confirm it because I didn't
    found platform on which this code failed.

* _**CLANG compiler:**_

    No warnings in all -O levels, code runs as expected.

* _**GHS compiler:**_

    Not tested.

* _**SPLINT:**_

    Not tested.

* _**OCLINT:**_

    Not tested.
