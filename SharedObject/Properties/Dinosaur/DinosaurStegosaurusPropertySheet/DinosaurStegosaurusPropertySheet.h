#include <optional>
#include <string>
#include <vector>

using namespace Global::Definitions;
using namespace Global::Types;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Dinosaur
{
/** <summary> Retrieves all the Properties related to the DinosaurStegosaurus Class. </summary>
<remarks> This Class uses the DinosaurPropertySheet for Saving Info from the Current Instance. </remarks> */

class DinosaurStegosaurusPropertySheet : public DinosaurPropertySheet
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Number of Times a Stegosaurus can Toss Zombies. </summary>
<returns> The Number of Times the Stegosaurus can Toss Zombies. </returns> */

std::optional<int> NumTimesToToss;

/** <summary> Gets or Sets a Value which Contains Info about the Number of Zombies a Stegosaurus can Fling. </summary>
<returns> The Number of Zombies the Stegosaurus can Fling. </returns> */

std::optional<int> NumZombiesToFling;

/** <summary> Gets or Sets a Value which Contains Info about the X Grid Coordinate from the Annoying Zombie Condition caused by a Stegosaurus. </summary>
<returns> The X Grid Coordinate from the Annoying Zombie Condition caused by the Stegosaurus. </returns> */

std::optional<int> ZombieAnnoyingGridX;

/** <summary> Gets or Sets a Value which Contains Info about the X Starting Coordinates for the Grid Activation of a Stegosaurus. </summary>
<returns> The X Starting Coordinates for the Grid Activation of the Stegosaurus. </returns> */

std::optional<float> ActivationGridRangeStartX;

/** <summary> Gets or Sets a Value which Contains Info about the X Coordinates Width for the Grid Activation of a Stegosaurus. </summary>
<returns> The X Coordinates Width for the Grid Activation of the Stegosaurus. </returns> */

std::optional<float> ActivationGridRangeWidth;

/** <summary> Gets or Sets a Value which Contains Info about the Up Time a Toss of a Stegosaurus is Ready. </summary>
<returns> The Up Time a Toss of the Stegosaurus is Ready. </returns> */

std::optional<float> TossReadyUpTime;

/** <summary> Gets or Sets a Value which Contains Info about the Toss Time of a Zombie being Kicked by a Stegosaurus. </summary>
<returns> The Toss Time of a Zombie being Kicked by the Stegosaurus. </returns> */

std::optional<float> TossTime;

/** <summary> Gets or Sets a Value which Contains Info about the Toss Height of a Zombie being Kicked by a Stegosaurus. </summary>
<returns> The Toss Height of a Zombie being Kicked by the Stegosaurus. </returns> */

std::optional<float> TossHeight;

/** <summary> Gets or Sets a Value which Contains Info about the Minimum Toss Distance of a Zombie being Kicked by a Stegosaurus. </summary>
<returns> The Minimum Toss Distance of a Zombie being Kicked by the Stegosaurus. </returns> */

std::optional<float> TossDistanceMin;

/** <summary> Gets or Sets a Value which Contains Info about the Maximum Toss Distance of a Zombie being Kicked by a Stegosaurus. </summary>
<returns> The Maximum Toss Distance of a Zombie being Kicked by the Stegosaurus. </returns> */

std::optional<float> TossDistanceMax;

/** <summary> Gets or Sets a Value which Contains Info about the Damage Radius of a Stegosaurus Tail Attack. </summary>
<returns> The Damage Radius of the Stegosaurus' Tail Attack. </returns> */

std::optional<float> TailDamageRadius;

/** <summary> Gets or Sets a Value which Contains Info about the Amount of Damage a Tail Smash Attack of a Stegosaurus does. </summary>
<returns> The Amount of Damage of the Stegosaurus' Smash Attack. </returns> */

std::optional<int> TailSmashDamage;

/** <summary> Gets or Sets a Value which Contains Info about the Amount of Damage a Tail Smash Attack of a Stegosaurus does in its Area of Effect. </summary>
<returns> The Amount of Damage of the Stegosaurus' Smash Attack dealt in its Area of Effect. </returns> */

std::optional<int> TailAOEDamage;

/** <summary> Gets or Sets a Value which Contains Info about the X Grid Coordinate from the Tail Stagger caused by a Stegosaurus. </summary>
<returns> The X Grid Coordinate from the Tail Stagger caused by the Stegosaurus. </returns> */

std::optional<float> ZombieTailStaggerX;

/// <summary> Initializes a new Instance of the DinosaurStegosaurusPropertySheet Class. </summary>

DinosaurStegosaurusPropertySheet();
};

}