#include <string>
#include <unordered_map>
#include <vector>

using namespace SharedObject::Entries;

namespace SharedObject::Properties::Game
{
/// <summary> A Class used for Retrieving the Data from a Level Generator. </summary>

class LevelGenData
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Config of a Level Generator. </summary>
<returns> The Config of the Level Generator. </returns> */

std::unordered_map<std::string, float> Config;

/** <summary> Gets or Sets a Value which Contains Info about the World Configs of a Level Generator. </summary>
<returns> The World Configs of the Level Generator. </returns> */

std::unordered_map<std::string, LevelGenWorldConfigEntry*> WorldConfigs;

/** <summary> Gets or Sets a Value which Contains Info about the Wave Data of a Level Generator. </summary>
<returns> The Wave Data of the Level Generator. </returns> */

std::unordered_map<std::string, LevelGenWaveDataEntry*> WaveData;

/** <summary> Gets or Sets a Value which Contains Info about the Zombie Data of a Level Generator. </summary>
<returns> The Zombie Data of the Level Generator. </returns> */

std::unordered_map<std::string, LevelGenZombieDataEntry*> ZombieData;

/** <summary> Gets or Sets a Value which Contains Info about the Event Group Data of a Level Generator. </summary>
<returns> The Event Group Data of the Level Generator. </returns> */

std::unordered_map<std::string, LevelGenEventGroupDataEntry*> EventGroupData;

/** <summary> Gets or Sets a Value which Contains Info about the Custom Seeds of a Level Generator. </summary>
<returns> The Custom Seeds of the Level Generator. </returns> */

std::vector<LevelGenCustomSeedEntry*> CustomSeeds;

/// <summary> Initializes a new Instance of the LevelGenData Class. </summary>

LevelGenData();
};

}