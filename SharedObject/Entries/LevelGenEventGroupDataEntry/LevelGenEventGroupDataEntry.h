#include <string>
#include <unordered_map>

namespace SharedObject::Entries { class LevelGenEventDataEntry; }

namespace SharedObject::Entries
{
/// <summary> A Class Entry used for Retrieving the Event Group Data from a Level Generator. </summary>

class LevelGenEventGroupDataEntry
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the ID of an Event Group. </summary>
<returns> The ID of the Event Group. </returns> */

std::string EventGroupID;

/** <summary> Gets or Sets a Value which Contains Info about the Data of an Event. </summary>
<returns> The Data of the Event. </returns> */

std::unordered_map<std::string, LevelGenEventDataEntry*> EventData;

/** <summary> Gets or Sets a Value which Contains Info about how a Event Group must be Loaded. </summary>
<returns> A Boolean that Determines if an Event Group will be Loaded as an Obstacle Group or not. </returns> */

bool IsObstacleGroup;

/// <summary> Initializes a new Instance of the LevelGenEventGroupDataEntry Class. </summary>

LevelGenEventGroupDataEntry();
};

}