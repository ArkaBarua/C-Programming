#include <stdio.h>

// Wrong way of init
/* struct abc{ */
/*     int p = 23; */
/*     int q = 45; */
/* }; */

// Correct way
/* struct abc{ */
/*     int p; */
/*     int q; */
/* }; */

typedef struct car {
  char *engine;
  char *fuel_type;
  int fuel_tank_cap;
  int seating_cap;
  float city_mileage;
} car;
int main() {

  car c1 = {"DDis 190 Engine", "Diesel", 37, 5, 19.74};

  car c2 = {"Kappa", "Petrol", 22, 8, 14.5};

  // we can access the members of the structure using dot(.) operator.
  printf("Fuel tank cap1 = %d\tFuel tank cap2%d\n",c1.fuel_tank_cap, c2.fuel_tank_cap);

  return 0;
}
