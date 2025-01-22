#include <stdio.h>
#include <string.h>

void Sort(char names[][50], int ages[], int n);
float AvAge(int ages[], int n);
int Young(int ages[], int n);
int Oldest(int ages[], int n);

int main() {
    
    char names[10][50] = {
        "Alice Benson", "Bob Smith", "Charlie Brown", "Daisy Miller",
        "Ethan David", "Fiona Harris", "George Ron", "Hannah White",
        "Isaac Moore", "Julia Taylor"
    };
    int ages[10] = {20, 22, 19, 21, 23, 20, 22, 30, 19, 21};

    Sort(names, ages, 10);

    
    float Av = AvAge(ages, 10);
    int young = Young(ages, 10);
    int old = Oldest(ages, 10);

    printf("Sorted list of students:\n\n");
    for (int i = 0; i < 10; i++) {
        printf("%s (Age: %d)\n", names[i], ages[i]);
    }

    printf("\nAverage age: %.2f\n", Av);
    printf("Youngest age: %d\n", young);
    printf("Oldest age: %d\n", old);

    return 0;
}


void Sort(char names[][50], int ages[], int n) {
    char tempName[50];
    int tempAge;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                
                strcpy(tempName, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], tempName);

                tempAge = ages[j];
                ages[j] = ages[j + 1];
                ages[j + 1] = tempAge;
            }
        }
    }
}

float AvAge(int ages[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ages[i];
    }
    return (float)sum / n;
}

int Young(int ages[], int n) {
    int youngest = ages[0];
    for (int i = 1; i < n; i++) {
        if (ages[i] < youngest) {
            youngest = ages[i];
        }
    }
    return youngest;
}

int Oldest(int ages[], int n) {
    int oldest = ages[0];
    for (int i = 1; i < n; i++) {
        if (ages[i] > oldest) {
            oldest = ages[i];
        }
    }
    return oldest;
}
