#ifndef DOY_H
#define DOY_H
class DayOfYear
{
    public:
        void input( );
        void output( );
        void set(int newMonth, int newDay);
        //Precondition: newMonth and newDay form a possible date.
        void set(int newMonth);
        //Precondition: 1 <= newMonth <= 12
        //Postcondition: The date is set to the first day of the given month.
        int getMonthNumber( ); //Returns 1 for January, 2 for February, etc.
        int getDay( );
    private:
        int month;
        int day;
};


#endif
