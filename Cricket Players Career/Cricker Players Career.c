#include <stdio.h>
#include <string.h>

typedef struct {
    char Name[50];
    int age;
    char role[50];
    int odi;
    int totalRun;
    int highestRun;
} plyr;

void centerTextInBox(char *text, int boxlen) {
    int textlen = strlen(text);
    int paddinglen = (boxlen - textlen - 2) / 2;
    printf("|%*s%s%*s|", paddinglen, " ", text, paddinglen + ((boxlen - textlen - 2) % 2), " ");
    printf("\n");
}

void tableHead(char *title) {
    printf("^=====================================================================================================^\n");
    centerTextInBox(title, 103);
    printf("^=====================================================================================================^\n");
    printf("| %-25s | %-4s | %-25s | %-9s | %-10s | %-11s |\n", "Name", "Age", "Role", "ODI Match", "Total Runs", "Highest Run");
    printf("^=====================================================================================================^\n");
}

void tableBody(plyr player) {
    printf("| %-25s ", player.Name);
    printf("| %-4d ", player.age);
    printf("| %-25s ", player.role);
    printf("| %-9d ", player.odi);
    printf("| %-10d ", player.totalRun);
    printf("| %-11d |", player.highestRun);
    printf("\n");
    printf("-------------------------------------------------------------------------------------------------------\n");
}

int main() {
    plyr players[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter the details for Player %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", players[i].Name);
        printf("Age: ");
        scanf("%d", &players[i].age);
        printf("Role: ");
        scanf("%s", players[i].role);
        printf("ODI Matches: ");
        scanf("%d", &players[i].odi);
        printf("Total Runs: ");
        scanf("%d", &players[i].totalRun);
        printf("Highest Run: ");
        scanf("%d", &players[i].highestRun);
    }

    tableHead("All players");
    for (int i = 0; i < 5; i++) {
        tableBody(players[i]);
    }
    printf("\n");

    return 0;
}
