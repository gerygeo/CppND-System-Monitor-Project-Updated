#include <string>
#include "format.h"

using std::string;

// Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
string formatToString (int value){
    if (value < 10){
        return "0" + std::to_string(value);
    }

    return std::to_string(value);
}

string Format::ElapsedTime(long seconds) { 
    int hours = seconds/3600;
    seconds -= hours*3600;
    int minutes = seconds/60;
    seconds -= minutes*60;
    return formatToString(hours) + ":" + formatToString(minutes) + ":" + formatToString(seconds);
    //return std::to_string(hours) + ":" + std::to_string(minutes) + ":" + std::to_string(seconds); 
}