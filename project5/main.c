#include <stdio.h>
#include "database.h"

void show_menu();

int main(){

    sqlite3 *db;
    int choice;

    open_db(&db);

    while(1){

        show_menu();
        scanf("%d",&choice);

        if(choice==1) select_data(db);
        if(choice==2) insert_data(db);
        if(choice==3) delete_data(db);
        if(choice==0) break;
    }

    close_db(db);

    return 0;
}
