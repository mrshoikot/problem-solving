#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

void password_protected(){
        int i;
        char d[]="Password Protected";

        printf("\n\n\n\t\t");
        for(i=0;i<20;i++){
            Sleep(0.1);
            printf("*");
        }

        for(i=0;i<strlen(d);i++){
            Sleep(0.1);
            printf("%c",d[i]);
        }

        for(i=0;i<20;i++){
            Sleep(0.1);
            printf("*");
        }

}

void Password(){
        printf("\n\n\t\tEnter Password :");
        char pass[]="bubt42/1";
        char get_pass[20];

        gets(get_pass);

        if(0==strcmp(pass,get_pass)){
            mainmenu();
        }
        else{
            printf("\n\n\n\n\t\tWarning.Wrong Password!");
        }
}

void mainmenu(){
        system("CLS");
        printf("\n\n\t\t");
        printf("\n\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\t\xDB\xDB\xDB\xDB\xB2 1. Add Books   ");
        printf("\n\t\xDB\xDB\xDB\xDB\xB2 2. Delete books");
        printf("\n\t\xDB\xDB\xDB\xDB\xB2 3. Search Books");
        printf("\n\t\xDB\xDB\xDB\xDB\xB2 4. Issue Books");
        printf("\n\t\xDB\xDB\xDB\xDB\xB2 5. View Book list");
        printf("\n\t\xDB\xDB\xDB\xDB\xB2 6. Edit Book's Record");
        printf("\n\t\xDB\xDB\xDB\xDB\xB2 7. Close Application");
        printf("\n\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\t\tEnter your choice:");
        switch(getch())
        {
        case '1':
        addbooks();
        break;
        case '2':
        deletebooks();
        break;
        case '3':
        searchbooks();
        break;
        case '4':
        issuebooks();
        break;
        case '5':
        viewbooks();
        break;
        case '6':
        editbooks();
        break;
        case '7':
        {
        system("cls");
        printf("\n\tLibrary Management System");
        printf("\n\tMini Project in C");
        printf("\n\tis brought to you by");
        printf("\n\tCode with C Team");
        printf("\n\t******************************************");
        printf("\n\t*******************************************");
        printf("\n\t*******************************************");
        printf("\n\t********************************************");
        }
        default:
        {
        system("CLS");
        printf("\n\t\aWrong Entry!!Please re-entered correct option.\n\tEnter Zero to Mainmenu");
        if(getch())
        mainmenu();
        }

        }
}

void addbooks(){
    printf("\n\taddbooks");
}

void deletebooks(){
    printf("\n\tdeletebooks");
}

void searchbooks(){
    printf("\n\tseachbooks");
}

void issuebooks(){
    printf("\n\tissuebooks");
}

void viewbooks(){
    printf("\n\tviewbooks");
}

void editbooks(){
    printf("\n\teditbooks");
}

int main(){
        password_protected();
        Password();
        getch();
}
