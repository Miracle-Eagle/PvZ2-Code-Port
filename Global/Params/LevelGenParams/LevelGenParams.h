#include <string>

namespace Global::Params
{
/** <summary> A Class used for Retrieving the Parameters from a Level Generator. </summary> */

class LevelGenParams
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the World of the Level. </summary>
<returns> The World of the Level. </returns> */

std::string World;

/** <summary> Gets or Sets a Value which Contains Info about the Seed of the Level. </summary>
<returns> The Seed of the Level. </returns> */

std::string Seed;

/** <summary> Gets or Sets a Value which Contains Info about the Identifier of the Level. </summary>
<returns> The Identifier of the Level. </returns> */

std::string UniqueIdentifier;

/** <summary> Gets or Sets a Value which Contains Info about the Parameters of a Level. </summary>
<returns> The Parameters of a Level. </returns> */

LevelGenLevelParams *LevelParams;

/// <summary>Initializes a new Instance of the LevelGenParams Class. </summary>

LevelGenParams();

/// <summary> Releases all the Resources Consumed by the LevelGenParams Instance. </summary>

virtual ~LevelGenParams()
{
delete LevelParams;
}

};

}