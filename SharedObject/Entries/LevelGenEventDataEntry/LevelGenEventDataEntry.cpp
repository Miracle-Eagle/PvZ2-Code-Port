#include "LevelGenEventDataEntry.h"

namespace SharedObject::Entries
{
/// <summary> Setups all the Fields from the LevelGenEventDataEntry Instance. </summary>

LevelGenEventDataEntry::LevelGenEventDataEntry()
{
this->EventID = "MyID";
this->PropertySheet = "Event PropertySheet";

this->EventLevel = 0;
this->Prerequisite = "Event Pre-requisites (Optional)";

this->Priority = 0;
this->Weight = 0.0f;
}

}