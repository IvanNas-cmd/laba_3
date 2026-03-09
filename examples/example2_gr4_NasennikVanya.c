#include <stdio.h>
#include <sqlite3.h>

static int callback(void *data, int argc, char **argv, char **azColName){

   for(int i = 0; i < argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }

   printf("\n");
   return 0;
}

int main(){

   sqlite3 *db;
   char *errMsg = 0;

   sqlite3_open("test.db", &db);

   char *sql = "SELECT * FROM sqlite_master";

   sqlite3_exec(db, sql, callback, 0, &errMsg);

   sqlite3_close(db);

   return 0;
}
