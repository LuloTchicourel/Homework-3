#pragma once
#include "IMeasurement.hpp"
#include <memory>

class BaseMeasurement : public IMeasurement {
protected:
    unique_ptr<float> time;
public:
    BaseMeasurement(float t = 0);
    float get_time() const;
    virtual void serialize(ofstream& out) const override;
    virtual void deserialize(ifstream& in) override;
    ~BaseMeasurement() = default;
};