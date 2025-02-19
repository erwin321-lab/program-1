#include <stdio.h>

#define N 3 // Number of students
#define M 3 // Number of subjects

void calculateTotalMarks(int marks[][M], int n, int totalMarks[]) {
    for (int i = 0; i < n; i++) {
        totalMarks[i] = 0;
        for (int j = 0; j < M; j++) {
            totalMarks[i] += marks[i][j];
        }
    }
}

void sortStudents(int totalMarks[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (totalMarks[j] < totalMarks[j + 1]) {
                int temp = totalMarks[j];
                totalMarks[j] = totalMarks[j + 1];
                totalMarks[j + 1] = temp;
            }
        }
    }
}

int main() {
    int marks[N][M] = {
        {70, 80, 90},
        {85, 90, 95},
        {60, 70, 75}
    };
    int totalMarks[N];

    calculateTotalMarks(marks, N, totalMarks);
    sortStudents(totalMarks, N);

    for (int i = 0; i < N; i++) {
        printf("Student %d: Total Marks = %d\n", i + 1, totalMarks[i]);
    }

    return 0;
}

