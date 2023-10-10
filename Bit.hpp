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


    Bit(): value{bit_t::X}{};
    explicit Bit(bit_t initialValue): value{initialValue}{};


    virtual ~Bit() {};

    [[nodiscard]] bit_t getValue() const noexcept  {
        return value;
    }

    void set() noexcept {
        this->value = bit_t::SET;
    }
    void clear() noexcept {
        this->value = bit_t::CLEAR;
    }
    void disconnect() noexcept {
        this->value = bit_t::HIZ;
    }
    void unregister() noexcept {
        this->value = bit_t::X;
    }

    std::string toString() const noexcept  {
        std::string returnValue = "NULL";
        switch (this->value) {
            case bit_t::SET:
                returnValue = std::string ("SET");
                break;
            case bit_t::CLEAR:
                returnValue = std::string ("CLEAR");
                break;
            case bit_t::HIZ:
                returnValue = std::string ("HIZ");
                break;
            case bit_t::X:
                returnValue = std::string ("X");
                break;
        }
        return returnValue;
    }

};

std::ostream& operator<<(std::ostream& os, const Bit& bit) {  	// << operator overloaded - redirecting to toString method.
    os << bit.toString();
    return os;
}

#define CPP_TP1_BIT_HPP
#endif //CPP_TP1_BIT_HPP
