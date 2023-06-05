#include <stdio.h>
enum ErrorCodes {Success, FileNotFound, AccessDenied, InvalidParameter};

void handleError(enum ErrorCodes errorCode) {
    switch(errorCode) {
        case Success: printf("Operation completed successfully.\n"); break;
        case FileNotFound: printf("File not found.\n"); break;
        case AccessDenied: printf("Access denied.\n"); break;
        case InvalidParameter: printf("Invalid parameter.\n"); break;
    }
}
int main() {
    enum ErrorCodes error = FileNotFound;
    handleError(error);
    return 0;
}
/*
I learned to use enum data type as a function in this algorithm
*/