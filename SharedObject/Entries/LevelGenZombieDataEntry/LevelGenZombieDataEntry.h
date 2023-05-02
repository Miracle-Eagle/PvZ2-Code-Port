#include <string>
#include <vector>

namespace SharedObject::Entries
{
/// <summary> A Class Entry used for Retrieving the Zombie Data from a Level Generator. </summary>

class LevelGenZombieDataEntry
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the ID of the Zombie Type. </summary>
<returns> The ID of the Zombie Type. </returns> */

std::string ZombieTypeID;

/** <summary> Gets or Sets a Value which Contains Info about the Weight of a Zombie being Spawned in a Wave. </summary>
<returns> The Weight of the Zombie being Spawned in the Wave. </returns> */

float Weight;

/** <summary> Gets or Sets a Value which Contains Info about the Strength of the Zombies being Spawned in a Wave of a Level. </summary>
<returns> The Strength of the Zombies being Spawned in a Wave of the Level. </returns> */

float Strength;

/** <summary> Gets or Sets a Value which Contains Info about the Worlds that belong to the Spawned Zombies in a Level. </summary>
<returns> The Worlds that belong to the Spawned Zombies in the Level. </returns> */

std::vector<std::string> Worlds;

/** <summary> Gets or Sets a Value which Contains Info about the Keyworlds that belong to the Spawned Zombies in a Level. </summary>
<returns> The Keyworlds that belong to the Spawned Zombies in the Level. </returns> */

std::vector<std::string> Keywords;

/// <summary> Initializes a new Instance of the LevelGenZombieDataEntry Class. </summary>

LevelGenZombieDataEntry();
};

}