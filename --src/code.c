#include <stdio.h>
#include <stdlib.h>

// Convert history stored in memory
struct History {
    char type[30];
    float input;
    float output;
    char units[50];
} history[100];

int historyCount = 0;


void mainMenu();
void lengthConverter();
void temperatureConverter();
void weightConverter();
void timeConverter();
void saveHistory(struct History h);
void viewHistory();
void clearHistory();
void credits();

int main() {
    mainMenu();
    return 0;
}


    int choice;

    while (1) {
        printf("\n\n==== UNIT CONVERTER PROJECT ====\n");
        printf("1. Length Converter\n");
        printf("2. Temperature Converter\n");
        printf("3. Weight Converter\n");
        printf("4. Time Converter\n");
        printf("5. View History\n");
        printf("6. Clear History\n");
        printf("7. Credits\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: lengthConverter(); break;
            case 2: temperatureConverter(); break;
            case 3: weightConverter(); break;
            case 4: timeConverter(); break;
            case 5: viewHistory(); break;
            case 6: clearHistory(); break;
            case 7: credits(); break;
            case 8: 
                printf("\nThank you for using Unit Converter!\n");
                exit(0);
            default:
                printf("\nInvalid Choice! Try again.\n");
        }
    }
}


void lengthConverter() {
    int ch;
    float value, result;
    struct History h;

    printf("\n--- Leangth Converter ---\n");
    printf("1. Meter → Kilometer\n");
    printf("2. Kilometer → Meter\n");
    printf("3. Centimeter → Meter\n");
    printf("4. Meter → Centimeter\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    printf("Enter value: ");
    scanf("%f", &value);

    switch (ch) {
        case 1: result = value / 1000; sprintf(h.units, "m to km"); break;
        case 2: result = value * 1000; sprintf(h.units, "km to m"); break;
        case 3: result = value / 100;  sprintf(h.units, "cm to m"); break;
        case 4: result = value * 100;  sprintf(h.units, "m to cm"); break;
        default:
            printf("\nInvalid Option!\n"); return;
    }

    printf("Converted Value = %.3f\n", result);

    sprintf(h.type, "Length");
    h.input = value;
    h.output = result;
    saveHistory(h);
}


void temperatureConverter() {
    int ch;
    float value, result;
    struct History h;

    printf("\n--- Temperature Converter ---\n");
    printf("1. Celsius → Fahrenheit\n");
    printf("2. Fahrenheit → Celsius\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    printf("Enter value: ");
    scanf("%f", &value);

    switch (ch) {
        case 1: result = (value * 9/5) + 32; sprintf(h.units, "C to F"); break;
        case 2: result = (value - 32) * 5/9; sprintf(h.units, "F to C"); break;
        default:
            printf("Invalid!\n"); return;
    }

    printf("Converted Value = %.2f\n", result);

    sprintf(h.type, "Temperature");
    h.input = value;
    h.output = result;
    saveHistory(h);
}


void weightConverter() {
    int ch;
    float value, result;
    struct History h;

    printf("\n--- Weight Converter ---\n");
    printf("1. Kilogram → Gram\n");
    printf("2. Gram → Kilogram\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    printf("Enter value: ");
    scanf("%f", &value);

    switch (ch) {
        case 1: result = value * 1000; sprintf(h.units, "kg to g"); break;
        case 2: result = value / 1000; sprintf(h.units, "g to kg"); break;
        default:
            printf("Invalid!\n"); return;
    }

    printf("Converted Value = %.2f\n", result);

    sprintf(h.type, "Weight");
    h.input = value;
    h.output = result;
    saveHistory(h);
}


void timeConverter() {
    int ch;
    float value, result;
    struct History h;

    printf("\n--- Time Converter ---\n");
    printf("1. Hours → Minutes\n");
    printf("2. Minutes → Hours\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    printf("Enter value: ");
    scanf("%f", &value);

    switch (ch) {
        case 1: result = value * 60; sprintf(h.units, "hr to min"); break;
        case 2: result = value / 60; sprintf(h.units, "min to hr"); break;
        default:
            printf("Invalid!\n"); return;
    }

    printf("Converted Value = %.2f\n", result);

    sprintf(h.type, "Time");
    h.input = value;
    h.output = result;
    saveHistory(h);
}


void saveHistory(struct History h) {
    if (historyCount < 100) {
        history[historyCount] = h;
        historyCount++;
    }
}


void viewHistory() {
    if (historyCount == 0) {
        printf("\nNo history available!\n");
        return;
    }

    printf("\n----- Conversion History -----\n");
    for (int i = 0; i < historyCount; i++) {
        printf("%d. %s | Input: %.2f | Output: %.2f | Units: %s\n",
            i + 1,
            history[i].type,
            history[i].input,
            history[i].output,
            history[i].units
        );
    }
}


void clearHistory() {
    historyCount = 0;
    printf("\nHistory Cleared!\n");
}


void credits() {
    printf("\nProject By: Your Name\n");
    printf("Thanks for using the Unit Converter!\n");
}
