#include <stdio.h>
#include <sqlite3.h>

int main() {

    sqlite3 *db;
    int rc;

    rc = sqlite3_open("test.db", &db);

    if(rc){
        printf("Cannot open database\n");
        return 1;
    }

    printf("Database opened successfully\n");

    sqlite3_close(db);

    return 0;
}
