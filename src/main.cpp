#include <iostream>
#include <vector>

using namespace std;

#include "./Node.h"
#include "./Component.h"
#include "./Segment.h"
#include "./ElectricCircuit.h"
#include "./components/ACVoltageSource.h"
#include "./components/Capacitor.h"
#include "./components/CurrentSource.h"
#include "./components/DCVoltageSource.h"
#include "./components/Inductor.h"
#include "./components/Key.h"
#include "./components/Resistence.h"
#include "./examples.cpp"

int main() {
    runExamples();
    return 0;
};