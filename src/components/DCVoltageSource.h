class DCVoltageSource: public virtual Component{
public:
    void setVoltage(double _voltage);
    double getVoltage();
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
    double voltage;
};

void DCVoltageSource::setVoltage(double _voltage) {
    voltage = _voltage;
}

double DCVoltageSource::getVoltage() {
    return voltage;
}