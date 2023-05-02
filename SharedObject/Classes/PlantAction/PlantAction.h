#include <optional>
#include <string>

using namespace Global::Definitions;
using namespace Global::Types;
using namespace SharedObject::Properties::Base;

namespace SharedObject::Classes
{
/// <summary> A Class used for Retrieving Info from a Plant Action. </summary>

class PlantAction
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Type of a Plant Action. </summary>
<returns> The Type of the Plant Action. </returns> */

std::optional<PlantActionType*> Type;

/** <summary> Gets or Sets a Value which Contains Info about the Projectile a Plant uses while doing a Shooting Action. </summary>
<returns> The Projectile of the Plant Action. </returns> */

RtWeakPtr<ProjectilePropertySheet*> *Projectile;

/** <summary> Gets or Sets a Value which Contains Info about the Damage Type of a Plant while doing an Exploding Action. </summary>
<returns> The Explode Type of the Plant. </returns> */

std::optional<SplashDamageType*> ExplodeType;

/** <summary> Gets or Sets a Value which Contains Info about the Splash Radius of a Plant while doing an Exploding Action. </summary>
<returns> The Explode Radius of the Plant. </returns> */

std::optional<float> ExplodeRadius;

/** <summary> Gets or Sets a Value which Contains Info about the Trigger Type of a Plant Action. </summary>
<returns> The Trigger Type of the Plant Action. </returns> */

std::optional<PlantActionTriggerType*> TriggerType;

/** <summary> Gets or Sets a Value which Contains Info about the Plant Exploding Condition. </summary>
<returns> A Boolean that Determines if a Plant dies after Exploding or not. </returns> */

std::optional<bool> DieAfterExplode;

/** <summary> Gets or Sets a Value which Contains Info about the Minimum Initial Cooldown Time of a Plant Action. </summary>
<returns> The Minimum Initial Cooldown Time of the Plant Action. </returns> */

std::optional<float> InitialMinCooldownTime;

/** <summary> Gets or Sets a Value which Contains Info about the Minimum Cooldown Time of a Plant Action. </summary>
<returns> The Minimum Cooldown Time of the Plant Action. </returns> */

std::optional<float> CooldownTimeMin;

/** <summary> Gets or Sets a Value which Contains Info about the Maximum Cooldown Time of a Plant Action. </summary>
<returns> The Maximum Cooldown Time of the Plant Action. </returns> */

std::optional<float> CooldownTimeMax;

/** <summary> Gets or Sets a Value which Contains Info about the Velocity Override Value of a Plant Action. </summary>
<returns> The Velocity Override Value of the Plant Action. </returns> */

std::optional<float> XVelocityOverride;

/** <summary> Gets or Sets a Value which Contains Info about the Amount of Damage a Plant Action does. </summary>
<returns> The Amount of Damage that the Plant Action does. </returns> */

std::optional<int> Damage;

/** <summary> Gets or Sets a Value which Contains Info about the Amount of Splash Damage a Plant Action does. </summary>
<returns> The Amount of Splash Damage that the Plant Action does. </returns> */

std::optional<int> SplashDamage;

/** <summary> Gets or Sets a Value which Contains Info about the Burning Condition of a Plant Action. </summary>
<returns> A Boolean that Determines if the Plant Action burns or not. </returns> */

std::optional<bool> Burns;

/** <summary> Gets or Sets a Value which Contains Info about the Amount of Tiles where a Plant Action displace Zombies by Pushbacks. </summary>
<returns> The Amount of Tiles where the Plant Action displace Zombies by Pushbacks. </returns> */

std::optional<int> PushbackAmount;

/** <summary> Gets or Sets a Value which Contains Info about the Chill Duration a Plant Action applies as a Condition. </summary>
<returns> The Chill Duration which the Plant Action applies as a Condition. </returns> */

std::optional<float> ChillDuration;

/** <summary> Gets or Sets a Value which Contains Info about the Freeze Duration a Plant Action applies as a Condition. </summary>
<returns> The Freeze Duration which the Plant Action applies as a Condition. </returns> */

std::optional<float> FreezeDuration;

/** <summary> Gets or Sets a Value which Contains Info about the Stun Duration a Plant Action applies as a Condition. </summary>
<returns> The Stun Duration which the Plant Action applies as a Condition. </returns> */

std::optional<float> StunDuration;

/** <summary> Gets or Sets a Value which Contains Info about the Rectangle where a Plant Action can be Triggered. </summary>
<returns> The Trigger Rectangle of the Plant Action. </returns> */

Rect *RectTriggerRange;

/** <summary> Gets or Sets a Value which Contains Info about the Launch Sound of a Projectile. </summary>
<returns> The Launch Sound of the Projectile. </returns> */

std::string ProjectileLaunchSound;

/** <summary> Gets or Sets a Value which Contains Info about the Spawn Offset of a Plant Action. </summary>
<returns> The Spawn Offset of the Plant Action. </returns> */

SexyVector2 *SpawnOffset;

/** <summary> Gets or Sets a Value which Contains Info about the Order Priority of a Plant Action. </summary>
<remarks> If a Plant Action is marked as a Secondary Action, then, that Action must be Manually triggered from a Special Code. </remarks>

<returns> A Boolean that Determines if the Plant Action is Secondary or not. </returns> */

std::optional<bool> SecondaryAction;

/// <summary> Initializes a new Instance of the PlantAction Class. </summary>

PlantAction();

/// <summary> Releases all the Resources Consumed by the PlantAction Instance. </summary>

virtual ~PlantAction()
{
delete Projectile;
delete RectTriggerRange;

delete SpawnOffset;
}

};

}