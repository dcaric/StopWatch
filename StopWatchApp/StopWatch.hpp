//
//  StopWatch.hpp
//  10kNumbers
//
//  Created by Dario Caric on 08.04.2024..
//

#ifndef StopWatch_hpp
#define StopWatch_hpp

#include <stdio.h>
#include <chrono>
#include <time.h>
#include <vector>
#include <iostream>

using namespace std;

class StopWatch {
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start;
public:
    StopWatch();
    void stopStopWatch();
};
#endif /* StopWatch_hpp */
