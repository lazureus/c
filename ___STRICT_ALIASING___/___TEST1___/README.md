SOURCE:
    http://cellperformance.beyond3d.com/articles/2006/06/understanding-strict-aliasing.html

PURPOSE:
    Test code checks is GCC or other compilers are able to through a warning when there
    is strict-aliasing rule violation.

CONCLUSION:

    GCC compiler checks for the strict-aliasing rule when -fstrict-alising option is activated,
    this is automatically done on the optimization levels equal or greater than -O2, for the
    -Osize option is also turned on. Warnings can be invoked when -Wstrict-alising is used, it's
    automatically enabled with the -Wall switch. More detailed information, please refer to the

        man gcc

    Compilation of the test code with the -O0 as well as -O3 optimization was successful, and went without
    warnings. Program runs as expected.
    Compitlation of the test code with the -O3 and with -Wstrict-aliasing=2 was successful, however there
    was one warning invoked such as:

        main.c:7:5: warning: dereferencing type-punned pointer might break  strict-aliasing rules

    Nevertheless program runs as expected.

    In the article it's written that more likely program won't work because it's violating
    strict-aliasing rule, which causes undefined behavior. I cannot confirm it because I didn't
    found platform on which this code faild.
