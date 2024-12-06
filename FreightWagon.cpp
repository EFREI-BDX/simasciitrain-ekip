//
// Created by mehdi on 06/12/2024.
//

#include "FreightWagon.h"

namespace simasciitrain {
    FreightWagon::FreightWagon(int freightCount)
        : AbstractWagon(TypeWagon::FREIGHT), freightCount(freightCount) {}

    int FreightWagon::getFreightCount() const { return freightCount; }

    void FreightWagon::setFreightCount(int freightCount) {
        this->freightCount = freightCount;
    }

    void FreightWagon::print(std::ostream& os) const {
        os << '[';
        for (int i = 0; i < freightCount; ++i) {
            os << getSymbol();
        }
        os << ']';
    }
}
