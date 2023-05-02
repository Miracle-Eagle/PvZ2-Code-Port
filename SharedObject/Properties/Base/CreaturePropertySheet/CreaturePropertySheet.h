#include <optional>
#include <string>
#include <vector>

#include "../PropertySheetBase.h"

using namespace Global::Definitions;
using namespace SharedObject::Classes;

namespace SharedObject::Properties::Base
{
/** <summary> Retrieves all the Properties related to the CreatureTypes Class. </summary>
<remarks> This Class uses the PropertySheetBase for Saving Info of the Current Instance. </remarks> */

class CreaturePropertySheet : public PropertySheetBase
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Speed of a Creature. </summary>
<returns> The Speed of the Creature. </returns> */

std::optional<float> Speed;

/** <summary> Gets or Sets a Value which Contains Info about the Speed Variance of a Creature. </summary>
<returns> The Speed Variance of the Creature. </returns> */

std::optional<float> SpeedVariance;

/** <summary> Gets or Sets a Value which Contains Info about the Exit Speed-Up of a Creature. </summary>
<returns> The Exit Speed-Up of the Creature. </returns> */

std::optional<float> ExitSpeedup;

/** <summary> Gets or Sets a Value which Contains Info about the Height of a Creature in Grid Cells. </summary>
<returns> The Grid Height of the Creature. </returns> */

std::optional<int> GridHeight;

/** <summary> Gets or Sets a Value which Contains Info about the Rectangle where a Creature can be Hit. </summary>
<returns> The Hit Rectangle of the Creature. </returns> */

Rect *HitRect;

/** <summary> Gets or Sets a Value which Contains Info about the Rectangle where a Creature can Attack. </summary>
<returns> The Attack Rectangle of the Creature. </returns> */

Rect *AttackRect;

/** <summary> Gets or Sets a Value which Contains Info about the Art Center of a Creature. </summary>
<returns> The Art Center of the Creature. </returns> */

SexyVector2 *ArtCenter;

/** <summary> Gets or Sets a Value which Contains Info about the Shadow Offset of a Creature. </summary>
<returns> The Shadow Offset of the Creature. </returns> */

SexyVector3 *ShadowOffset;

/** <summary> Gets or Sets a Value which Contains Info about the Shadow Scaling of a Creature. </summary>
<returns> The Shadow Scaling of the Creature. </returns> */

SexyVector2 *ShadowScaling;

/** <summary> Gets or Sets a Value which Contains Info about the Track Name of a Creature when is Walking on the Ground. </summary>
<returns> The Ground Track Name of the Creature. </returns> */

std::string GroundTrackName;

/** <summary> Gets or Sets a Value which Contains Info about the Coordinates where the Grid Cells of a Creature can be Extended. </summary>
<returns> The Grid Extension of the Creature. </returns> */

Point *GridExtents;

/** <summary> Gets or Sets a Value which Contains Info about the Stats of a Zombie. </summary>
<returns> The Stats of the Zombie. </returns> */

std::vector<BoardEntityStat*> ZombieStats;

/** <summary> Gets or Sets a Value which Contains Info about the Walking Sound of a Creature. </summary>
<returns> The Sound on Walk of the Creature. </returns> */

std::string SoundOnWalk;

/** <summary> Gets or Sets a Value which Contains Info about the Idle Sound of a Creature. </summary>
<returns> The Sound on Idle of the Creature. </returns> */

std::string SoundOnIdle;

/** <summary> Gets or Sets a Value which Contains Info about the Almanac Scale of a Creature. </summary>
<returns> The Almanac Scale of the Creature. </returns> */

std::optional<float> AlmanacScale;

/** <summary> Gets or Sets a Value which Contains Info about the Almanac Offset of a Creature. </summary>
<returns> The Almanac Offset of the Creature. </returns> */

SexyVector2 *AlmanacOffset;

/// <summary> Initializes a new Instance of the CreaturePropertySheet Class. </summary>

CreaturePropertySheet();

/// <summary> Releases all the Resources Consumed by the CreaturePropertySheet Instance. </summary>

virtual ~CreaturePropertySheet()
{
delete HitRect;
delete AttackRect;

delete ArtCenter;
delete ShadowOffset;

delete ShadowScaling;
delete GridExtents;

delete AlmanacOffset;
}

};

}