#include <string>

namespace Global::Params
{
/// <summary> A Class used for Retrieving the Level Parameters needed for Initializing a Level Generator. </summary>

class LevelGenLevelParams
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Title of the Level. </summary>
<returns> The Title of the Level. </returns> */

std::wstring Title;

/** <summary> Gets or Sets a Value which Contains Info about the Description of the Level. </summary>
<returns> The Description of the Level. </returns> */

std::wstring Description;

/** <summary> Gets or Sets a Value which Contains Info about the Number of the Level. </summary>
<returns> The Number of the Level. </returns> */

int LevelNumber;

/** <summary> Gets or Sets a Value which Contains Info about how a Game must be Saved. </summary>
<returns> A Boolean that Determines if a Game will be Saved or not. </returns> */

bool DisableSaveGame;

/// <summary> Initializes a new Instance of the LevelGenLevelParams Class. </summary>

LevelGenLevelParams();
};

}