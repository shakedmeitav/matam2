#include "driver.h"
#include "team.h"
#include "season.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 100

struct driver {
    int Id;
    char* Driver_name;
    Team Driver_team;
    int Points;
    Season Driver_season;
};

Driver DriverCreate(DriverStatus* status, char* driver_name, int driverId) {
    Driver new_driver = malloc(sizeof(*new_driver));
    if(new_driver == NULL) {
        *status = DRIVER_MEMORY_ERROR;
        return NULL;
    }
    new_driver->Driver_name = malloc(strlen(driver_name) + 1);
    if(new_driver->Driver_name == NULL) {
        *status = DRIVER_MEMORY_ERROR;
        free(new_driver);
        return NULL;
    }
    new_driver->Id = driverId;
    strcpy(new_driver->Driver_name, driver_name);
    *status = DRIVER_STATUS_OK;
    return new_driver;

}

//*Get a driver , and return ptr to his team. If the function get NULL, return NULL*//
Team DriverGetTeam(Driver driver) {
    if (driver == NULL) {
        return NULL;
    } else {
        return driver->Driver_team;
    }
}

const char* DriverGetName(Driver driver) {
    return driver->Driver_name;
}


//*the function DriverDestroy Get a driver and free the driver*//
void DriverDestroy(Driver driver){
    free(driver);

}





int DriverGetId (Driver driver) {
    if (driver==NULL)
        return (int)NULL;
    else
        return driver->Id;
}

