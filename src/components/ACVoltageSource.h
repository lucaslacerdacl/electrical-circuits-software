class ACVoltageSource : public virtual Component {
public:
    void setVoltage(double _voltage);
    double getVoltage();
    void setFrequency(double _frequency);
    double getFrequency();
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
    double frequency;
};

void ACVoltageSource::setVoltage(double _voltage) {
    voltage = _voltage;
}

double ACVoltageSource::getVoltage() {
    return voltage;
}

void ACVoltageSource::setFrequency(double _frequency) {
    frequency = _frequency;
}

double ACVoltageSource::getFrequency() {
    return frequency;
}