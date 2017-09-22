class ElectricComponent {
public:
    int id;
    double voltage;
    string type;
    ElectricComponent(int _id, double _voltage, string _type);
};

ElectricComponent::ElectricComponent(int _id, double _voltage, std::string _type) {
    id = _id;
    voltage = _voltage;
    type = _type;
}