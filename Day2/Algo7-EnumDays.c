#include <stdio.h>

enum Days {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main() {
    enum Days today = Wednesday;
    
    printf("Today is: ");
    
    switch(today) {
        case Monday:
        printf("Monday");
        break;
        
        case Tuesday:
        printf("Tuesday");
        break;
        
        case Wednesday:
        printf("Wednesday");
        break;
        
        case Thursday:
        printf("Thursday");
        break;
        
        case Friday:
        printf("Friday");
        break;
        
        case Saturday:
        printf("Saturday");
        break;
        
        case Sunday:
        printf("Sunday");
        break;
        
        default:
        printf("Invalid input.");
        return 1;
    }
    return 0;
}
/*
In this algorithm, I learned the enum structure. The "Enum" data type provides a convenient way to define 
and work with a group of related symbolic values. It enhances code readability by allowing the use of meaningful
names instead od arbitrary numeric values "Enum" can be used to represent a variety of concepts
*/