#include <stdio.h>
#include <sqlite3.h>

int main(){

    sqlite3 *db;
    char *errMsg = 0;

    sqlite3_open("test.db", &db);

    char *sql =
    "CREATE TABLE IF NOT EXISTS students("
    "ID INT PRIMARY KEY NOT NULL,"
    "NAME TEXT NOT NULL);"

    "INSERT INTO students VALUES(1,'Ivan');";

    sqlite3_exec(db, sql, 0, 0, &errMsg);

    printf("Data inserted\n");

    sqlite3_close(db);

    return 0;
}
