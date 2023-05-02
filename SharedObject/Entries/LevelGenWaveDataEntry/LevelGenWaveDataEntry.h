#include <string>
#include <unordered_map>
#include <vector>

namespace SharedObject::Entries
{
/// <summary> A Class Entry used for Retrieving the Wave Data from a Level Generator. </summary>

class LevelGenWaveDataEntry
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the UID of a Level. </summary>
<returns> The UID of the Level. </returns> */

std::string UID;

/** <summary> Gets or Sets a Value which Contains Info about the Weight of a Wave being Raised in a Level. </summary>
<returns> The Weight of the Wave being Raised in the Level. </returns> */

float Weight;

/** <summary> Gets or Sets a Value which Contains Info about the Minimum Strength of the Zombies being Spawned in a Wave of a Level. </summary>
<returns> The Minimum Strength of the Zombies being Spawned in a Wave of the Level. </returns> */

float StrengthMin;

/** <summary> Gets or Sets a Value which Contains Info about the Maximum Strength of the Zombies being Spawned in a Wave of a Level. </summary>
<returns> The Maximum Strength of the Zombies being Spawned in a Wave of the Level. </returns> */

float StrengthMax;

/** <summary> Gets or Sets a Value which Contains Info about the Maximum Number of Zombie Types Spawned in a Wave. </summary>
<returns> The Maximum Number of Zombie Types Spawned in the Wave. </returns> */

int MaxZombieTypes;

/** <summary> Gets or Sets a Value which Contains Info about the Keyword Limits of a Wave. </summary>
<returns> The Keyword Limits of the Wave. </returns> */

std::unordered_map<std::string, int> KeywordLimits;

/** <summary> Gets or Sets a Value which Contains Info about the Minimum Number of Plant Food given in a Wave. </summary>
<returns> The Minimum Number of Plant Food given in the Wave. </returns> */

int PlantFoodMin;

/** <summary> Gets or Sets a Value which Contains Info about the Maximum Number of Plant Food given in a Wave. </summary>
<returns> The Maximum Number of Plant Food given in the Wave. </returns> */

int PlantFoodMax;

/** <summary> Gets or Sets a Value which Contains Info about the Huge Waves of a Level. </summary>
<returns> The Huge Waves of the Level. </returns> */

std::vector<int> HugeWaves;

/** <summary> Gets or Sets a Value which Contains Info about the Waves of a Level. </summary>
<returns> The Waves of the Level. </returns> */

std::vector<float> Waves;

/// <summary> Initializes a new Instance of the LevelGenWaveDataEntry Class. </summary>

LevelGenWaveDataEntry();
};

}