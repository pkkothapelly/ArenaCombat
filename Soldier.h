#pragma once

#include "Fighter.h"

class Soldier : public Fighter
{
public:
    using Fighter::Fighter;

    void attack(Fighter& target) override;
};