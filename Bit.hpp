//
// Created by thiba on 03/10/2023.
//

#ifndef CPP_TP1_BIT_HPP

class Bit {
public:
    enum class bit_t {SET, CLEAR, HIZ, X};

private:
    bit_t value;

public:

    Bit(bit_t initialValue = bit_t::X): value(initialValue){};
    Bit(): value(bit_t::X){};

    bit_t getValue() const {
        return value;
    }

    void set(){
        this->value = bit_t::SET;
    }
    void clear(){
        this->value = bit_t::CLEAR;
    }
    void disconnect(){
        this->value = bit_t::HIZ;
    }
    void unregister(){
        this->value = bit_t::X;
    }

    std::string toString() const {
        switch (this->value) {
            case bit_t::SET:
                return "SET";
            case bit_t::CLEAR:
                return "CLEAR";
            case bit_t::HIZ:
                return "HIZ";
            case bit_t::X:
                return "X";

            default:
                return "NULL";
        }
    }

};


#define CPP_TP1_BIT_HPP

#endif //CPP_TP1_BIT_HPP
