class Node {
public:
    Node(){};
    ~Node(){};
    void setId(int _id);
    int getId();
    void setVoltage(double _voltage);
    double getVoltage();
private:
    int id;
    double voltage;
};

void Node::setId(int _id) {
    id = _id;
}

int Node::getId() {
    return id;
}

void Node::setVoltage(double _voltage) {
    voltage = _voltage;
}

double Node::getVoltage() {
    return voltage;
}