class ElectricSegment {
public:
    int id;
    ElectricComponent *component1;
    ElectricComponent *component2;
    ElectricSegment(int _id, ElectricComponent *_component1, ElectricComponent *_component2);
};

ElectricSegment::ElectricSegment(int _id, ElectricComponent *_component1, ElectricComponent *_component2) {
    id = _id;
    component1 = _component1;
    component2 = _component2;
}