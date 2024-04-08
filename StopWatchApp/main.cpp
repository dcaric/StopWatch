//
//  main.cpp
//  10kNumbers
//
//  Created by Dario Caric on 02.04.2024..
//

#include <iostream>
//#include <chrono>
#include <time.h>
#include <array>
#include "StopWatch.hpp"

using namespace std;

int generateRanNumber() {
    int random = rand() % 5 + 1;
    return random;
}

int main() {
    // old solution
    //auto start = chrono::high_resolution_clock::now();
    
    // create and start stopwatc
    StopWatch sw = StopWatch();
    
    
    srand(time(nullptr));
    
    int sum = 0;
    
    for (int i = 0; i < 10000; i++) sum += generateRanNumber();
    int average = sum / 10000;
    
    // stop stopwatch and print time
    sw.stopStopWatch();
    
    // old solution
    //auto stop = chrono::high_resolution_clock::now();
    //auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    //cout << "Time taken by function: " << duration.count() << " microseconds" << endl;

    
    cout << "Average: " << average << endl;
    
    return 0;
}
