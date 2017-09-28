class Inductor: public virtual Component{
public:
    void setInductance(double _inductance);
    double getInductance();
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
    double inductance;
};

void Inductor::setInductance(double _inductance) {
    inductance = _inductance;
}

double Inductor::getInductance() {
    return inductance;
}