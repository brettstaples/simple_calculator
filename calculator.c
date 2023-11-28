#include <stdio.h>

int startAndKeepUsingCalculator(int* isStart);
void printCalculatorOptions();
int getCalculatorInput();
void mathChoice(int calculatorButtonPressed);
void clearKeyboardBuffer();

int main(int argc, char* argv[]) {
    int isStart = 1;
    int useCalculator = startAndKeepUsingCalculator(&isStart);
    while (useCalculator) {
//        printCalculatorOptions();
//        int calculatorButtonPressed = getCalculatorInput();
//        mathChoice(calculatorButtonPressed);
        useCalculator = startAndKeepUsingCalculator(&isStart);
    }

    return 0;
}

void clearKeyboardBuffer() {
    char ch;
    do {
        scanf("%c", &ch);
    } while (ch != '\n');
}

int startAndKeepUsingCalculator(int* isStart) {
    char choice;
    if (*isStart) {
        printf("Would you like to use the calculator, (y)es or (n)o: ");
        *isStart = 0;
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

void printCalculatorOptions() {


}
int getCalculatorInput() {

    return 1;
}

void mathChoice(int calculatorButtonPressed) {


}