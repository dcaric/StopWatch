//
//  StopWatch.cpp
//  10kNumbers
//
//  Created by Dario Caric on 08.04.2024..
//

#include "StopWatch.hpp"

StopWatch::StopWatch() {
    start = std::chrono::high_resolution_clock::now();
}

void StopWatch::stopStopWatch() {
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
}
