/*
* This is a C program to take and store and display the students details
*/

#include <stdio.h>
#include <string.h>


// Student data-type
struct Students {
    char name[50];  // Name
    char roll[15];  // Roll
    char gender[10];  // Gender
} student;


void main() {
    // Declaring string variables
    char inp_student[50];
    char inp_roll[15];
    char inp_gender[10];

    // Taking inputs
    printf("Enter Student's name: ");
    gets(inp_student);
    printf("Enter roll no: ");
    gets(inp_roll);
    printf("Enter Gender: ");
    gets(inp_gender);

    // Storing it in Students data-type
    strcpy(student.name, inp_student);
    strcpy(student.roll, inp_roll);
    strcpy(student.gender, inp_gender);

    // Displaying output
    printf("\n\n• Name: %s\n", student.name);
    printf("• Roll No.: %s\n", student.roll);
    printf("• Gender: %s", student.gender);

    getch();
}
