#include <stdio.h>
#include <stdlib.h>
#include "driver.h"
#include "team.h"
#include "season.h"


struct driver {
    int Id;
    char * Driver_name; // we need to check if its not null;
    //Team Driver_team;
    int Points;
   // Season Driver_season;
};

int DriverGetId (Driver driver) {
    if (driver==NULL)
        return (int)NULL;
    else
        return driver->Id;
}

