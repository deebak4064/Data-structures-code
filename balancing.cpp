#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

bool isOpeningSymbol(char symbol) {
    return (symbol == '(' || symbol == '[' || symbol == '{');
}

bool isClosingSymbol(char symbol) {
    return (symbol == ')' || symbol == ']' || symbol == '}');
}

bool symbolsMatch(char openingSymbol, char closingSymbol) {
    if (openingSymbol == '(' && closingSymbol == ')')
        return true;
    else if (openingSymbol == '[' && closingSymbol == ']')
        return true;
    else if (openingSymbol == '{' && closingSymbol == '}')
        return true;
    else
        return false;
}

bool isBalanced(char expression[]) {
    char stack[MAX_SIZE];
    int top = -1;

    for (int i = 0; expression[i] != '\0'; i++) {
        if (isOpeningSymbol(expression[i])) {
            stack[++top] = expression[i];
        } else if (isClosingSymbol(expression[i])) {
            if (top == -1 || !symbolsMatch(stack[top], expression[i])) {
                return false;
            } else {
                top--;
            }
        }
    }

    return (top == -1);
}

int main() {
    char expression[MAX_SIZE];

    printf("Enter an expression: ");
    scanf("%s", expression);

    if (isBalanced(expression)) {
        printf("The expression has balanced symbols.\n");
    } else {
        printf("The expression does not have balanced symbols.\n");
    }

    return 0;
}

