#include <stdio.h>

#define NUM_STUDENTS 5

typedef struct {
    char name[20];
    char email[30];
    float score;
    char grade;
} Student;

char calculateGrade(float score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

float calculateAverageScore(Student students[], int num_students) {
    float total = 0.0;
    for (int i = 0; i < num_students; i++) {
        total += students[i].score;
    }
    return total / num_students;
}

int main() {
    Student students[NUM_STUDENTS] = {
        {"John", "john@alustudent.com", 80.0, ' '},
        {"Steve", "steve@alustudent.com", 78.4, ' '},
        {"Sarah", "sarah@alustudent.com", 92.0, ' '},
        {"Mable", "mable@alustudent.com", 82.5, ' '},
        {"Diana", "diana@alustudent.com", 67.9, ' '}
    };

    for (int i = 0; i < NUM_STUDENTS; i++) {
        students[i].grade = calculateGrade(students[i].score);
    }

    float averageScore = calculateAverageScore(students, NUM_STUDENTS);

    printf("Student Details:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Name: %s, Email: %s, Score: %.2f, Grade: %c\n", 
               students[i].name, students[i].email, students[i].score, students[i].grade);
    }

    printf("\nAverage Score: %.2f\n", averageScore);

    return 0;
}
