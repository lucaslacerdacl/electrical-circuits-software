class Segment {
public:
    Segment(int _id, Node *_node1, Node *_node2, double _resistence, double _current);
    int getId();
    Node getNode1();
    Node getNode2();
    double getResistence();
    double getCurrent();
protected:
    int id;
    Node *node1;
    Node *node2;
    double resistence;
    double current;
};

Segment::Segment(int _id, Node *_node1, Node *_node2, double _resistence, double _current) {
    id = _id;
    node1 = _node1;
    node2 = _node2;
    resistence = _resistence;
    current = _current;
}

int Segment::getId() {
    return id;
}

Node Segment::getNode1() {
    return *node1;
}

Node Segment::getNode2() {
    return *node2;
}

double Segment::getResistence() {
    return resistence;
}

double Segment::getCurrent() {
    return current;
}

