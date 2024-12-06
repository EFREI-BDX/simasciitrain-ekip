//
// Created by mehdi on 06/12/2024.
//

// FreightWagon.h
#ifndef SIMASCIITRAIN_FREIGHTWAGON_H
#define SIMASCIITRAIN_FREIGHTWAGON_H

#include "AbstractWagon.h"

namespace simasciitrain {
    class FreightWagon : public AbstractWagon {
    private:
        int freightCount;

    public:
        explicit FreightWagon(int freightCount);
        ~FreightWagon() override = default;
        int getFreightCount() const;
        void setFreightCount(int freightCount);
        void print(std::ostream& os) const override;
    };
}

#endif
