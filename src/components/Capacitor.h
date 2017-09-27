class Capacitor: public Segment, public virtual ComponentPlatform{
public:
    Capacitor(int _id, Node *_node1, Node *_node2, double _resistence, double _current);
    virtual double calculateVoltage();
    virtual double calculateCurrent();
    virtual double calculateResistence();
    virtual double calculatePotency();
};

Capacitor::Capacitor(int _id, Node *_node1, Node *_node2, double _resistence, double _current) : Segment(_id, _node1, _node2, _resistence, _current) {
}

double Capacitor::calculateVoltage() {
    return 2.01;
}
double Capacitor::calculateCurrent() {
    return 2.02;
}
double Capacitor::calculateResistence() {
    return 2.03;
}
double Capacitor::calculatePotency() {
    return 2.04;
}