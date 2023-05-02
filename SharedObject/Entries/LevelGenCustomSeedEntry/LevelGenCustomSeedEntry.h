#include <string>

namespace SharedObject::Entries
{
/// <summary> A Class Entry used for Retrieving the Custom Seed from a Level Generator. </summary>

class LevelGenCustomSeedEntry
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the World of the Level. </summary>
<returns> The World of the Level. </returns> */

std::string World;

/** <summary> Gets or Sets a Value which Contains Info about the Seed of the Level. </summary>
<returns> The Seed of the Level. </returns> */

std::string Seed;

/// <summary> Initializes a new Instance of the LevelGenCustomSeedEntry Class. </summary>

LevelGenCustomSeedEntry();
};

}