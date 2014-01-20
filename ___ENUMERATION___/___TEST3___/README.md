SOURCE:

    Own idea

PURPOSE:
    Test aim is to check will compiler throw a warning when we initialize enum struct member with int
    above the enum range. The enum value however was wrongly initilized implicitly with int value of 0
    by setting only one struct member through designated initilizer.

CONCLUSION:

    Neither GCC nor Clang compiler didn't throw a warning about wrongly initialized member of the structure.
    The only one warning which can be a little helpful was warning from the splint telling us:

        main.c|39 col 5 warning| Initializer block for a has 1 field, but MY_color_data_t has 5 fields: <error> [c/splint]
