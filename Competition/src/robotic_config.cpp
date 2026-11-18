#pragma region VEXcode Generated Robot Configuration

// Make sure all required headers are included.
#include <cstdio>
#include <cstdlib>
#include <cstdbool>
#include <cmath>
#include <cstring>

#include "vex.h"
#include "robotic_config.h"

using namespace vex;

// Brain should be defined by default
brain Brain;

// START V5 MACROS
#define waitUntil(condition)                                                   \
  do {                                                                         \
    wait(5, msec);                                                             \
  } while (!(condition))

#define repeat(iterations)                                                     \
  for (int __i = 0; __i < (iterations); __i++)

// END V5 MACROS

#pragma endregion VEXcode Generated Robot Configuration