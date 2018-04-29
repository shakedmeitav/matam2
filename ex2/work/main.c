#include <stdio.h>
#include <string.h>
#include "driver.h"
#include "team.h"
#include "season.h"
#include <assert.h>

int main() {
    DriverStatus status = DRIVER_STATUS_OK;
    Driver d1 = DriverCreate(&status, "driver", 123);
    assert(status == DRIVER_STATUS_OK);
    assert(d1 != NULL);
    // assert(DriverGetName(d1) == "driver");
    return 0;
}