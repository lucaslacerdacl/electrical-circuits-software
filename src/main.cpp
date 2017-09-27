#include <iostream>
#include <string>

using namespace std;

#include "Node.h"
#include "Segment.h"
#include "ComponentPlatform.h"
#include "components/Capacitor.h"

int main() {
    Node *node1 = new Node(1, 220.0);
    Node *node2 = new Node(2, 127.0);

    cout << "Id do nó 1: " << node1->getId() << endl;
    cout << "Tensão do nó 1: " << node1->getVoltage() << endl;

    cout << "Id do nó 2: " << node2->getId() << endl;
    cout << "Tensão do nó 2: " << node2->getVoltage() << endl;

    Segment *segment = new Segment(1, node1, node2, 20.0, 2.0);

    cout << "Id do segmento: " << segment->getId() << endl;
    cout << "Id do nó 1 no segmento: " << segment->getNode1().getId() << endl;
    cout << "Id do nó 2 no segmento: " << segment->getNode2().getId() << endl;
    cout << "Resistência do segmento: " << segment->getResistence() << endl;
    cout << "Corrente do segmento: " << segment->getCurrent() << endl;

    Capacitor *capacitor = new Capacitor(1, node1, node2, 20.0, 2.0);
    cout << "Tensão no capacitor: " << capacitor->calculateVoltage() << endl;

    return 0;
};