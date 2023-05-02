#include <string>
#include <vector>

namespace SharedObject::Entries
{
/// <summary> A Class Entry used for Retrieving the World Config from a Level Generator. </summary>

class LevelGenWorldConfigEntry
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the World of a Level. </summary>
<returns> The World of the Level. </returns> */

std::string World;

/** <summary> Gets or Sets a Value which Contains Info about the Game Mode of a Level. </summary>
<returns> The Game Mode of the Level. </returns> */

std::string GameMode;

/** <summary> Gets or Sets a Value which Contains Info about the Stage Module of a Level. </summary>
<returns> The Stage Module of the Level. </returns> */

std::string StageModule;

/** <summary> Gets or Sets a Value which Contains Info about the Loot Module of a Level. </summary>
<returns> The Loot Module of the Level. </returns> */

std::string LootModule;

/** <summary> Gets or Sets a Value which Contains Info about the Default Modules of a Level. </summary>
<returns> The Default Modules of the Level. </returns> */

std::vector<std::string> DefaultModules;

/** <summary> Gets or Sets a Value which Contains Info about the Required Event Group IDS of a Level. </summary>
<returns> The Required Event Group IDS of the Level. </returns> */

std::vector<std::string> RequiredEventGroupIds;

/** <summary> Gets or Sets a Value which Contains Info about the Additional Event Group IDS of a Level. </summary>
<returns> The Additional Event Group IDS of the Level. </returns> */

std::vector<std::string> AdditionalEventGroupIds;

/** <summary> Gets or Sets a Value which Contains Info about the Minimum Number of Events in a Level. </summary>
<returns> The Minimum Number of Events in the Level. </returns> */

int MinEventCount;

/** <summary> Gets or Sets a Value which Contains Info about the Maximum Number of Events in a Level. </summary>
<returns> The Maximum Number of Events in the Level. </returns> */

int MaxEventCount;

/** <summary> Gets or Sets a Value which Contains Info about the Obstacle Group IDS of a Level. </summary>
<returns> The Obstacle Group IDS of the Level. </returns> */

std::vector<std::string> ObstacleGroupIds;

/** <summary> Gets or Sets a Value which Contains Info about the Minimum Number of Obstacles in a Level. </summary>
<returns> The Minimum Number of Obstacles in the Level. </returns> */

int MinObstacleCount;

/** <summary> Gets or Sets a Value which Contains Info about the Maximum Number of Obstacles in a Level. </summary>
<returns> The Maximum Number of Obstacles in the Level. </returns> */

int MaxObstacleCount;

/// <summary> Initializes a new Instance of the LevelGenWorldConfigEntry Class. </summary>

LevelGenWorldConfigEntry();
};

}