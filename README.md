# student-grades
Student Grades

This program is designed to generate a histogram of student grades for an assignment. It starts by accepting grades from the user, one at a time, and storing each grade as an integer in a vector. The user continues to input grades until they enter -1, which signals the end of input.

Once all the grades are collected, the program processes the vector to calculate the histogram. The histogram counts how many times each grade appears, starting from the minimum possible grade of 0 up to the highest grade that was entered. To store the counts for each grade, the program uses a dynamic array.

Finally, the program outputs the histogram to the console, showing the frequency of each grade. For example, if the grades 20, 30, 4, 20, 30, and 30 are entered, the output would display how many times each grade appears, such as “Number of 4’s: 1,” “Number of 20’s: 2,” and “Number of 30’s: 3.” This helps visualize the distribution of grades among students for the assignment.
