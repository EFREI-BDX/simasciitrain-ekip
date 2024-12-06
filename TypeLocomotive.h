//
// Created by mehdi on 06/12/2024.
//

// TypeLocomotive.h
#ifndef TYPELOCOMOTIVE_H
#define TYPELOCOMOTIVE_H

#include <string>

namespace simasciitrain {
    class TypeLocomotive {
    public:
        static const TypeLocomotive ELECTRIC;
        static const TypeLocomotive GASOLINE;

        [[nodiscard]] std::string getName() const;
        [[nodiscard]] char getSymbol() const;

    private:
        std::string _name;
        char _symbol;

        explicit TypeLocomotive(std::string name, char symbol);
    };
}

#endif // TYPELOCOMOTIVE_H
