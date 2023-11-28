#include <stdio.h>

int startCalculator();
void printCalculatorOptions();
int getCalculatorInput();
void mathChoice(int calculatorButtonPressed);
void keepUsingCalculator(int* useCalculator);
void clearKeyboardBuffer();

int main(int argc, char* argv[]) {
    int useCalculator = startCalculator();
    while (useCalculator) {
        printf("In calc");
        return 0;
//        printCalculatorOptions();
//        int calculatorButtonPressed = getCalculatorInput();
//        mathChoice(calculatorButtonPressed);
//        keepUsingCalculator(&useCalculator);
    }
    printf("Out calc");
    return 0;

}

void clearKeyboardBuffer() {
    char ch;
    do {
        scanf("%c", &ch);
    } while (ch != '\n');
}

int startCalculator() {
    char choice;
    printf("Would you like to use the calculator, (y)es or (n)o: ");
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

void keepUsingCalculator(int* useCalculator) {


}