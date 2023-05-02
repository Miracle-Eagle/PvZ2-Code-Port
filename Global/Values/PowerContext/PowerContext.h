#pragma once

namespace Global::Values
{
/// <summary> Determines the Context of a Power. </summary>

enum class PowerContext
{
/// The Power is used in a Normal Attack.
Normal,

/// The Power is used in a Plant Food Attack.
Plantfood,

/// The Power belongs to Potato Mine.
Potatomine,

/// The Power belongs to Cherry Bomb.
Cherrybomb,

/// The Power is a Powerful Attack from Phatbeet.
PhatbeetPowerful,

/// The Power is used in a Normal Attack.
PhatbeetOuterPF,

/// The Power belongs to Grapeshot.
Grapeshot,

/// The Power belongs to Primal Potato Mine.
PrimalPotatomine,

/// The Power is used when Solar Sage is Planted.
SolarSageSunPlanted,

/// The Power is used when Solar Sage is Attacking.
SolarSageSunTriggered,

/// The Power is used when an Enlightened Zombie is walking.
SolarSageSunProducedZombie
};

}
