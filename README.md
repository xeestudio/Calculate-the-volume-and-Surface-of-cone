Calculate the Volume, Slant Height and Surface Area of a cone

In this exercise, your program should take the vertical height and cone radius.With these values, it then calculates
and displays the cone’s volume and surface.
a) Step 1: First write code that calculates the volume of a cone. The formula for obtaining the volume is:
volume = π∗radius2∗height
3
! Read the values for the parameters height and radius (as floating point numbers) from the console cin.
! Then the program should check the following: radius and height must be greater than 0. If this is not
the case, the program should print out the error message "invalid input" and quit.
! Otherwise, calculate and display the cone’s volume.
Hint: the number π is defined in the math library as M_PI. To use this in your code, you must use the
directive #include <cmath> at the beginning of your code.
b) Step 2: Now extend the program such that it calculates the slant height using Pythagoras’ theorem
a2 + b2 = c2
where c represents the length of the hypotenuse, and a and b represent the length of the other two sides.
In this exercise a is the radius and b is the height.
Hint: to calculate the square root of a (√a) you can use the C++-function sqrt(a). To use this function you
must use the directive #include <cmath> at the beginning of your code.
! Display the slant height in the console.
c) Step 3: The last step is calculating the cone’s surface as the sum of base area and lateral area. For this
calculation use the following formulas:
• base area (area of a circle) : base Area = π ∗ radius2
• lateral area : lateral Area = π ∗ radius ∗ slant height
! Display both the base area, and the lateral area.
! Finally, display the cone’s surface.
