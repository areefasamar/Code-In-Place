#include <stdio.h>
int main(void)
{
    int students, subjects, terms = 3, i, j, k, topStudent = 0 ;
    float marks[5][4][3], termAvg[5][3], overallAvg[5], highestAvg = 0.0  ;  

    printf("Enter number of students (up to 5): ");
    scanf("%d", &students);

    printf("Enter number of subjects (up to 4): ");
    scanf("%d", &subjects);

    printf("\nEnter marks for each student, subject, and term:\n");
    for (i = 0; i < students; i++)
    {
        for (k = 0; k < terms; k++)
        {
            printf("\n--- Student %d : Term %d ---\n", i + 1, k + 1);
            for (j = 0; j < subjects; j++)
            {
                printf("Enter marks for Subject %d: ", j + 1);
                scanf("%f", &marks[i][j][k]);
            }
        }
    }

    for (i = 0; i < students; i++)
    {
        float totalAllTerms = 0.0;
        for (k = 0; k < terms; k++)
        {
            float termTotal = 0.0;
            for (j = 0; j < subjects; j++)
            {
                termTotal += marks[i][j][k];
            }
            termAvg[i][k] = termTotal / subjects;  
            totalAllTerms += termTotal;
        }
        overallAvg[i] = totalAllTerms / (subjects * terms);
    }

    for (i = 0; i < students; i++)
    {
        if (overallAvg[i] > highestAvg)
        {
            highestAvg = overallAvg[i];
            topStudent = i;
        }
    }

    printf("\n--- Averages per Student ---\n");
    for (i = 0; i < students; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        for (k = 0; k < terms; k++)
        {
            printf("  Term %d Average: %.2f\n", k + 1, termAvg[i][k]);
        }
        printf("  Overall Average: %.2f\n", overallAvg[i]);
    }

    float bestTermScore = termAvg[topStudent][0];
    int bestTerm = 0;
    for (k = 1; k < terms; k++)
    {
        if (termAvg[topStudent][k] > bestTermScore)
        {
            bestTermScore = termAvg[topStudent][k];
            bestTerm = k;
        }
    }

    printf("\n----------------------------------------\n");
    printf("Highest Overall Scorer: Student %d\n", topStudent + 1);
    printf("Overall Average: %.2f\n", highestAvg);
    printf("Best Performance: Term %d (Average = %.2f)\n", bestTerm + 1, bestTermScore);
    printf("----------------------------------------\n");

    return 0;
}
