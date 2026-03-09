#ifndef DATABASE_H
#define DATABASE_H

#include <sqlite3.h>

int open_db(sqlite3 **db);
void close_db(sqlite3 *db);
void select_data(sqlite3 *db);
void insert_data(sqlite3 *db);
void delete_data(sqlite3 *db);

#endif
