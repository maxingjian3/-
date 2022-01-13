#ifndef USER_H 
#define USER_H
typedef struct 
{
    char id[10];
    char username[11];
    char password[21];
    char phone[21];
    char address[21];
    double balance;
    int role;
}User;
#endif