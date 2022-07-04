#pragma once

#include "int128.h"

#include <map>
#include <memory>
#include <ostream>
#include <string>

struct Expression
{
    virtual Int128 eval(const std::map<std::string, Int128> & values = {}) const = 0;

    virtual std::unique_ptr<Expression> clone() const = 0;

    friend std::ostream & operator<<(std::ostream & out, const Expression & expression);
};
