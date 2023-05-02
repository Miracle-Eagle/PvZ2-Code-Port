#include <optional>

using namespace Global::Definitions;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Dinosaur
{
/** <summary> Retrieves all the Properties related to the DinosaurTyrannosaurus Class. </summary>
<remarks> This Class uses the DinosaurPropertySheet for Saving Info from the Current Instance. </remarks> */

class DinosaurTyrannosaurusPropertySheet : public DinosaurPropertySheet
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Eat Cooldown of a Tyrannosaurus. </summary>
<returns> The Eat Cooldown of the Tyrannosaurus. </returns> */

std::optional<float> EatCooldown;

/** <summary> Gets or Sets a Value which Contains Info about the Maximum Number of Zombies a Tyrannosaurus can Eat. </summary>
<returns> The Maximum Number of Zombies a Tyrannosaurus can Eat. </returns> */

std::optional<int> MaxZombiesToEat;

/** <summary> Gets or Sets a Value which Contains Info about the X Grid Coordinate from the Eating Attack of a Tyrannosaurus. </summary>
<returns> The X Grid Coordinate of the Tyrannosaurus' Eating Attack. </returns> */

std::optional<int> EatGridX;

/** <summary> Gets or Sets a Value which Contains Info about the Rectangle where a Tyrannosaurus can Eat. </summary>
<returns> The Eat Rectangle of the Tyrannosaurus. </returns> */

Rect *EatRect;

/** <summary> Gets or Sets a Value which Contains Info about the Maximum Number of Times a Tyrannosaurus can Roar. </summary>
<returns> The Maximum Number of Times a Tyrannosaurus can Roar. </returns> */

std::optional<int> MaxTimesToRoar;

/** <summary> Gets or Sets a Value which Contains Info about the Roar Delay of the Tyrannosaurus. </summary>
<returns> The Roar Delay of the Tyrannosaurus. </returns> */

std::optional<float> RoarDelay;

/** <summary> Gets or Sets a Value which Contains Info about the Number of Seconds a Tyrannosaurus needs to Rest after a Roar. </summary>
<returns> The Number of Seconds a Tyrannosaurus needs to Rest after a Roar. </returns> */

std::optional<float> Cooldown;

/// <summary> Initializes a new Instance of the DinosaurTyrannosaurusPropertySheet Class. </summary>

DinosaurTyrannosaurusPropertySheet();

/// <summary> Releases all the Resources Consumed by the DinosaurTyrannosaurusPropertySheet Instance. </summary>

virtual ~DinosaurTyrannosaurusPropertySheet()
{
delete EatRect;
}

};

}