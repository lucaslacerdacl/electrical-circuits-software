class Node {
public:
    Node(int _id, double _voltage);
    int getId();
    double getVoltage();
private:
    int id;
    double voltage;
};

Node::Node(int _id, double _voltage) {
    id = _id;
    voltage = _voltage;
}

int Node::getId() {
    return id;
}

double Node::getVoltage() {
    return voltage;
}