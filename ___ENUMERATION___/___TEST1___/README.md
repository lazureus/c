SOURCE:

    Own idea

PURPOSE:
    Test aim is to check will compiler throw a warning when we pass integer above the enum range which function
    takes as arguments.

CONCLUSION:

    GCC compiler throw no warning about passing int value above the enum defined range.
    Clang compiler throw a following warning:

        main.c:38:11: warning: integer constant not in range of enumerated type 'rgb_color_t' [-Wassign-enum]

    Additionally in test were used different static code analysis tools, one of them the splint throw a warning:

        main.c|38 col 11 warning| Function hello expects arg 1 to be rgb_color_t gets int: 4 [c/splint]

    However this warning was manifested against mismatched types passed to the function.

