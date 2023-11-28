#include <stdio.h>

int startAndKeepUsingCalculator(int isStart);
void CalculatorOptions(int* isStart);
void clearKeyboardBuffer();
void addition();
void subtraction();
void multiplication();
void division();
void squareRoots();
void logarithms();

int main(int argc, char* argv[]) {
    int isStart = 1;
    int useCalculator = startAndKeepUsingCalculator(isStart);
    while (useCalculator) {
        CalculatorOptions(&isStart);
        useCalculator = startAndKeepUsingCalculator(isStart);
    }

    return 0;
}

void clearKeyboardBuffer() {
    char ch;
    do {
        scanf("%c", &ch);
    } while (ch != '\n');
}

int startAndKeepUsingCalculator(int isStart) {
    char choice;
    if (isStart) {
        printf("Would you like to use the calculator, (y)es or (n)o: ");
    } else {
        printf("Would you like to keep using the calculator, (y)es or (n)o: ");
    }
    while (1) {
        scanf("%c", &choice);
        clearKeyboardBuffer();
        switch (choice) {
            case 'y':
            case 'Y':
                return 1;
            case 'n':
            case 'N':
                return 0;
            default:
                printf("Incorrect answer, (y)es or (n)o: ");
        }
    }
}

void CalculatorOptions(int* isStart) {
    int noc;
    int choice;
    if (*isStart) {
        printf("\nYou are now using the calculator\n\n");
        *isStart = 0;
    }

    while (1) {
        do {
            printf("What would you like to do,\n"
                   "0). Quit\t1). Addition\n"
                   "2). Subtraction\t3). Multiplication\n"
                   "4). Square Root\t5). Logs\nYour choice:  ");
            noc = scanf("%d", &choice);
            clearKeyboardBuffer();
            printf("\n");
        } while (noc < 1 || choice < 0 || choice > 5);

        switch (choice) {
            case 0:
                return;
                break;
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                squareRoots();
                break;
            case 6:
                logarithms();
                break;
        }
    }
}

void addition() {
    printf("add\n");

}

void subtraction() {
    printf("sub\n");

}

void multiplication() {
    printf("mult\n");

}

void division() {
    printf("div\n");

}

void squareRoots() {
    printf("sqr\n");

}

void logarithms() {
    printf("log\n");

}
