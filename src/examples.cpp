void runExamples() {
    Node *node1 = new Node();
    node1->setId(1);
    node1->setVoltage(220.0);
    
    Node *node2 = new Node();
    node2->setId(2);
    node2->setVoltage(127.0);

    vector<Node> node12;
    node12.push_back(*node1);
    node12.push_back(*node2);

    Capacitor *capacitor = new Capacitor();
    capacitor->setCapacitance(2.03);

    Segment *segment1 = new Segment();
    segment1->setId(1);
    segment1->setNode(node12);
    segment1->setComponent(capacitor);

    Node *node3 = new Node();
    node3->setId(3);
    node3->setVoltage(127.5);
    
    Node *node4 = new Node();
    node4->setId(4);
    node4->setVoltage(225.2);

    vector<Node> node34;
    node34.push_back(*node3);
    node34.push_back(*node4);

    ACVoltageSource *aCVoltageSource = new ACVoltageSource();
    aCVoltageSource->setVoltage(1.03);
    aCVoltageSource->setFrequency(0.03);

    Segment *segment2 = new Segment();
    segment2->setId(2);
    segment2->setNode(node34);
    segment2->setComponent(aCVoltageSource);

    vector<Segment> segment;
    segment.push_back(*segment1);
    segment.push_back(*segment2);

    ElectricCircuit *electricCircuit = new ElectricCircuit();
    electricCircuit->setSegment(segment);
    electricCircuit->calculateCircuit();
}