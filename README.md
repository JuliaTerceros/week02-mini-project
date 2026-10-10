# week02-mini-project
EECE 2140 Mini-Project #01: C++ temperature conversion calculator with input validation, and tests.

Inputs:
The user inputs the a character between F and C, representing the temp unit and the user inputs the temperature values.

Outputs:
The code outputs the conversion (FtoC or CtoF) using the following equations
F = (C * 9.0 / 5.0) + 32.0
C = (F - 32.0) * 5.0 / 9.0
If the inputs are invalid, the program will output an "Invalid input"

Tests:
Test 1: 0 C converts to 32 F
Test 2: 32 F converts to 0 C
Test 3: K 300 produces Invalid input
Test 4: C abc produces Invalid input
