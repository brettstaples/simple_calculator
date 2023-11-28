#include <stdio.h>

void addition();
void calculatorOptions(int* isStart);
void clearKeyboardBuffer();
void division();
void logarithms();
void multiplication();
void subtraction();
int startAndKeepUsingCalculator(int isStart);
int stayInButton();
void squareRoots();


int main(int argc, char* argv[]) {
    int isStart = 1;
    int useCalculator = startAndKeepUsingCalculator(isStart);
    while (useCalculator) {
        calculatorOptions(&isStart);
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

void calculatorOptions(int* isStart) {
    int noc;
    int choice;
    if (*isStart) {
        printf("\nYou are now using the calculator\n");
        *isStart = 0;
    }

    while (1) {
        do {

            printf("\nWhat would you like to do,\n"
                   "0). Quit     \t1). Addition\n"
                   "2). Subtraction\t3). Multiplication\n"
                   "4). Square Root\t5). Logs\nYour choice:  ");
            noc = scanf("%d", &choice);
            clearKeyboardBuffer();
            printf("\n");
        } while (noc < 1 || choice < 0 || choice > 5);


        switch (choice) {
            case 0:
                return;
            case 1:
                do {
                    addition();
                } while (stayInButton());
                break;
            case 2:
                do {
                    subtraction();
                } while (stayInButton());
                break;
            case 3:
                do {
                    multiplication();
                } while (stayInButton());
                break;
            case 4:
                do {
                    division();
                } while (stayInButton());
                break;
            case 5:
                do {
                    squareRoots();
                } while (stayInButton());
                break;
            case 6:
                do {
                    logarithms();
                } while (stayInButton());
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
int stayInButton() {
    char choice;
    printf("Would you like to continue, (y)es or (n)o: ");
    scanf("%c", &choice);
    clearKeyboardBuffer();
    while (1) {
        switch (choice) {
            case 'y':
            case 'Y':
                return 1;
            case 'n':
            case 'N':
                return 0;
            default:
                printf("Would you like to continue, Please type (y)es or (n)o: ");
                scanf("%c", &choice);
                clearKeyboardBuffer();
        }
    }
}
