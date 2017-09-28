class Key: public Component{
public:
    void setIsOn(bool _isOn);
    double getIsOn();
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
    double isOn;
};

void Key::setIsOn(bool _isOn) {
    isOn = _isOn;
}

double Key::getIsOn() {
    return isOn;
}