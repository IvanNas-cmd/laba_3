#include <stdio.h>
#include "database.h"

int open_db(sqlite3 **db){

    int rc = sqlite3_open("lab.db", db);

    if(rc){
        printf("Cannot open database\n");
        return 1;
    }

    printf("Database opened\n");
    return 0;
}

void close_db(sqlite3 *db){
    sqlite3_close(db);
}

void select_data(sqlite3 *db){

    char *sql = "SELECT * FROM students;";
    sqlite3_exec(db, sql, 0, 0, 0);
}

void insert_data(sqlite3 *db){

    char *sql =
    "INSERT INTO students VALUES(2,'Alex');";

    sqlite3_exec(db, sql, 0, 0, 0);
}

void delete_data(sqlite3 *db){

    char *sql =
    "DELETE FROM students WHERE id=2;";

    sqlite3_exec(db, sql, 0, 0, 0);
}
