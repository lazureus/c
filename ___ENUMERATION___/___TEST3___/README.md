SOURCE:
=======

My own idea

PURPOSE:
========
    Test aim is to check will compiler throw a warning
    when we initialize enum struct member with intabove
    the enum range. The enum value however was wrongly
    initilized implicitly with int value of 0 by setting
    only one struct member through designated initilizer.

CONCLUSION:
===========

* _**GCC compiler:**_

    No warning.

* _**CLANG compiler:**_

    No warning.

* _**GHS compiler:**_

    Not tested.

* _**SPLINT:**_

    Splint telling us:

    >main.c|39 col 5 warning| Initializer block for a has 1 field, but MY_color_data_t has 5 fields: <error> [c/splint]

* _**OCLINT:**_

    Not tested.
