#include <optional>
#include <string>
#include <unordered_map>
#include <vector>

using namespace Global::Definitions;
using namespace Global::Types;
using namespace Global::Values;
using namespace SharedObject::Classes;
using namespace SharedObject::Packages;

namespace SharedObject::Properties::Base
{
/** <summary> Retrieves all the Properties related to the Plant Class. </summary>
<remarks> This Class uses the PropertySheetBase for Saving Info of the Current Instance. </remarks> */

class PlantPropertySheet : public PropertySheetBase
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Type Name of a Plant. </summary>
<returns> The Type Name of the Plant. </returns> */

std::string TypeName;

/** <summary> Gets or Sets a Value which Contains Info about the Sun Cost of a Plant. </summary>
<returns> The Sun Cost of the Plant. </returns> */

std::optional<int> Cost;

/** <summary> Gets or Sets a Value which Contains Info about the Sun Cost of a Plant in Beghouled Blitz. </summary>
<returns> The Sun Cost of the Plant in Beghouled Blitz. </returns> */

std::optional<int> BeghouledCost;

/** <summary> Gets or Sets a Value which Contains Info about the Hitpoints of a Plant. </summary>
<returns> The Hitpoints of the Plant. </returns> */

std::optional<float> Hitpoints;

/** <summary> Gets or Sets a Value which Contains Info about the Cooldown of a Plant Seed Packet. </summary>
<returns> The Cooldown of the Plant Seed Packet. </returns> */

std::optional<float> PacketCooldown;

/** <summary> Gets or Sets a Value which Contains Info about the Starting Cooldown of a Plant Seed Packet. </summary>
<returns> The Starting Cooldown of the Plant Seed Packet. </returns> */

std::optional<float> StartingCooldown;

/** <summary> Gets or Sets a Value which Contains Info about the Plant Food Duration Seconds of a Plant. </summary>
<returns> The Effects Duration Seconds of the Plant. </returns> */

std::optional<float> PlantFoodDurationSeconds;

/** <summary> Gets or Sets a Value which Contains Info about the Plant Food Play Count of a Plant. </summary>
<remarks>The PlantFoodPlayCount Value refers to the Number of Times the Plant Food Effects Loop. </remarks>

<returns> The Effects Play Count of the Plant. </returns> */

std::optional<int> PlantFoodPlayCount;

/** <summary> Gets or Sets a Value which Contains Info about the Time when a Plant Shines while having the Plant Food Effects on. </summary>
<returns> The Effects Shine Time of the Plant. </returns> */

std::optional<float> PlantFoodShineTime;

/** <summary> Gets or Sets a Value which Contains Info about the Activation Sound a Plant does while having the Plant Food Effects on. </summary>
<returns> The Effects Activation Sound of the Plant. </returns> */

std::string PlantFoodActivationSound;

/** <summary> Gets or Sets a Value which Contains Info about the Sound Effects a Plant does while being Helped by another Plant. </summary>
<returns> The Helped Activation Sound of the Plant. </returns> */

std::string HelpedActivationSound;

/** <summary> Gets or Sets a Value which Contains Info about the Grid Type where a Plant can be Placed. </summary>
<returns> The Grid Type of the Plant. </returns> */

std::optional<PlantGridPlantingType*> PlantGridType;

/** <summary> Gets or Sets a Value which Contains Info about the Actions a Plant does. </summary>
<returns> The Actions of the Plant. </returns> */

std::vector<PlantAction*> Actions;

/** <summary> Gets or Sets a Value which Contains Info about the Powers a Plant has. </summary>
<returns> The Powers of the Plant. </returns> */

PowerSet *Powers;

/** <summary> Gets or Sets a Value which Contains Info about the Width of a Plant in Grid Cells. </summary>
<returns> The Grid Width of the Plant. </returns> */

std::optional<int> GridWidth;

/** <summary> Gets or Sets a Value which Contains Info about the Height of a Plant in Grid Cells. </summary>
<returns> The Grid Height of the Plant. </returns> */

std::optional<int> GridHeight;

/** <summary> Gets or Sets a Value which Contains Info about the Damage amount a Plant deals to Grid Items. </summary>
<returns> The Damage amount the Plant deals to Grid Items. </returns> */

std::optional<int> GridItemDamage;

/** <summary> Gets or Sets a Value which Contains Info about the Planting Offset in the Y Coordinate of a Plant. </summary>
<returns> The Planting Offset in the Y Coordinate of the Plant. </returns> */

std::optional<float> PlantingOffsetY;

/** <summary> Gets or Sets a Value which Contains Info about the Cursor Preview Offset of a Plant. </summary>
<returns> The Cursor Preview Offset of the Plant. </returns> */

SexyVector2 *CursorPreviewOffset;

/** <summary> Gets or Sets a Value which Contains Info about the Art Center of a Plant. </summary>
<returns> The Art Center of the Plant. </returns> */

SexyVector2 *ArtCenter;

/** <summary> Gets or Sets a Value which Contains Info about the Zen Garden Offset of a Plant. </summary>
<returns> The Zen Garden Offset of the Plant. </returns> */

SexyVector2 *ZenGardenOffset;

/** <summary> Gets or Sets a Value which Contains Info about the Small Scale of a Plant in the Zen Garden. </summary>
<returns> The Small Scale of the Plant in the Zen Garden. </returns> */

std::optional<float> ZenGardenSmallScale;

/** <summary> Gets or Sets a Value which Contains Info about the Large Scale of a Plant in the Zen Garden. </summary>
<returns> The Large Scale of the Plant in the Zen Garden. </returns> */

std::optional<float> ZenGardenLargeScale;

/** <summary> Gets or Sets a Value which Contains Info about the Adjustments for the HitRect of a Plant. </summary>
<remarks>The HitRect Value refers to the Rectangle where a Plant can be Hit. </remarks>

<returns> The HitRect Adjustments of the Plant. </returns> */

Rect *HitRectAdjust;

/** <summary> Gets or Sets a Value which Contains Info about the Height of a Plant as a Board Entity. </summary>
<returns> The Height of the Plant as a Board Entity. </returns> */

BoardEntityHeight *Height;

/** <summary> Gets or Sets a Value which Contains Info about the Height of a Plant being Drawn in a Endless Zone. </summary>
<returns> The Height of the Plant being Drawn in a Endless Zone. </returns> */

std::optional<int> DangerRoomWeight;

/** <summary> Gets or Sets a Value which Contains Info about the Height of having a Sprout of a Specific Plant in the Zen Garden. </summary>
<returns> The Height of having a Sprout of the Plant in the Zen Garden. </returns> */

std::optional<int> ZenGardenSproutWeight;

/** <summary> Gets or Sets a Value which Contains Info about the Boost Cost of a Plant in the Zen Garden. </summary>
<returns> The Boost Cost of the Plant in the Zen Garden. </returns> */

std::optional<int> ZenGardenBoostCost;

/** <summary> Gets or Sets a Value which Contains Info about the Override Duration Seconds of a Plant in the Zen Garden. </summary>
<returns> The Override Duration Seconds of the Plant in the Zen Garden. </returns> */

std::optional<int> ZenGardenDurationOverrideSeconds;

/** <summary> Gets or Sets a Value which Contains Info about the Treasure Condition of a Plant in the Zen Garden. </summary>
<returns> A Boolean that Determines if the Zen Garden Plant is a Treasure Plant or not. </returns> */

std::optional<bool> IsZenGardenTreasurePlant;

/** <summary> Gets or Sets a Value which Contains Info about the Water Condition of a Plant in the Zen Garden. </summary>
<returns> A Boolean that Determines if the Zen Garden Plant is an Aquatic Plant or not. </returns> */

std::optional<bool> IsZenGardenWaterPlant;

/** <summary> Gets or Sets a Value which Contains Info about the Boosts of a Plant. </summary>
<returns> The Boosts of the Plant. </returns> */

std::vector<PlantBoost*> Boosts;

/** <summary> Gets or Sets a Value which Contains Info about the Stats of a Plant. </summary>
<returns> The Stats of the Plant. </returns> */

std::vector<BoardEntityStat*> PlantStats;

/** <summary> Gets or Sets a Value which Contains Info about the Valid Stages where a Plant can be Placed. </summary>
<returns> The Valid Stages of the Plant. </returns> */

std::vector<std::string> ValidStages;

/** <summary> Gets or Sets a Value which Contains Info about Suggestion Alternatives of a Plant. </summary>
<returns> The Suggestion Alternatives of the Plant. </returns> */

std::vector<std::string> SuggestionAlts;

/** <summary> Gets or Sets a Value which Contains Info about Grid Area Restrinctions of a Plant. </summary>
<remarks>The Grid Area Restrinctions avoid a Plant being Placed on a Specific Spot. </remarks>

<returns> The Grid Area Restrinctions of the Plant. </returns> */

Rect *RestrictPlantingToGridArea;

/** <summary> Gets or Sets a Value which Contains Info about the First Aid Condition of a Plant. </summary>
<returns> A Boolean that Determines if the Plant can Receive First Aid or not. </returns> */

std::optional<bool> CanReceiveFirstAid;

/** <summary> Gets or Sets a Value which Contains Info about the Consumption of a Plant. </summary>
<remarks>A Consumable Plant dissapears once its Triggered. </remarks>

<returns> A Boolean that Determines if the Plant is Consumable or not. </returns> */

std::optional<bool> IsConsumable;

/** <summary> Gets or Sets a Value which Contains Info about the Activation of a Plant. </summary>
<remarks>An Instant Plant is Triggered almost at the same time its Placed in the Lawn. </remarks>

<returns> A Boolean that Determines if the Plant is Instant or not. </returns> */

std::optional<bool> IsInstant;

/** <summary> Gets or Sets a Value which Contains Info about the Water Placing Condition of a Plant. </summary>
<returns> A Boolean that Determines if the Plant can be Planted in Water or not. </returns> */

std::optional<bool> CanLiveOnWaves;

/** <summary> Gets or Sets a Value which Contains Info about the Idle Animation Weights of a Plant. </summary>
<returns> The Idle Animation Weights of the Plant. </returns> */

std::unordered_map<std::string, int> IdleAnimationWeights;

/** <summary> Gets or Sets a Value which Contains Info about the Animation Rigurator Properties of a Plant. </summary>
<returns> The Animation Rigurator Properties of the Plant. </returns> */

RtWeakPtr<PlantAnimRigPropertySheet*> *AnimRigProps;

/** <summary> Gets or Sets a Value which Contains Info about the Placing Effects of a Plant. </summary>
<returns> A Boolean that Determines if the Placing Effects of the Plant will be Hidden or not. </returns> */

std::optional<bool> HidePlantingEffects;

/** <summary> Gets or Sets a Value which Contains Info about the Chance of a Plant being Boosted after reaching the Mastery Level. </summary>
<returns> The Boost Chance of the Plant after reaching the Mastery Level. </returns> */

std::optional<float> MasteryBoostChance;

/** <summary> Gets or Sets a Value which Contains Info about the Resistance Piercing a Plant does after reaching the Mastery Level. </summary>
<returns> The Resistance Piercing a Plant does after reaching the Mastery Level. </returns> */

std::optional<float> MasteryResistancePiercing;

/** <summary> Gets or Sets a Value which Contains Info about the Multi Grid Layer of a Plant. </summary>
<returns> The Multi Grid Layer of the Plant. </returns> */

std::optional<MultiPlantGridLayer*> MultiPlantLayer;

/** <summary> Gets or Sets a Value which Contains Info about the Upgrade Condition of a Plant. </summary>
<returns> A Boolean that Determines if the Plant can be Placed in the same Spot for an Upgrade or not. </returns> */

std::optional<bool> CanPlantAgainToUpgrade;

/// <summary> Initializes a new Instance of the PlantPropertySheet Class. </summary>

PlantPropertySheet();

/// <summary> Releases all the Resources Consumed by the PlantPropertySheet Instance. </summary>

virtual ~PlantPropertySheet()
{
delete Powers;
delete CursorPreviewOffset;

delete ArtCenter;
delete ZenGardenOffset;

delete HitRectAdjust;
delete Height;

delete RestrictPlantingToGridArea;
delete AnimRigProps;
}

protected:

/** <summary> Sets a Value which Serves as a Reference to a Projectile from the ProjectileTypes Package. </summary>
<returns> The ProjectileTypes Reference Obtained. </returns> */

static ProjectileTypes *const ProjectileTypes_Reference;

/** <summary> Sets a Value which Serves as a Reference to a Property from the PropertySheets Package. </summary>
<returns> The PropertySheets Reference Obtained. </returns> */

static PropertySheets *const PropertySheets_Reference;
};

}