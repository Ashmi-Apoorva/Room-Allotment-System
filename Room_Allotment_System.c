#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int room[10], chair[32][10];
char host[10][50], start[10][10], endt[10][10], date[10][15], occupant[32][10][50];

void printer() {
    for (int i = 0; i <= 110; i++) {
        printf("*");
    }
    printf("\n");
}

int book() {
    int i;
    printer();
    printf("Enter the room number: ");
    if (scanf("%d", &i) != 1) { // Validate integer input
        printf("Invalid Input! Try again.\n");
        printer();
        return 0;
    }
    if (i > 0 && i <= 10) {
        room[i] = i;
        printf("Enter the name of the Host: ");
        scanf("%s", host[i]);
        printf("Enter the date [dd/mm/yyyy]: ");
        scanf("%s", date[i]);
        printf("Enter the start time: ");
        scanf("%s", start[i]);
        printf("Enter the end time: ");
        scanf("%s", endt[i]);
        printf("Details saved!\n");
    } else {
        printf("Invalid room number! There are only 10 rooms.\n");
    }
    printer();
    return 0;
}

int allot() {
    int i, j;
    printf("Enter the room number: ");
    if (scanf("%d", &i) != 1) {
        printf("Invalid Input! Try again.\n");
        printer();
        return 0;
    }
    if (room[i] == 0) {
        printf("The room has not been booked yet! Book the room before allotting chairs.\n");
    } else if (room[i] > 0 && room[i] <= 10) {
        while (1) {
            printf("Enter the chair number to book: ");
            if (scanf("%d", &j) != 1) {
                printf("Invalid input!\n");
                continue;
            }
            if (j < 1 || j > 32) {
                printf("Only 32 chairs are available. Try again.\n");
                continue;
            } else {
                if (strcmp(occupant[j][i], "") == 0) {
                    printf("Enter the name of occupant: ");
                    scanf("%s", occupant[j][i]);
                    chair[j][i] = j;
                    printf("Details saved!\n");
                } else {
                    printf("This chair has already been booked!\n");
                }
                break;
            }
        }
    } else {
        printf("Invalid Room number! Try again.\n");
    }
    printer();
    return 0;
}

int show() {
    int rn;
    printf("Enter room no. to show status: ");
    if (scanf("%d", &rn) != 1) {
        printf("Invalid input! Try again\n");
        printer();
        return 0;
    }
    if (rn < 1 || rn > 10) {
        printf("Invalid room number.\n");
    } else if (room[rn] == 0) {
        printer();
        printf("Room status: Empty. Not booked yet.\n");
    } else {
        int c = 1;
        printer();
        printf("Room no. %d\n", room[rn]);
        printf("Host: %s\t Date: %s\t Start time: %s\t End time: %s\n", host[rn], date[rn], start[rn], endt[rn]);
        for (int k = 1; k <= 8; k++) {
            for (int l = 1; l <= 4; l++) {
                printf("%d. ", c);
                if (strcmp(occupant[c][rn], "") == 0) {
                    printf("empty\t");
                } else {
                    printf("%s\t", occupant[c][rn]);
                }
                c++;
            }
            printf("\n");
        }
    }
    printer();
    return 0;
}

void check_avail() {
    for (int rn = 1; rn <= 10; rn++) {
        int counter = 0;
        printer();
        if (room[rn] == 0) {
            printf("Room no. N/A\n");
            printf("Host: N/A \t Date: N/A \t Start time: N/A \t End time: N/A\n");
            printf("Not booked.\n");
            continue;
        } else {
            printf("Room no. %d\n", room[rn]);
            printf("Host: %s\t Date: %s\t Start time: %s\t End time: %s\n", host[rn], date[rn], start[rn], endt[rn]);
        }
        for (int o = 1; o <= 32; o++) {
            if (strcmp(occupant[o][rn], "") == 0) {
                counter++;
            }
        }
        printf("%d chairs are available in room no. %d\n", counter, rn);
        printer();
    }
}

int main() {
    int ch;
    printf("\t\t-------------WELCOME TO THE ROOM ALLOTMENT & BOOKING SYSTEM-------------\n");
    while (1) {
        printf("Select an Option to Continue:\n");
        printf("1. Book a Room\n2. Reserve/allot a chair\n3. Show room status\n4. Check Availability\n5. Exit\n");
        if (scanf("%d", &ch) != 1) {
            printf("Numerical input required!\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        switch (ch) {
            case 1: book(); continue;
            case 2: allot(); continue;
            case 3: show(); continue;
            case 4: check_avail(); continue;
            case 5: printf("Thank you for using the room allotment system!\n"); exit(0);
            default: printf("Invalid Choice! Try Again.\n"); continue;
        }
    }
    return 0;
}
