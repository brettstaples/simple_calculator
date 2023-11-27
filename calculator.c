#include <stdio.h>

void startCalculator(int* onButton);
void printCalculatorOptions();
int getCalculatorInput();
void mathChoice(int calculatorButtonPressed);
void keepUsingCalculator(int* useCalculator);
void clearKeyboardBuffer();

int main(int argc, char* argv[]) {
    int useCalculator;
    startCalculator(&useCalculator);
    while (useCalculator) {
        printCalculatorOptions();
        int calculatorButtonPressed = getCalculatorInput();
        mathChoice(calculatorButtonPressed);
        keepUsingCalculator(&useCalculator);
    }

    /*add
     * sub
     * mult
     * div
     * log
     * sqrt */

	return 0;
}

void clearKeyboardBuffer() {
    char ch;
    do {
        scanf("%c", &ch);
    } while (ch != '\n');
}

void startCalculator(int* onButton) {
    printf("Would you like to use the calculator, (y)es or (n)o: ");
    scanf()

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