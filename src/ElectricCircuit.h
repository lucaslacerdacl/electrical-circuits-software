class ElectricCircuit {
public:
    ElectricCircuit(){};
    ~ElectricCircuit(){};
    void calculateCircuit();
    void setSegment(vector<Segment> _segment);
    vector<Segment> getSegment();
private:
    vector<Segment> segment;
    double getComponentVoltage(Component *_component);
    double getComponentCurrent(Component *_component);
    double getComponentPotency(Component *_component);
};

void ElectricCircuit::setSegment(vector<Segment> _segment) {
    segment = _segment;
}

vector<Segment> ElectricCircuit::getSegment() {
    return segment;
}

void ElectricCircuit::calculateCircuit() {
    
    //Only for examples. Put your implementation here.
    for (vector<Segment>::iterator segmenteInterator = segment.begin(); segmenteInterator != segment.end(); segmenteInterator++) {
        vector<Node> nodeV = segmenteInterator->getNode();
        for (vector<Node>::iterator node = nodeV.begin(); node != nodeV.end(); node++) {
            cout << "Id nó: " << node->getId() << " Tensão nó:" << node->getVoltage() << endl;
        }
        cout << "Tensão no componente: " << getComponentVoltage(segmenteInterator->getComponent()) << endl;
        cout << "Corrente no componente: " << getComponentCurrent(segmenteInterator->getComponent()) << endl;
        cout << "Potência no componente: " << getComponentPotency(segmenteInterator->getComponent()) << endl;
    }
}

double ElectricCircuit::getComponentVoltage(Component *_component) {
    return _component->calculateVoltage();
}

double ElectricCircuit::getComponentCurrent(Component *_component) {
    return _component->calculateCurrent();
}

double ElectricCircuit::getComponentPotency(Component *_component) {
    return _component->calculatePotency();
}