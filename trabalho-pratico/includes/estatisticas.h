#ifndef estatisticas_h
#define estatisticas_h
#include <stdio.h>
#include <stdlib.h>
#include "parseusers.h"
#include "parsedrivers.h"
#include "parserides.h"
#include "structsaux.h"

int query2est(DRIVER *driverarray, RIDE *ridearray,  DRIVERMEDIA *avs);
void query3est(USER *userhash, USERDIST *userdist, RIDE *ridearray);
void query7est(DRIVER *driverarray, RIDE *ridearray, RIDE2 *lisboa, RIDE2 *braga, RIDE2 *porto, RIDE2 *faro, RIDE2 *setubal, RIDE2 *coimbra, RIDE2 *vila_real, CITYMEDIA *lisboaavs, CITYMEDIA *bragaavs, CITYMEDIA *portoavs, CITYMEDIA *faroavs, CITYMEDIA *setubalavs, CITYMEDIA *coimbraavs, CITYMEDIA *vila_realavs);
int avs(DRIVER *driverarray, RIDE *ridearray, CITYMEDIA *avs, CITYMEDIA ride);
void calcavs(CITYMEDIA *avs, int counter);

#endif