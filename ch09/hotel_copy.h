// hotel_copy.h --constants and declarations for hotel_copy.c

#define QUIT    5
#define HOTEL1 80.00
#define HOTEL2 124.00
#define HOTEL3 155.00
#define HOTEL4 200.00
#define DISCOUNT 0.95
#define STARS "********************************8"

//shows list of choices 
int menu(void);

//returns number of nights desired 
int getnights(void);

//calculates price from rate,nights
//and displays result
void showprice(double rate, int nights);
