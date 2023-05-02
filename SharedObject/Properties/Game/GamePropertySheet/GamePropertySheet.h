#include <optional>
#include <string>
#include <vector>

using namespace Global::Values;

namespace SharedObject::Properties::Game
{
/// <summary> A Class used for Retrieving Info from the Game PropertySheet. </summary>

class GamePropertySheet
{

protected:

/** <summary> Gets or Sets a Value which Contains Info about the Display Order of a PlantType. </summary>
<remarks> This is no longer a Serializable Value, meaning that, now its Read from LibSource instead of JSON. </remarks>

<returns> The PlantType Display Order. </returns> */

static std::vector<std::string> PlantTypeOrder;

public:

/** <summary> Gets or Sets a Value which Contains Info about the Almanac Order of a Zombie. </summary>
<returns> The Zombie Almanac Order. </returns> */

std::vector<std::string> ZombieAlmanacOrder;

/** <summary> Gets or Sets a Value which Contains Info about the Sprout First Level Threshold. </summary>
<returns> The Sprout First Level Threshold. </returns> */

std::vector<std::string> SproutFirstLevelThreshold;

/** <summary> Gets or Sets a Value which Contains Info about the Number of Stars needed per Costume. </summary>
<returns> The Number of Stars needed per Costume. </returns> */

std::optional<int> StarsPerCostume;

/** <summary> Gets or Sets a Value which Contains Info about the Number of Keys given per Costume. </summary>
<returns> The Number of Keys given per Costume. </returns> */

std::optional<int> KeysPerCostume;

/** <summary> Gets or Sets a Value which Contains Info about the Number of Coins needed per Key. </summary>
<returns> The Number of Coins needed per Key. </returns> */

std::optional<int> CoinsPerKey;

/** <summary> Gets or Sets a Value which Contains Info about the Purchase Price in Coins of a LawnMower. </summary>
<returns> The Purchase Price in Coins of a LawnMower. </returns> */

std::optional<int> LawnMowerPurchasePriceInCoins;

/** <summary> Gets or Sets a Value which Contains Info about the Alpha Constant of a PowerTile Propagation. </summary>
<returns> The Alpha Constant of a PowerTile Propagation. </returns> */

std::optional<float> PowerTilePropagationAlpha;

/** <summary> Gets or Sets a Value which Contains Info about the Delay Time of a PowerTile Propagation. </summary>
<returns> The Delay Time of a PowerTile Propagation. </returns> */

std::optional<float> PowerTilePropagationDelay;

/** <summary> Gets or Sets a Value which Contains Info about the Initial Delay Time of a PowerTile Propagation. </summary>
<returns> The Initial Delay Time of a PowerTile Propagation. </returns> */

std::optional<float> PowerTilePropagationInitialDelay;

/** <summary> Gets or Sets a Value which Contains Info about the Crushing Damage Scale a Zombie has when attacking to another Zombie. </summary>
<returns> The Crushing Damage Scale a Zombie has when attacking to another Zombie. </returns> */

std::optional<float> ZombieVsZombieCrushingDamageScale;

/** <summary> Gets or Sets a Value which Contains Info about the Crushing Damage Scale a Zombie has when attacking to a Friendly Zombie. </summary>
<returns> The Crushing Damage Scale a Zombie has when attacking to a Friendly Zombie. </returns> */

std::optional<float> ZombieVsFriendlyZombieDamageScale;

/** <summary> Gets or Sets a Value which Contains Info about the Zombie Conditions which Invincibility overrides. </summary>
<returns> The Zombie Conditions which Invincibility overrides. </returns> */

std::vector<ZombieConditions*> ZombieConditionsWhichInvincibleOverrides;

/** <summary> Gets or Sets a Value which Contains Info about the SeedSlot Rental Cost. </summary>
<returns> The SeedSlot Rental Cost. </returns> */

std::optional<int> SeedSlotRentalCost;

/// <summary> Allows Storing Tasks for the GamePropertySheet Instance. </summary>

GamePropertySheet();
};

}