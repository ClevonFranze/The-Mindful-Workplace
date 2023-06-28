// The Mindful Workplace: 2000 Lines of Code in C

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// define colors
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

// function to display menu
void displayMenu()
{
    printf("\n\n%sSelect from the options below: %s\n", KBLU, KNRM);
    printf("1. %sPromote Mindfulness %s\n", KGRN, KNRM);
    printf("2. %sEncourage Respectful Conversation%s\n", KGRN, KNRM);
    printf("3. %sConsider Well-being%s\n", KGRN, KNRM);
    printf("4. %sPractice Compassion%s\n", KGRN, KNRM);
    printf("5. %sQuit%s\n", KRED, KNRM);
}

// function to read in user input
int getInput()
{
    int selection;
    printf("\n%sPlease enter your selection: %s", KBLU, KNRM);
    scanf("%d", &selection);

    return selection;
}

// function to process user input
void processInput(int selection)
{
    switch(selection)
    {
        case 1:
            printf("\n%sPromote mindfulness at work by taking moments throughout the day to appreciate and be present. %s\n", KGRN, KNRM);
            break;
        case 2:
            printf("\n%sEncourage respectful conversation by listening to others and responding thoughtfully. %s\n", KGRN, KNRM);
            break;
        case 3:
            printf("\n%sConsider well-being by recognizing and eliminating stressors. %s\n", KGRN, KNRM);
            break;
        case 4:
            printf("\n%sPractice compassion by being understanding and supportive of others. %s\n", KGRN, KNRM);	
            break;
        case 5:
            printf("\n%sGoodbye!%s\n", KRED, KNRM);
            exit(0);
            break;
        default:
            printf("\n%sPlease select a valid option from the list.%s\n", KRED, KNRM);
            break;
    }
}

// main function
int main() 
{
    int selection;

    printf("\n%sWelcome to The Mindful Workplace! %s\n", KBLU, KNRM);

    while(1) 
    {
        displayMenu();
        selection = getInput();
        processInput(selection);
    }

    return 0;
}