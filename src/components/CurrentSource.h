class CurrentSource: public virtual Component{
public:
    void setCurrent(double _current);
    double getCurrent();
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
    double current;
};

void CurrentSource::setCurrent(double _current) {
    current = _current;
}

double CurrentSource::getCurrent() {
    return current;
}