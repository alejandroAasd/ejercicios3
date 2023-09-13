#include <string>
#include <iostream>

class Date {
public:

    Date(int mes, int dia, int anio)
        : month {mes}, day {dia}, year {anio}{

        if(month > 12){
            
        }

    }

    void setMonth(int _month){
        month = _month;
    }

    void setDay(int _day){
        day = _day;
    }

    void setYear(int _year){
        year = _year;
    }

    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    int getYear() const {
        return year;
    }
private:
    int month, day, year;

};
