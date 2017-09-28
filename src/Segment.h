class Segment {
public:
    Segment(){};
    ~Segment(){};
    void setId(int _id);
    int getId();
    void setNode(vector<Node> node);
    vector<Node> getNode();
    void setComponent(Component *_component);
    Component* getComponent();
protected:
    int id;
    vector<Node> node;
    Component *component;
};

void Segment::setId(int _id) {
    id = _id;
}

int Segment::getId() {
    return id;
}

void Segment::setNode(vector<Node> _node) {
    node = _node;
}

vector<Node> Segment::getNode() {
    return node;
}

void Segment::setComponent(Component *_component) {
    component = _component;
}

Component* Segment::getComponent() {
    return component;
}

