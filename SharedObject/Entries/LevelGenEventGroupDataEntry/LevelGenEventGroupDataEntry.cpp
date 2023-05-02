#include "LevelGenEventGroupDataEntry.h"
#include "LevelGenEventDataEntry.h"

namespace SharedObject::Entries
{
/// <summary> Setups all the Fields from the LevelGenEventGroupDataEntry Instance. </summary>

LevelGenEventGroupDataEntry::LevelGenEventGroupDataEntry()
{
this->EventGroupID = "MyGroupID";
this->EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>();

this->IsObstacleGroup = false;
}

}