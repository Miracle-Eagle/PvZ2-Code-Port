#include <optional>
#include <string>
#include <vector>

using namespace Global::Definitions;
using namespace Global::Types;
using namespace Global::Values;
using namespace SharedObject::Classes;
using namespace SharedObject::Entries;
using namespace SharedObject::Packages;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Properties::Plant
{
/** <summary> Retrieves all the Properties related to the Kernelpult Class. </summary>
<remarks> This Class uses the PlantPropertySheet for Saving Info from the Current Instance. </remarks> */

class KernelpultProps : public PlantPropertySheet
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Chance of lobbing Butter. </summary>
<returns> The Chance of lobbing Butter. </returns> */

std::optional<int> ButterChance;

/** <summary> Gets or Sets a Value which Contains Info about the Duration of the ButterStorm Attack. </summary>
<returns> The Duration of the ButterStorm Attack. </returns> */

std::optional<float> ButterStormDuration;

/** <summary> Gets or Sets a Value which Contains Info about the Number of Additional Missiles lobbed in the ButterStorm Attack. </summary>
<returns> The Number of Additional Missiles shooted in the ButterStorm Attack. </returns> */

std::optional<int> AdditionalButterStormMissiles;

/** <summary> Gets or Sets a Value which Contains Info about the Delay Time of the ButterStorm Attack. </summary>
<returns> The Delay Time of the ButterStorm Attack. </returns> */

std::optional<float> ButterStormDelay;

/** <summary> Gets or Sets a Value which Contains Info about the Speed of the ButterStorm Missile. </summary>
<returns> The Speed of the ButterStorm Missile. </returns> */

std::optional<float> ButterStormMissileSpeed;

/** <summary> Gets or Sets a Value which Contains Info about the Duration of the Butter. </summary>
<returns> The Duration of the Butter. </returns> */

std::optional<float> ButterDuration;

/** <summary> Gets or Sets a Value which Contains Info about the Lob Height of the Projectile. </summary>
<returns> The Lob Height of the Projectile. </returns> */

std::optional<float> ProjectileLobHeight;

/** <summary> Gets or Sets a Value which Contains Info about the Time of Flight of the Projectile. </summary>
<returns> The Time of Flight of the Projectile. </returns> */

std::optional<float> ProjectileTimeOfFlight;

/// <summary> Initializes a new Instance of the KernelpultProps Class. </summary>

KernelpultProps();
};

}