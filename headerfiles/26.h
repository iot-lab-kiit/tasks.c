#include<stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

void timeDiff(struct time start,struct time stop,struct time diff){
    if(start.seconds > stop.seconds)
    {
        stop.seconds += 60;
        --stop.minutes;
    }
    if(start.minutes > stop.minutes)
    {
        stop.minutes += 60;
        --stop.hours;
    }
    diff.seconds = stop.seconds - start.seconds;
    diff.minutes = stop.minutes - start.minutes;
    diff.hours = stop.hours - start.hours;
    printf("Time difference = %d : %d : %d", diff.hours, diff.minutes, diff.seconds);
}
