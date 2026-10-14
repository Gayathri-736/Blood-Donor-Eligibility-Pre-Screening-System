
#include <stdio.h>

int main() {
    int age, daysSinceDonation;
    float weight, hemoglobin;

    printf("BLOOD DONOR PRE-SCREENING SYSTEM\n");

    printf("Enter age (years): ");
    scanf("%d", &age);

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter hemoglobin (g/dL): ");
    scanf("%f", &hemoglobin);

    printf("Days since last blood donation: ");
    scanf("%d", &daysSinceDonation);

    printf("\n--- Donor Screening Report ---\n");

    if (age < 18 || age > 65) {
        printf("Age: Outside example criteria\n");
    } else if (weight < 50) {
        printf("Weight: Below example threshold\n");
    } else if (hemoglobin < 12.5) {
        printf("Hemoglobin: Below example threshold\n");
    } else if (daysSinceDonation < 90) {
        printf("Donation interval: Too short for this example\n");
    } else {
        printf("Basic example criteria satisfied\n");
    }

    printf("\nNote: This is an educational pre-screening result.\n");
    printf("Final eligibility must be decided by a blood bank.\n");

    return 0;
}
