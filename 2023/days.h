
#include <stdint.h>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>
#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <array>
#include <unordered_map>

const uint16_t kCURRENT_DAY = 5;

#define SHOW_AB(day,a,b)        (std::cout << "Day " << (day) <<\
                                 "\ta: " << (a) << '\n' <<\
                                 "\tb: " << (b))

void solve(uint16_t day);
uint32_t solve1a();             uint32_t solve1b();
uint32_t solve2a();             uint32_t solve2b();
uint32_t solve3a();             uint32_t solve3b();
uint32_t solve4a();             uint32_t solve4b();
uint32_t solve5a();             uint32_t solve5b();

#ifdef IMPL_DAYS

void solve(uint16_t day) {
    switch (day) {
    case 1:
        SHOW_AB(day, solve1a(), solve1b());
        break;
    case 2:
        SHOW_AB(day, solve2a(), solve2b());
        break;
    case 3:
        SHOW_AB(day, solve3a(), solve3b());
        break;
    case 4:
        SHOW_AB(day, solve4a(), solve4b());
        break;
    case 5:
        SHOW_AB(day, solve5a(), solve5b());
        break;
    default:
        break;
    }

    std::cout << std::endl;
}

inline void solveAll() {
    for (size_t i = 1; i <= kCURRENT_DAY; i++) {
        solve(i);
    }
}

#endif // IMPL_DAYS
