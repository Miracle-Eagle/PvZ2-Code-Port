#include <string>
#include <vector>

namespace SharedObject::Properties::Game
{
/// <summary> A Class used for Retrieving the Enable List from a MiniGame Music Module. </summary>

class MiniGameMusicEnableList
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Enabled Suffixes of a MiniGame Music Module. </summary>
<returns> The Enabled Suffixes of the MiniGame Music Module. </returns> */

std::vector<std::string> EnabledMiniGameSuffixes;

/** <summary> Gets or Sets a Value which Contains Info about the Enabled Worlds of a MiniGame Music Module. </summary>
<returns> The Enabled Worlds of the MiniGame Music Module. </returns> */

std::vector<std::string> EnabledMiniGameWorlds;

/// <summary> Initializes a new Instance of the MiniGameMusicEnableList Class. </summary>

MiniGameMusicEnableList();
};

}