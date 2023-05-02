#include "LevelGenWorldConfigEntry.h"

namespace SharedObject::Entries
{
/// <summary> Setups all the Fields from the LevelGenWorldConfigEntry Instance. </summary>

LevelGenWorldConfigEntry::LevelGenWorldConfigEntry()
{
this->World = "WorldName";
this->GameMode = "Level GameMode";

this->StageModule = "Level StageModule";
this->LootModule = "Level LootModule";

this->DefaultModules = std::vector<std::string>(0);
this->RequiredEventGroupIds = std::vector<std::string>(0);

this->AdditionalEventGroupIds = std::vector<std::string>(0);
this->MinEventCount = 0;

this->MaxEventCount = 0;
this->ObstacleGroupIds = std::vector<std::string>(0);

this->MinObstacleCount = 0;
this->MaxObstacleCount = 0;
}

}