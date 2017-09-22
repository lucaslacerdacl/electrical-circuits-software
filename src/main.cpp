#include <iostream>
#include <string>

using namespace std;

/*
 * Classes
 */
#include "ElectricComponent.h"
#include "ElectricSegment.h"
#include "ElectricCircuit.h"

/*
 * Constant of the component type
 */
const string RESISTOR   = "RESISTOR";
const string INDUCTOR   = "INDUCTOR";
const string CAPACITOR  = "CAPACITOR";
const string KEY        = "KEY";
const string SOURCE     = "SOURCE";

int main() {
    ElectricComponent *component1 = new ElectricComponent(1, 220, RESISTOR);
    ElectricComponent *component2 = new ElectricComponent(2, 127, INDUCTOR);

    ElectricSegment *segment = new ElectricSegment(1, component1, component2);

    cout << "Id do segmento: " << segment->id << endl;

    cout << "Id do primeiro componente " << segment->component1->id << endl;
    cout << "Tensão do primeiro componente " << segment->component1->voltage << endl;
    cout << "Tipo do primeiro componente " << segment->component1->type << endl;

    cout << "Id do segundo componente " << segment->component2->id << endl;
    cout << "Tensão do segundo componente " << segment->component1->voltage << endl;
    cout << "Tensão do segundo componente " << segment->component1->type << endl;

    return 0;
};