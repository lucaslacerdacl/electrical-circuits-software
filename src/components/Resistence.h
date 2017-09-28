class Resistence: public Component{
public:
    void setResistence(double _resistence);
    double getResistence();
    double calculateVoltage() {
        //Only for examples. Put your implementation here.
        return 1.0;
    };
    double calculateCurrent() {
        //Only for examples. Put your implementation here.
        return 1.0;
    };
    double calculatePotency() {
        //Only for examples. Put your implementation here.
        return 1.0;
    };
private:
    double resistence;
};

void Resistence::setResistence(double _resistence) {
    resistence = _resistence;
}

double Resistence::getResistence() {
    return resistence;
}