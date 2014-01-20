SOURCE:

    Own idea

PURPOSE:
    Test aim is to check will compiler throw a warning when we initialize enum struct member with int
    above the enum range.

CONCLUSION:

    GCC compiler throw no warning about wrongly initialized member of the structure.
    Clang compiler throw a following warning:

        main.c:40:16: warning: integer constant not in range of enumerated type 'rgb_color_t' [-Wassign-enum]

    Additionally in test were used different static code analysis tools, none of them throw the warning.
