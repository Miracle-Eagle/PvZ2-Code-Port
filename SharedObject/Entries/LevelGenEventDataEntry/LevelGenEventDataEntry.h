#include <string>

namespace SharedObject::Entries
{
/// <summary> A Class Entry used for Retrieving the Event Data from a Level Generator. </summary>

class LevelGenEventDataEntry
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the ID of an Event. </summary>
<returns> The ID of the Event. </returns> */

std::string EventID;

/** <summary> Gets or Sets a Value which Contains Info about the PropertySheet of an Event. </summary>
<returns> The PropertySheet of the Event. </returns> */

std::string PropertySheet;

/** <summary> Gets or Sets a Value which Contains Info about the Level of an Event. </summary>
<returns> The Level of the Event. </returns> */

int EventLevel;

/** <summary> Gets or Sets a Value which Contains Info about the Prerequisite that an Event needs to Occur. </summary>
<returns> The Prerequisite of the Event. </returns> */

std::string Prerequisite;

/** <summary> Gets or Sets a Value which Contains Info about the Priority Factor of an Event before Occuring. </summary>
<returns> The Priority of the Event. </returns> */

int Priority;

/** <summary> Gets or Sets a Value which Contains Info about the Weight of an Event being Triggered in a Wave. </summary>
<returns> The Weight of the Event being Triggered in the Wave. </returns> */

float Weight;

/// <summary> Initializes a new Instance of the LevelGenEventDataEntry Class. </summary>

LevelGenEventDataEntry();
};

}