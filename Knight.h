#pragma once

#include "Fighter.h"

class Knight : public Fighter
{
public:
    using Fighter::Fighter;

    void attack(Fighter& target) override;
};