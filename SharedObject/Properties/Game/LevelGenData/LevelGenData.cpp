#include "LevelGenData.h"

using namespace SharedObject::Entries;

namespace SharedObject::Properties::Game
{
/// <summary> Setups all the Fields from the LevelGenData Instance. </summary>

LevelGenData::LevelGenData()
{

this->Config = std::unordered_map<std::string, float>
{

{ "DelayBeforeHugeWave", 7.5f },
{ "MaxNextWaveHealthPercent", 0.6500000000000001f },
{ "MinNextWaveHealthPercent", 0.5f },
{ "PlantFoodPreHugeWaveWeight", 2 },
{ "StrengthWeightScalar", 2.5f },
{ "TimeToFirstWave", 18 },
{ "TimeToFirstWaveConveyor", 5 }

};


this->WorldConfigs = std::unordered_map<std::string, LevelGenWorldConfigEntry*>
{

{ 
"beach", 

new LevelGenWorldConfigEntry()
{
World = "beach",
GameMode = "SeedChooser",
StageModule = "BeachStage",
LootModule = "DefaultLoot",
DefaultModules = { "StandardIntro", "DefaultSunDropper", "ZombiesDeadWinCon", "DefaultZombieWinCondition", "LevelGenChallengeModule", "DefaultSeedBank" },
RequiredEventGroupIds = { "tide" },
AdditionalEventGroupIds = std::vector<std::string>(0),
MinEventCount = 0,
MaxEventCount = 1,
ObstacleGroupIds = { "obs_protectplants", "obs_zombieline", "obs_mold" },
MinObstacleCount = 0,
MaxObstacleCount = 2
}

},

{
"circus",

new LevelGenWorldConfigEntry()
{
World = "circus",
GameMode = "SeedChooser",
StageModule = "CarnivalStage",
LootModule = "DefaultLoot",
DefaultModules = { "StandardIntro", "DefaultSunDropper", "ZombiesDeadWinCon", "DefaultZombieWinCondition", "LevelGenChallengeModule", "DefaultSeedBank" },
RequiredEventGroupIds = std::vector<std::string>(0),
AdditionalEventGroupIds = std::vector<std::string>(0),
MinEventCount = 0,
MaxEventCount = 0,
ObstacleGroupIds = { "obs_railcarts", "obs_kiddiepools", "obs_protectplants", "obs_zombieline", "obs_mold" },
MinObstacleCount = 0,
MaxObstacleCount = 2
}

},

{
"cowboy",

new LevelGenWorldConfigEntry()
{
World = "cowboy",
GameMode = "SeedChooser",
StageModule = "WestStage",
LootModule = "DefaultLoot",
DefaultModules = { "StandardIntro", "DefaultSunDropper", "ZombiesDeadWinCon", "DefaultZombieWinCondition", "LevelGenChallengeModule", "CowboyLevelGenFlagRandomizer", "DefaultSeedBank" },
RequiredEventGroupIds = std::vector<std::string>(0),
AdditionalEventGroupIds = std::vector<std::string>(0),
MinEventCount = 0,
MaxEventCount = 1,
ObstacleGroupIds = { "obs_railcarts", "obs_protectplants", "obs_zombieline", "obs_mold" },
MinObstacleCount = 0,
MaxObstacleCount = 2
}

},

{
"dark",

new LevelGenWorldConfigEntry()
{
World = "dark",
GameMode = "SeedChooser",
StageModule = "DarkStage",
LootModule = "DefaultLoot",
DefaultModules = { "StandardIntro", "DefaultSunDropper", "ZombiesDeadWinCon", "DefaultZombieWinCondition", "LevelGenChallengeModule", "DarkLevelGenFlagRandomizer", "DefaultSeedBank" },
RequiredEventGroupIds = std::vector<std::string>(0),
AdditionalEventGroupIds = { "gravestone_event" },
MinEventCount = 0,
MaxEventCount = 1,
ObstacleGroupIds = { "obs_gravestones", "obs_protectplants", "obs_zombieline", "obs_mold" },
MinObstacleCount = 0,
MaxObstacleCount = 2
}

},

{
"dino",

new LevelGenWorldConfigEntry()
{
World = "dino",
GameMode = "SeedChooser",
StageModule = "DinoStage",
LootModule = "DefaultLoot",
DefaultModules = { "StandardIntro", "DefaultSunDropper", "ZombiesDeadWinCon", "DefaultZombieWinCondition", "LevelGenChallengeModule", "DinoLevelGenFlagRandomizer", "DefaultSeedBank" },
RequiredEventGroupIds = std::vector<std::string>(0),
AdditionalEventGroupIds = { "dinos" },
MinEventCount = 0,
MaxEventCount = 1,
ObstacleGroupIds = { "obs_protectplants", "obs_zombieline", "obs_mold" },
MinObstacleCount = 0,
MaxObstacleCount = 2
}

},

{
"egypt",

new LevelGenWorldConfigEntry()
{
World = "egypt",
GameMode = "SeedChooser",
StageModule = "EgyptStage",
LootModule = "DefaultLoot",
DefaultModules = { "StandardIntro", "DefaultSunDropper", "ZombiesDeadWinCon", "DefaultZombieWinCondition", "LevelGenChallengeModule", "EgyptLevelGenFlagRandomizer", "DefaultSeedBank" },
RequiredEventGroupIds = std::vector<std::string>(0),
AdditionalEventGroupIds = { "sandstorm" },
MinEventCount = 0,
MaxEventCount = 1,
ObstacleGroupIds = { "obs_gravestones", "obs_protectplants", "obs_zombieline", "obs_mold" },
MinObstacleCount = 0,
MaxObstacleCount = 2
}

},

{
"eighties",

new LevelGenWorldConfigEntry()
{
World = "eighties",
GameMode = "SeedChooser",
StageModule = "EightiesStage",
LootModule = "DefaultLoot",
DefaultModules = { "StandardIntro", "DefaultSunDropper", "ZombiesDeadWinCon", "DefaultZombieWinCondition", "LevelGenChallengeModule", "DefaultSeedBank" },
RequiredEventGroupIds = { "jams" },
AdditionalEventGroupIds = std::vector<std::string>(0),
MinEventCount = 0,
MaxEventCount = 1,
ObstacleGroupIds = { "obs_protectplants", "obs_zombieline", "obs_mold" },
MinObstacleCount = 0,
MaxObstacleCount = 2
}

},

{
"future",

new LevelGenWorldConfigEntry()
{
World = "future",
GameMode = "SeedChooser",
StageModule = "FutureStage",
LootModule = "DefaultLoot",
DefaultModules = { "StandardIntro", "DefaultSunDropper", "ZombiesDeadWinCon", "DefaultZombieWinCondition", "LevelGenChallengeModule", "FutureLevelGenFlagRandomizer", "DefaultSeedBank" },
RequiredEventGroupIds = std::vector<std::string>(0),
AdditionalEventGroupIds = { "spiderrain" },
MinEventCount = 0,
MaxEventCount = 1,
ObstacleGroupIds = { "obs_powertiles", "obs_protectplants", "obs_zombieline", "obs_mold" },
MinObstacleCount = 0,
MaxObstacleCount = 2
}

},

{
"iceage",

new LevelGenWorldConfigEntry()
{
World = "iceage",
GameMode = "SeedChooser",
StageModule = "IceageStage",
LootModule = "DefaultLoot",
DefaultModules = { "StandardIntro", "DefaultSunDropper", "ZombiesDeadWinCon", "DefaultZombieWinCondition", "LevelGenChallengeModule", "DefaultSeedBank" },
RequiredEventGroupIds = std::vector<std::string>(0),
AdditionalEventGroupIds = { "freezingwind" },
MinEventCount = 0,
MaxEventCount = 1,
ObstacleGroupIds = { "obs_planticeblocks", "obs_zombieiceblocks", "obs_icefloes", "obs_protectplants", "obs_zombieline", "obs_mold" },
MinObstacleCount = 0,
MaxObstacleCount = 3
}

},

{
"lostcity",

new LevelGenWorldConfigEntry()
{
World = "lostcity",
GameMode = "SeedChooser",
StageModule = "LostCityStage",
LootModule = "DefaultLoot",
DefaultModules = { "StandardIntro", "DefaultSunDropper", "ZombiesDeadWinCon", "DefaultZombieWinCondition", "LevelGenChallengeModule", "DefaultSeedBank" },
RequiredEventGroupIds = std::vector<std::string>(0),
AdditionalEventGroupIds = { "parachuterain" },
MinEventCount = 0,
MaxEventCount = 1,
ObstacleGroupIds = { "obs_goldtiles", "obs_traps", "obs_protectplants", "obs_zombieline", "obs_mold" },
MinObstacleCount = 0,
MaxObstacleCount = 2
}

},

{
"modern",

new LevelGenWorldConfigEntry()
{
World = "modern",
GameMode = "SeedChooser",
StageModule = "ModernStage",
LootModule = "DefaultLoot",
DefaultModules = { "StandardIntro", "DefaultSunDropper", "ZombiesDeadWinCon", "DefaultZombieWinCondition", "LevelGenChallengeModule", "ModernLevelGenFlagRandomizer", "DefaultSeedBank" },
RequiredEventGroupIds = std::vector<std::string>(0),
AdditionalEventGroupIds = { "portals", "sandstorm", "raidingparty", "dinos", "spiderrain", "parachuterain", "freezingwind", "jams" },
MinEventCount = 0,
MaxEventCount = 3,
ObstacleGroupIds = { "obs_gravestones", "obs_railcarts", "obs_powertiles", "obs_goldtiles", "obs_traps", "obs_planticeblocks", "obs_zombieiceblocks", "obs_kiddiepools", "obs_protectplants", "obs_zombieline", "obs_mold" },
MinObstacleCount = 0,
MaxObstacleCount = 3
}

},

{
"pirate",

new LevelGenWorldConfigEntry()
{
World = "pirate",
GameMode = "SeedChooser",
StageModule = "PirateStage",
LootModule = "DefaultLoot",
DefaultModules = { "DefaultModules", "StandardIntro", "DefaultSunDropper", "ZombiesDeadWinCon", "DefaultZombieWinCondition", "LevelGenChallengeModule", "PirateLevelGenFlagRandomizer", "DefaultSeedBank" },
RequiredEventGroupIds = { "planks" },
AdditionalEventGroupIds = { "raidingparty" },
MinEventCount = 0,
MaxEventCount = 1,
ObstacleGroupIds = { "obs_protectplants", "obs_zombieline", "obs_mold" },
MinObstacleCount = 0,
MaxObstacleCount = 2
}

},

{
"lte_foodfight_easy",

new LevelGenWorldConfigEntry()
{
World = "lte_foodfight_easy",
GameMode = "SeedChooser",
StageModule = "FoodfightStage",
LootModule = "DefaultLoot",
DefaultModules = { "StandardIntro", "DefaultSunDropper", "ZombiesDeadWinCon", "DefaultZombieWinCondition", "DefaultSeedBank" },
RequiredEventGroupIds = std::vector<std::string>(0),
AdditionalEventGroupIds = std::vector<std::string>(0),
MinEventCount = 0,
MaxEventCount = 0,
ObstacleGroupIds = { "obs_gravestones", "obs_railcarts", "obs_powertiles" },
MinObstacleCount = 0,
MaxObstacleCount = 3
}

},

{
"lte_foodfight_med",

new LevelGenWorldConfigEntry()
{
World = "lte_foodfight_med",
GameMode = "SeedChooser",
StageModule = "FoodfightStage",
LootModule = "DefaultLoot",
DefaultModules = { "StandardIntro", "DefaultSunDropper", "ZombiesDeadWinCon", "DefaultZombieWinCondition", "DefaultSeedBank" },
RequiredEventGroupIds = std::vector<std::string>(0),
AdditionalEventGroupIds = { "sandstorm", "raidingparty", "spiderrain" },
MinEventCount = 0,
MaxEventCount = 3,
ObstacleGroupIds = { "obs_gravestones", "obs_railcarts", "obs_powertiles", "obs_goldtiles", "obs_kiddiepools", "obs_zombieline" },
MinObstacleCount = 0,
MaxObstacleCount = 3
}

},

{
"lte_foodfight_hard",

new LevelGenWorldConfigEntry()
{
World = "lte_foodfight_hard",
GameMode = "SeedChooser",
StageModule = "FoodfightStage",
LootModule = "DefaultLoot",
DefaultModules = { "StandardIntro", "DefaultSunDropper", "ZombiesDeadWinCon", "DefaultZombieWinCondition", "DefaultSeedBank" },
RequiredEventGroupIds = std::vector<std::string>(0),
AdditionalEventGroupIds = { "portal", "sandstorm", "raidingparty", "spiderrain" },
MinEventCount = 0,
MaxEventCount = 3,
ObstacleGroupIds = { "obs_gravestones", "obs_railcarts", "obs_powertiles", "obs_goldtiles", "obs_kiddiepools", "obs_protectplants", "obs_zombieline", "obs_mold" },
MinObstacleCount = 0,
MaxObstacleCount = 3
}

}

};

this->WaveData = std::unordered_map<std::string, LevelGenWaveDataEntry*>
{

{
"3wave01a",

new LevelGenWaveDataEntry()
{
UID = "3wave01a",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 200, 400, 1650 }
}

},

{
"3wave01b",

new LevelGenWaveDataEntry()
{
UID = "3wave01b",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 200, 400, 1650 }
}

},

{
"3wave01c",

new LevelGenWaveDataEntry()
{
UID = "3wave01c",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 200, 400, 1650 }
}

},

{
"3wave01d",

new LevelGenWaveDataEntry()
{
UID = "3wave01d",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 200, 400, 1650 }
}

},

{
"3wave01e",

new LevelGenWaveDataEntry()
{
UID = "3wave01e",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 200, 400, 1650 }
}

},

{
"3wave02a",

new LevelGenWaveDataEntry()
{
UID = "3wave02a",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 100, 400, 1750 }
}

},

{
"3wave02b",

new LevelGenWaveDataEntry()
{
UID = "3wave02b",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 100, 400, 1750 }
}

},

{
"3wave02c",

new LevelGenWaveDataEntry()
{
UID = "3wave02c",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 100, 400, 1750 }
}

},

{
"3wave02d",

new LevelGenWaveDataEntry()
{
UID = "3wave02d",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 100, 400, 1750 }
}

},

{
"3wave02e",

new LevelGenWaveDataEntry()
{
UID = "3wave02e",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 100, 400, 1750 }
}

},

{
"3wave03a",

new LevelGenWaveDataEntry()
{
UID = "3wave03a",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 300, 450, 1500 }
}

},

{
"3wave03b",

new LevelGenWaveDataEntry()
{
UID = "3wave03b",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 300, 450, 1500 }
}

},

{
"3wave03c",

new LevelGenWaveDataEntry()
{
UID = "3wave03c",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 300, 450, 1500 }
}

},

{
"3wave03d",

new LevelGenWaveDataEntry()
{
UID = "3wave03d",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 300, 450, 1500 }
}

},

{
"3wave03e",

new LevelGenWaveDataEntry()
{
UID = "3wave03e",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 300, 450, 1500 }
}

},

{
"3wave04a",

new LevelGenWaveDataEntry()
{
UID = "3wave04a",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 100, 200, 1950 }
}

},

{
"3wave04b",

new LevelGenWaveDataEntry()
{
UID = "3wave04b",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 100, 200, 1950 }
}

},

{
"3wave04c",

new LevelGenWaveDataEntry()
{
UID = "3wave04c",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 100, 200, 1950 }
}

},

{
"3wave04d",

new LevelGenWaveDataEntry()
{
UID = "3wave04d",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 100, 200, 1950 }
}

},

{
"3wave04e",

new LevelGenWaveDataEntry()
{
UID = "3wave04e",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 100, 200, 1950 }
}

},

{
"3wavebasic01",

new LevelGenWaveDataEntry()
{
UID = "3wavebasic01",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 },

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 200, 400, 1650 }
}

},

{
"3wavebasic02",

new LevelGenWaveDataEntry()
{
UID = "3wavebasic02",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 },

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 100, 400, 1750 }
}

},

{
"3wavebasic03",

new LevelGenWaveDataEntry()
{
UID = "3wavebasic01",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 },

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 300, 450, 1500 }
}

},

{
"3wavebasic04",

new LevelGenWaveDataEntry()
{
UID = "3wavebasic04",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 },

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 100, 200, 1950 }
}

},

{
"3wavespecial01",

new LevelGenWaveDataEntry()
{
UID = "3wavespecial01",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 },

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 200, 400, 1650 }
}

},

{
"3wavespecial02",

new LevelGenWaveDataEntry()
{
UID = "3wavespecial02",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 },

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 100, 400, 1750 }
}

},

{
"3wavespecial03",

new LevelGenWaveDataEntry()
{
UID = "3wavespecial03",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 },

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 300, 450, 1500 }
}

},

{
"3wavespecial04",

new LevelGenWaveDataEntry()
{
UID = "3wavespecial04",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 },

},

PlantFoodMin = 0,
PlantFoodMax = 1,
HugeWaves = std::vector<int>(0),
Waves = { 100, 200, 1950 }
}

},

{
"4wave01a",

new LevelGenWaveDataEntry()
{
UID = "4wave01a",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 100, 750, 500, 2000 }
}

},

{
"4wave01b",

new LevelGenWaveDataEntry()
{
UID = "4wave01b",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 100, 750, 500, 2000 }
}

},

{
"4wave01c",

new LevelGenWaveDataEntry()
{
UID = "4wave01c",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 100, 750, 500, 2000 }
}

},

{
"4wave01d",

new LevelGenWaveDataEntry()
{
UID = "4wave01d",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 100, 750, 500, 2000 }
}

},

{
"4wave01e",

new LevelGenWaveDataEntry()
{
UID = "4wave01e",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 100, 750, 500, 2000 }
}

},

{
"4wave02a",

new LevelGenWaveDataEntry()
{
UID = "4wave02a",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = { 1 },
Waves = { 300, 1000, 500, 1500 }
}

},

{
"4wave02b",

new LevelGenWaveDataEntry()
{
UID = "4wave02b",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = { 1 },
Waves = { 300, 1000, 500, 1500 }
}

},

{
"4wave02c",

new LevelGenWaveDataEntry()
{
UID = "4wave02c",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = { 1 },
Waves = { 300, 1000, 500, 1500 }
}

},

{
"4wave02d",

new LevelGenWaveDataEntry()
{
UID = "4wave02d",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = { 1 },
Waves = { 300, 1000, 500, 1500 }
}

},

{
"4wave02e",

new LevelGenWaveDataEntry()
{
UID = "4wave02e",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = { 1 },
Waves = { 300, 1000, 500, 1500 }
}

},

{
"4wave03a",

new LevelGenWaveDataEntry()
{
UID = "4wave03a",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 200, 400, 700, 2000 }
}

},

{
"4wave03b",

new LevelGenWaveDataEntry()
{
UID = "4wave03b",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 200, 400, 700, 2000 }
}

},

{
"4wave03c",

new LevelGenWaveDataEntry()
{
UID = "4wave03c",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 200, 400, 700, 2000 }
}

},

{
"4wave0d",

new LevelGenWaveDataEntry()
{
UID = "4wave03d",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 200, 400, 700, 2000 }
}

},

{
"4wave03e",

new LevelGenWaveDataEntry()
{
UID = "4wave03e",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 200, 400, 700, 2000 }
}

},

{
"4wave04a",

new LevelGenWaveDataEntry()
{
UID = "4wave04a",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = { 1 },
Waves = { 200, 400, 700, 2000 }
}

},

{
"4wave04b",

new LevelGenWaveDataEntry()
{
UID = "4wave04b",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = { 1 },
Waves = { 200, 400, 700, 2000 }
}

},

{
"4wave04c",

new LevelGenWaveDataEntry()
{
UID = "4wave04c",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = { 1 },
Waves = { 200, 400, 700, 2000 }
}

},

{
"4wave04d",

new LevelGenWaveDataEntry()
{
UID = "4wave04d",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = { 1 },
Waves = { 200, 400, 700, 2000 }
}

},

{
"4wave04e",

new LevelGenWaveDataEntry()
{
UID = "4wave04e",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = { 1 },
Waves = { 200, 400, 700, 2000 }
}

},

{
"4wave05a",

new LevelGenWaveDataEntry()
{
UID = "4wave05a",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 100, 300, 500, 2500 }
}

},

{
"4wave05b",

new LevelGenWaveDataEntry()
{
UID = "4wave05b",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 100, 300, 500, 2500 }
}

},

{
"4wave05c",

new LevelGenWaveDataEntry()
{
UID = "4wave05c",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 100, 300, 500, 2500 }
}

},

{
"4wave05d",

new LevelGenWaveDataEntry()
{
UID = "4wave05d",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 100, 300, 500, 2500 }
}

},

{
"4wave05e",

new LevelGenWaveDataEntry()
{
UID = "4wave05e",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 100, 300, 500, 2500 }
}

},

{
"4wavebasic01",

new LevelGenWaveDataEntry()
{
UID = "4wavebasic01",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 100, 750, 500, 2000 }
}

},

{
"4wavebasic02",

new LevelGenWaveDataEntry()
{
UID = "4wavebasic02",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = { 1 },
Waves = { 300, 1000, 500, 1500 }
}

},

{
"4wavebasic03",

new LevelGenWaveDataEntry()
{
UID = "4wavebasic03",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 200, 400, 700, 2000 }
}

},

{
"4wavebasic04",

new LevelGenWaveDataEntry()
{
UID = "4wavebasic04",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = { 1 },
Waves = { 200, 800, 500, 1800 }
}

},

{
"4wavebasic05",

new LevelGenWaveDataEntry()
{
UID = "4wavebasic05",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 100, 300, 500, 2500 }
}

},

{
"4wavespecial01",

new LevelGenWaveDataEntry()
{
UID = "4wavespecial01",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 100, 750, 500, 2000 }
}

},

{
"4wavespecial02",

new LevelGenWaveDataEntry()
{
UID = "4wavespecial02",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = { 1 },
Waves = { 300, 1000, 500, 1500 }
}

},

{
"4wavespecial03",

new LevelGenWaveDataEntry()
{
UID = "4wavespecial03",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 200, 400, 700, 2000 }
}

},

{
"4wavespecial04",

new LevelGenWaveDataEntry()
{
UID = "4wavespecial04",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = { 1 },
Waves = { 200, 800, 500, 1800 }
}

},

{
"4wavespecial05",

new LevelGenWaveDataEntry()
{
UID = "4wavespecial05",
Weight = 0,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 2,
HugeWaves = std::vector<int>(0),
Waves = { 100, 300, 500, 2500 }
}

},

{
"5wave01a",

new LevelGenWaveDataEntry()
{
UID = "5wave01a",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1 },
Waves = { 200, 1125, 700, 1100, 2300 }
}

},

{
"5wave01b",

new LevelGenWaveDataEntry()
{
UID = "5wave01b",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1 },
Waves = { 200, 1125, 700, 1100, 2300 }
}

},

{
"5wave01c",

new LevelGenWaveDataEntry()
{
UID = "5wave01c",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1 },
Waves = { 200, 1125, 700, 1100, 2300 }
}

},

{
"5wave01d",

new LevelGenWaveDataEntry()
{
UID = "5wave01d",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1 },
Waves = { 200, 1125, 700, 1100, 2300 }
}

},

{
"5wave01e",

new LevelGenWaveDataEntry()
{
UID = "5wave01e",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1 },
Waves = { 200, 1125, 700, 1100, 2300 }
}

},

{
"5wave02a",

new LevelGenWaveDataEntry()
{
UID = "5wave02a",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 100, 400, 700, 1000, 3250 }
}

},

{
"5wave02b",

new LevelGenWaveDataEntry()
{
UID = "5wave02b",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 100, 400, 700, 1000, 3250 }
}

},

{
"5wave02c",

new LevelGenWaveDataEntry()
{
UID = "5wave02c",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 100, 400, 700, 1000, 3250 }
}

},

{
"5wave02d",

new LevelGenWaveDataEntry()
{
UID = "5wave02d",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 100, 400, 700, 1000, 3250 }
}

},

{
"5wave02e",

new LevelGenWaveDataEntry()
{
UID = "5wave02e",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 100, 400, 700, 1000, 3250 }
}

},

{
"5wave03a",

new LevelGenWaveDataEntry()
{
UID = "5wave03a",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 200, 450, 700, 950, 3100 }
}

},

{
"5wave03b",

new LevelGenWaveDataEntry()
{
UID = "5wave03b",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 200, 450, 700, 950, 3100 }
}

},

{
"5wave03c",

new LevelGenWaveDataEntry()
{
UID = "5wave03c",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 200, 450, 700, 950, 3100 }
}

},

{
"5wave03d",

new LevelGenWaveDataEntry()
{
UID = "5wave03d",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 200, 450, 700, 950, 3100 }
}

},

{
"5wave03e",

new LevelGenWaveDataEntry()
{
UID = "5wave03e",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 200, 450, 700, 950, 3100 }
}

},

{
"5wave04a",

new LevelGenWaveDataEntry()
{
UID = "5wave04a",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 300, 500, 700, 900, 3000 }
}

},

{
"5wave04b",

new LevelGenWaveDataEntry()
{
UID = "5wave04b",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 300, 500, 700, 900, 3000 }
}

},

{
"5wave04c",

new LevelGenWaveDataEntry()
{
UID = "5wave04c",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 300, 500, 700, 900, 3000 }
}

},

{
"5wave04d",

new LevelGenWaveDataEntry()
{
UID = "5wave04d",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 300, 500, 700, 900, 3000 }
}

},

{
"5wave04e",

new LevelGenWaveDataEntry()
{
UID = "5wave04e",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 300, 500, 700, 900, 3000 }
}

},

{
"5wave05a",

new LevelGenWaveDataEntry()
{
UID = "5wave05a",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 200, 400, 1500, 800, 2500 }
}

},

{
"5wave05b",

new LevelGenWaveDataEntry()
{
UID = "5wave05b",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 200, 400, 1500, 800, 2500 }
}

},

{
"5wave05c",

new LevelGenWaveDataEntry()
{
UID = "5wave05c",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 200, 400, 1500, 800, 2500 }
}

},

{
"5wave05d",

new LevelGenWaveDataEntry()
{
UID = "5wave05d",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 200, 400, 1500, 800, 2500 }
}

},

{
"5wave05e",

new LevelGenWaveDataEntry()
{
UID = "5wave05e",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 200, 400, 1500, 800, 2500 }
}

},

{
"5wavebasic01",

new LevelGenWaveDataEntry()
{
UID = "5wavebasic01",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1 },
Waves = { 200, 1125, 700, 1100, 2300 }
}

},

{
"5wavebasic02",

new LevelGenWaveDataEntry()
{
UID = "5wavebasic02",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 100, 400, 700, 1000, 3250 }
}

},

{
"5wavebasic03",

new LevelGenWaveDataEntry()
{
UID = "5wavebasic03",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 200, 450, 700, 950, 3100 }
}

},

{
"5wavebasic04",

new LevelGenWaveDataEntry()
{
UID = "5wavebasic04",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 300, 500, 700, 900, 3000 }
}

},

{
"5wavebasic05",

new LevelGenWaveDataEntry()
{
UID = "5wavebasic05",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 200, 400, 1500, 800, 2500 }
}

},

{
"5wavespecial01",

new LevelGenWaveDataEntry()
{
UID = "5wavespecial01",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1 },
Waves = { 200, 1125, 700, 1100, 2300 }
}

},

{
"5wavespecial02",

new LevelGenWaveDataEntry()
{
UID = "5wavespecial02",
Weight = 150,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 100, 400, 700, 1000, 3250 }
}

},

{
"5wavespecial03",

new LevelGenWaveDataEntry()
{
UID = "5wavespecial03",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 200, 450, 700, 950, 3100 }
}

},

{
"5wavespecial04",

new LevelGenWaveDataEntry()
{
UID = "5wavespecial04",
Weight = 150,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = std::vector<int>(0),
Waves = { 300, 500, 700, 900, 3000 }
}

},

{
"5wavespecial05",

new LevelGenWaveDataEntry()
{
UID = "5wavespecial05",
Weight = 150,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 200, 400, 1500, 800, 2500 }
}

},

{
"6wave01a",

new LevelGenWaveDataEntry()
{
UID = "6wave01a",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 300, 500, 1750, 900, 1100, 3250 }
}

},

{
"6wave01b",

new LevelGenWaveDataEntry()
{
UID = "6wave01b",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 300, 500, 1750, 900, 1100, 3250 }
}

},

{
"6wave01c",

new LevelGenWaveDataEntry()
{
UID = "6wave01c",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 300, 500, 1750, 900, 1100, 3250 }
}

},

{
"6wave01d",

new LevelGenWaveDataEntry()
{
UID = "6wave01d",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 300, 500, 1750, 900, 1100, 3250 }
}

},

{
"6wave01e",

new LevelGenWaveDataEntry()
{
UID = "6wave01e",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 300, 500, 1750, 900, 1100, 3250 }
}

},

{
"6wave02a",

new LevelGenWaveDataEntry()
{
UID = "6wave02a",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1, 3 },
Waves = { 100, 875, 500, 2125, 900, 3375 }
}

},

{
"6wave02b",

new LevelGenWaveDataEntry()
{
UID = "6wave02b",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1, 3 },
Waves = { 100, 875, 500, 2125, 900, 3375 }
}

},

{
"6wave02c",

new LevelGenWaveDataEntry()
{
UID = "6wave02c",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1, 3 },
Waves = { 100, 875, 500, 2125, 900, 3375 }
}

},

{
"6wave02d",

new LevelGenWaveDataEntry()
{
UID = "6wave02d",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1, 3 },
Waves = { 100, 875, 500, 2125, 900, 3375 }
}

},

{
"6wave02e",

new LevelGenWaveDataEntry()
{
UID = "6wave02e",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1, 3 },
Waves = { 100, 875, 500, 2125, 900, 3375 }
}

},

{
"6wave03a",

new LevelGenWaveDataEntry()
{
UID = "6wave03a",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1, 3 },
Waves = { 200, 1000, 600, 2000, 1000, 3600 }
}

},

{
"6wave03b",

new LevelGenWaveDataEntry()
{
UID = "6wave03b",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1, 3 },
Waves = { 200, 1000, 600, 2000, 1000, 3600 }
}

},

{
"6wave03c",

new LevelGenWaveDataEntry()
{
UID = "6wave03c",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1, 3 },
Waves = { 200, 1000, 600, 2000, 1000, 3600 }
}

},

{
"6wave03d",

new LevelGenWaveDataEntry()
{
UID = "6wave03d",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1, 3 },
Waves = { 200, 1000, 600, 2000, 1000, 3600 }
}

},

{
"6wave03e",

new LevelGenWaveDataEntry()
{
UID = "6wave03e",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1, 3 },
Waves = { 200, 1000, 600, 2000, 1000, 3600 }
}

},

{
"6wave04a",

new LevelGenWaveDataEntry()
{
UID = "6wave04a",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 5,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 3 },
{ "standard", 3 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 100, 375, 1625, 925, 1200, 3600 }
}

},

{
"6wave04b",

new LevelGenWaveDataEntry()
{
UID = "6wave04b",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 100, 375, 1625, 925, 1200, 3600 }
}

},

{
"6wave04c",

new LevelGenWaveDataEntry()
{
UID = "6wave04c",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 7,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 4 },
{ "standard", 4 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 100, 375, 1625, 925, 1200, 3600 }
}

},

{
"6wave04d",

new LevelGenWaveDataEntry()
{
UID = "6wave04d",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 8,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 100, 375, 1625, 925, 1200, 3600 }
}

},

{
"6wave04e",

new LevelGenWaveDataEntry()
{
UID = "6wave04e",
Weight = 250,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 9,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 5 },
{ "standard", 5 }

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 100, 375, 1625, 925, 1200, 3600 }
}

},

{
"6wavebasic01",

new LevelGenWaveDataEntry()
{
UID = "6wavebasic01",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 300, 500, 1750, 900, 1100, 3250 }
}

},

{
"6wavebasic02",

new LevelGenWaveDataEntry()
{
UID = "6wavebasic02",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1, 3 },
Waves = { 100, 875, 500, 2125, 900, 3375 }
}

},

{
"6wavebasic03",

new LevelGenWaveDataEntry()
{
UID = "6wavebasic03",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1, 3 },
Waves = { 200, 1000, 600, 2000, 1000, 3000 }
}

},

{
"6wavebasic04",

new LevelGenWaveDataEntry()
{
UID = "6wavebasic04",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "special", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 100, 375, 1625, 925, 1200, 3600 }
}

},

{
"6wavespecial01",

new LevelGenWaveDataEntry()
{
UID = "6wavespecial01",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 300, 500, 1750, 900, 1100, 3250 }
}

},

{
"6wavespecial02",

new LevelGenWaveDataEntry()
{
UID = "6wavespecial02",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1, 3 },
Waves = { 100, 875, 500, 2125, 900, 3375 }
}

},

{
"6wavespecial03",

new LevelGenWaveDataEntry()
{
UID = "6wavespecial03",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 1, 3 },
Waves = { 200, 1000, 600, 2000, 1000, 3000 }
}

},

{
"6wavespecial04",

new LevelGenWaveDataEntry()
{
UID = "6wavespecial04",
Weight = 200,
StrengthMin = 0.1f,
StrengthMax = 1,
MaxZombieTypes = 6,

KeywordLimits = std::unordered_map<std::string, int>
{

{ "standard", 0 },

},

PlantFoodMin = 1,
PlantFoodMax = 3,
HugeWaves = { 2 },
Waves = { 100, 375, 1625, 925, 1200, 3600 }
}

},

};

this->ZombieData = std::unordered_map<std::string, LevelGenZombieDataEntry*>
{

{
"barrelroller",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "barrelroller",
Weight = 50,
Strength = 0.4f,
Worlds = { "pirate", "modern" },
Keywords = { "special", "heavy", "crusher", "spawner" }
}

},

{
"beach",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "beach",
Weight = 50,
Strength = 0.1f,
Worlds = { "beach", "modern" },
Keywords = { "standard", "basic", "armor0" }
}

},

{
"beach_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "beach_armor1",
Weight = 37,
Strength = 0.2f,
Worlds = { "beach", "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"beach_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "beach_armor2",
Weight = 37,
Strength = 0.4f,
Worlds = { "beach", "modern" },
Keywords = { "standard", "basic", "armor2", "heavy" }
}

},

{
"beach_fem",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "beach_fem",
Weight = 50,
Strength = 0.1f,
Worlds = { "beach", "modern" },
Keywords = { "standard", "basic", "armor0" }
}

},

{
"beach_fem_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "beach_fem_armor1",
Weight = 37,
Strength = 0.2f,
Worlds = { "beach", "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"beach_fem_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "beach_fem_armor2",
Weight = 37,
Strength = 0.4f,
Worlds = { "beach", "modern" },
Keywords = { "standard", "basic", "armor2", "heavy" }
}

},

{
"beach_fisherman",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "beach_fisherman",
Weight = 50,
Strength = 0.7000000000000001f,
Worlds = { "beach" },
Keywords = { "special", "ranged", "stationary" }
}

},

{
"beach_gargantuar",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "beach_gargantuar",
Weight = 65,
Strength = 0.8f,
Worlds = { "beach", "modern" },
Keywords = { "standard", "gargantuar", "heavy", "crusher" }
}

},

{
"beach_imp",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "beach_imp",
Weight = 75,
Strength = 0.1f,
Worlds = { "beach", "modern" },
Keywords = { "standard", "imp" }
}

},

{
"beach_octopus",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "beach_octopus",
Weight = 50,
Strength = 0.9f,
Worlds = { "beach", "modern" },
Keywords = { "special", "ranged", "heavy", "stunner" }
}

},

{
"beach_snorkel",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "beach_snorkel",
Weight = 50,
Strength = 0.30000000000000004f,
Worlds = { "beach" },
Keywords = { "special", "sneaky" }
}

},

{
"beach_surfer",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "beach_surfer",
Weight = 50,
Strength = 0.6000000000000001f,
Worlds = { "beach", "modern" },
Keywords = { "special", "fast", "crusher" }
}

},

{
"camel_manyhump",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "camel_manyhump",
Weight = 20,
Strength = 0.4f,
Worlds = { "egypt", "modern" },
Keywords = { "special", "armormisc" }
}

},

{
"camel_onehump",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "camel_onehump",
Weight = 20,
Strength = 0.30000000000000004f,
Worlds = { "egypt", "modern" },
Keywords = { "special", "armormisc" }
}

},

{
"camel_twohump",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "camel_twohump",
Weight = 20,
Strength = 0.30000000000000004f,
Worlds = { "egypt", "modern" },
Keywords = { "special", "armormisc" }
}

},

{
"cannon",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "cannon",
Weight = 40,
Strength = 0.4f,
Worlds = { "pirate", "modern" },
Keywords = { "special", "ranged", "spawner", "stationary" }
}

},

{
"carnie",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "carnie",
Weight = 50,
Strength = 0.1f,
Worlds = { "circus", "modern" },
Keywords = { "standard", "basic", "armor0" }
}

},

{
"carnie_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "carnie_armor1",
Weight = 37,
Strength = 0.2f,
Worlds = { "circus", "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"carnie_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "carnie_armor2",
Weight = 37,
Strength = 0.4f,
Worlds = { "circus", "modern" },
Keywords = { "standard", "basic", "armor2", "heavy" }
}

},

{
"carnie_armor4",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "carnie_armor4",
Weight = 35,
Strength = 0.6000000000000001f,
Worlds = { "circus", "modern" },
Keywords = { "special", "basic", "armor4", "heavy" }
}

},

{
"carnie_cannon",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "carnie_cannon",
Weight = 40,
Strength = 0.4f,
Worlds = { "circus", "modern" },
Keywords = { "special", "ranged", "spawner", "stationary" }
}

},

{
"carnie_firebreather",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "carnie_firebreather",
Weight = 25,
Strength = 0.4f,
Worlds = { "circus", "modern" },
Keywords = { "special", "fast", "crusher" }
}

},

{
"carnie_gargantuar",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "carnie_gargantuar",
Weight = 65,
Strength = 0.8f,
Worlds = { "circus", "modern" },
Keywords = { "standard", "gargantuar", "heavy", "crusher" }
}

},

{
"carnie_imp",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "carnie_imp",
Weight = 75,
Strength = 0.4f,
Worlds = { "circus", "modern" },
Keywords = { "special", "imp" }
}

},

{
"carnie_imp_twins",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "carnie_imp_twins",
Weight = 40,
Strength = 0.1f,
Worlds = { "circus", "modern" },
Keywords = { "special", "imp", "spawner" }
}

},

{
"carnie_magician",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "carnie_magician",
Weight = 40,
Strength = 0.2f,
Worlds = { "circus", "modern" },
Keywords = { "special", "ranged", "spawner" }
}

},

{
"carnie_stiltwalker",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "carnie_stiltwalker",
Weight = 50,
Strength = 0.5f,
Worlds = { "circus", "modern" },
Keywords = { "special", "fast", "flying" }
}

},

{
"chicken_farmer",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "chicken_farmer",
Weight = 50,
Strength = 0.4f,
Worlds = { "cowboy", "modern" },
Keywords = { "special", "spawner", "swarmer" }
}

},

{
"cleopatra",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "cleopatra",
Weight = 35,
Strength = 0.5f,
Worlds = { "egypt", "modern" },
Keywords = { "special", "heavy", "spawner" }
}

},

{
"cowboy",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "cowboy",
Weight = 100,
Strength = 0.1f,
Worlds = { "cowboy", "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"cowboy_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "cowboy_armor1",
Weight = 75,
Strength = 0.2f,
Worlds = { "cowboy", "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"cowboy_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "cowboy_armor2",
Weight = 75,
Strength = 0.4f,
Worlds = { "cowboy", "modern" },
Keywords = { "standard", "basic", "armor2", "heavy" }
}

},

{
"cowboy_armor4",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "cowboy_armor4",
Weight = 35,
Strength = 0.6000000000000001f,
Worlds = { "cowboy", "modern" },
Keywords = { "standard", "basic", "armor4", "heavy" }
}

},

{
"cowboy_gargantuar",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "cowboy_gargantuar",
Weight = 65,
Strength = 0.8f,
Worlds = { "cowboy", "modern" },
Keywords = { "standard", "gargantuar", "heavy", "crusher" }
}

},

{
"dark",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dark",
Weight = 100,
Strength = 0.1f,
Worlds = { "dark", "modern" },
Keywords = { "standard", "basic", "armor0" }
}

},

{
"dark_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dark_armor1",
Weight = 75,
Strength = 0.2f,
Worlds = { "dark", "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"dark_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dark_armor2",
Weight = 75,
Strength = 0.4f,
Worlds = { "dark", "modern" },
Keywords = { "standard", "basic", "armor2" }
}

},

{
"dark_armor3",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dark_armor3",
Weight = 65,
Strength = 0.5f,
Worlds = { "dark", "modern" },
Keywords = { "standard", "basic", "armor3", "heavy" }
}

},

{
"dark_armor4",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dark_armor4",
Weight = 35,
Strength = 0.5f,
Worlds = { "dark", "modern" },
Keywords = { "standard", "basic", "armor4", "heavy" }
}

},

{
"dark_gargantuar",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dark_gargantuar",
Weight = 65,
Strength = 0.8f,
Worlds = { "dark", "modern" },
Keywords = { "standard", "gargantuar", "heavy", "crusher" }
}

},

{
"dark_imp",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dark_imp",
Weight = 75,
Strength = 0.1f,
Worlds = { "dark", "modern" },
Keywords = { "standard", "imp" }
}

},

{
"dark_imp_dragon",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dark_imp_dragon",
Weight = 40,
Strength = 0.2f,
Worlds = { "dark", "modern" },
Keywords = { "special", "imp" }
}

},

{
"dark_juggler",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dark_juggler",
Weight = 50,
Strength = 0.5f,
Worlds = { "dark", "modern" },
Keywords = { "special", "defender" }
}

},

{
"dark_king",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dark_king",
Weight = 50,
Strength = 0.7000000000000001f,
Worlds = { "dark", "modern" },
Keywords = { "special", "stationary", "spawner" }
}

},

{
"dark_wizard",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dark_wizard",
Weight = 50,
Strength = 0.7000000000000001f,
Worlds = { "dark", "modern" },
Keywords = { "special", "ranged", "stunner" }
}

},

{
"dark_wizard_veteran",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dark_wizard_veteran",
Weight = 25,
Strength = 0.7000000000000001f,
Worlds = { "dark", "modern" },
Keywords = { "special", "ranged", "stunner", "heavy" }
}

},

{
"dino",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dino",
Weight = 100,
Strength = 0.1f,
Worlds = { "dino", "modern" },
Keywords = { "standard", "basic", "armor0" }
}

},

{
"dino_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dino_armor1",
Weight = 75,
Strength = 0.2f,
Worlds = { "dino", "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"dino_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dino_armor2",
Weight = 75,
Strength = 0.4f,
Worlds = { "dino", "modern" },
Keywords = { "standard", "basic", "armor2", "heavy" }
}

},

{
"dino_armor3",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dino_armor3",
Weight = 65,
Strength = 0.5f,
Worlds = { "dino", "modern" },
Keywords = { "standard", "basic", "armor3", "heavy" }
}

},

{
"dino_armor4",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dino_armor4",
Weight = 35,
Strength = 0.6000000000000001f,
Worlds = { "dino", "modern" },
Keywords = { "standard", "basic", "armor4", "heavy" }
}

},

{
"dino_bully",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dino_bully",
Weight = 50,
Strength = 0.4f,
Worlds = { "dino", "modern" },
Keywords = { "special", "heavy" }
}

},

{
"dino_bully_veteran",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dino_bully_veteran",
Weight = 25,
Strength = 0.7000000000000001f,
Worlds = { "dino", "modern" },
Keywords = { "special", "heavy", "crusher" }
}

},

{
"dino_gargantuar",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dino_gargantuar",
Weight = 65,
Strength = 1,
Worlds = { "dino", "modern" },
Keywords = { "standard", "gargantuar", "heavy", "crusher" }
}

},

{
"dino_imp",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "dino_imp",
Weight = 75,
Strength = 0.1f,
Worlds = { "dino", "modern" },
Keywords = { "standard", "imp" }
}

},

{
"disco_mech",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "disco_mech",
Weight = 50,
Strength = 0.8f,
Worlds = { "future", "modern" },
Keywords = { "special", "mech", "heavy", "spawner" }
}

},

{
"egypt_gargantuar",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "egypt_gargantuar",
Weight = 65,
Strength = 0.8f,
Worlds = { "egypt", "modern" },
Keywords = { "standard", "gargantuar", "heavy", "crusher" }
}

},

{
"egypt_imp",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "egypt_imp",
Weight = 75,
Strength = 0.1f,
Worlds = { "egypt", "modern" },
Keywords = { "standard", "imp" }
}

},

{
"eighties",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "eighties",
Weight = 100,
Strength = 0.1f,
Worlds = { "eighties", "modern" },
Keywords = { "standard", "basic", "armor0" }
}

},

{
"eighties_arcade",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "eighties_arcade",
Weight = 50,
Strength = 0.7000000000000001f,
Worlds = { "eighties", "modern" },
Keywords = { "special", "pusher", "spawner" }
}

},

{
"eighties_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "eighties_armor1",
Weight = 75,
Strength = 0.2f,
Worlds = { "eighties", "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"eighties_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "eighties_armor2",
Weight = 75,
Strength = 0.4f,
Worlds = { "eighties", "modern" },
Keywords = { "standard", "basic", "armor2", "heavy" }
}

},

{
"eighties_boombox",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "eighties_boombox",
Weight = 50,
Strength = 0.4f,
Worlds = { "eighties", "modern" },
Keywords = { "special", "ranged", "stunner" }
}

},

{
"eighties_breakdancer",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "eighties_breakdancer",
Weight = 50,
Strength = 0.4f,
Worlds = { "eighties", "modern" },
Keywords = { "special", "kicker" }
}

},

{
"eighties_gargantuar",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "eighties_gargantuar",
Weight = 65,
Strength = 1,
Worlds = { "eighties", "modern" },
Keywords = { "standard", "gargantuar", "heavy", "crusher", "ranged" }
}

},

{
"eighties_glitter",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "eighties_glitter",
Weight = 50,
Strength = 0.4f,
Worlds = { "eighties", "modern" },
Keywords = { "special", "defender", "crusher" }
}

},

{
"eighties_imp",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "eighties_imp",
Weight = 75,
Strength = 0.1f,
Worlds = { "eighties", "modern" },
Keywords = { "standard", "imp" }
}

},

{
"eighties_mc",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "eighties_mc",
Weight = 50,
Strength = 0.5f,
Worlds = { "eighties", "modern" },
Keywords = { "special", "ranged", "crusher" }
}

},

{
"eighties_punk",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "eighties_punk",
Weight = 50,
Strength = 0.4f,
Worlds = { "eighties", "modern" },
Keywords = { "special", "fast", "digger" }
}

},

{
"explorer",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "explorer",
Weight = 50,
Strength = 0.30000000000000004f,
Worlds = { "egypt", "modern" },
Keywords = { "special", "fast", "crusher" }
}

},

{
"explorer_veteran",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "explorer_veteran",
Weight = 25,
Strength = 0.6000000000000001f,
Worlds = { "egypt", "modern" },
Keywords = { "special", "fast", "crusher" }
}

},

{
"football_mech",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "football_mech",
Weight = 50,
Strength = 0.9f,
Worlds = { "future", "modern" },
Keywords = { "special", "mech", "heavy", "digger" }
}

},

{
"foodfight",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "foodfight",
Weight = 100,
Strength = 0.1f,
Worlds = { "lte_foodfight_easy", "lte_foodfight_med", "lte_foodfight_hard" },
Keywords = { "standard", "basic", "armor0" }
}

},

{
"foodfight_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "foodfight_armor1",
Weight = 75,
Strength = 0.2f,
Worlds = { "lte_foodfight_easy", "lte_foodfight_med", "lte_foodfight_hard" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"foodfight_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "foodfight_armor2",
Weight = 75,
Strength = 0.4f,
Worlds = { "lte_foodfight_easy", "lte_foodfight_med", "lte_foodfight_hard" },
Keywords = { "standard", "basic", "armor2", "heavy" }
}

},

{
"foodfight_chester",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "foodfight_chester",
Weight = 50,
Strength = 0.5f,
Worlds = { "lte_foodfight_med", "lte_foodfight_hard" },
Keywords = { "special", "defender" }
}

},

{
"foodfight_gobbler_king",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "foodfight_gobbler_king",
Weight = 50,
Strength = 0.4f,
Worlds = { "lte_foodfight_med", "lte_foodfight_hard" },
Keywords = { "special", "spawner", "swarmer" }
}

},

{
"future",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "future",
Weight = 100,
Strength = 0.1f,
Worlds = { "future", "modern" },
Keywords = { "standard", "basic", "armor0" }
}

},

{
"future_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "future_armor1",
Weight = 75,
Strength = 0.2f,
Worlds = { "future", "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"future_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "future_armor2",
Weight = 75,
Strength = 0.4f,
Worlds = { "future", "modern" },
Keywords = { "standard", "basic", "armor2", "heavy" }
}

},

{
"future_armor4",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "future_armor4",
Weight = 35,
Strength = 0.6000000000000001f,
Worlds = { "future", "modern" },
Keywords = { "standard", "basic", "armor4", "heavy" }
}

},

{
"future_gargantuar",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "future_gargantuar",
Weight = 65,
Strength = 1,
Worlds = { "future", "modern" },
Keywords = { "standard", "gargantuar", "heavy", "crusher", "ranged", "mech" }
}

},

{
"future_imp",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "future_imp",
Weight = 75,
Strength = 0.2f,
Worlds = { "future", "modern" },
Keywords = { "standard", "imp" }
}

},

{
"future_jetpack",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "future_jetpack",
Weight = 50,
Strength = 0.2f,
Worlds = { "future", "modern" },
Keywords = { "special", "fast", "flying" }
}

},

{
"future_jetpack_veteran",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "future_jectpack_veteran",
Weight = 25,
Strength = 0.7000000000000001f,
Worlds = { "future", "modern" },
Keywords = { "special", "fast", "flying" }
}

},

{
"future_protector",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "future_protector",
Weight = 50,
Strength = 0.30000000000000004f,
Worlds = { "future", "modern" },
Keywords = { "special", "mech", "defender" }
}

},

{
"iceage",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "iceage",
Weight = 100,
Strength = 0.1f,
Worlds = { "iceage", "modern" },
Keywords = { "standard", "basic", "armor0" }
}

},

{
"iceage_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "iceage_armor1",
Weight = 75,
Strength = 0.2f,
Worlds = { "iceage", "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"iceage_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "iceage_armor2",
Weight = 75,
Strength = 0.4f,
Worlds = { "iceage", "modern" },
Keywords = { "standard", "basic", "armor2", "heavy" }
}

},

{
"iceage_armor3",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "iceage_armor3",
Weight = 65,
Strength = 0.5f,
Worlds = { "iceage", "modern" },
Keywords = { "standard", "basic", "armor3", "heavy" }
}

},

{
"iceage_dodo",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "iceage_dodo",
Weight = 50,
Strength = 0.30000000000000004f,
Worlds = { "iceage", "modern" },
Keywords = { "special", "fast", "flying" }
}

},

{
"iceage_gargantuar",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "iceage_gargantuar",
Weight = 65,
Strength = 0.9f,
Worlds = { "iceage", "modern" },
Keywords = { "standard", "gargantuar", "heavy", "crusher" }
}

},

{
"iceage_hunter",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "iceage_hunter",
Weight = 50,
Strength = 0.30000000000000004f,
Worlds = { "iceage", "modern" },
Keywords = { "special", "ranged" }
}

},

{
"iceage_imp",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "iceage_imp",
Weight = 75,
Strength = 0.1f,
Worlds = { "iceage", "modern" },
Keywords = { "standard", "imp" }
}

},

{
"iceage_troglobite",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "iceage_troglobite",
Weight = 20,
Strength = 0.6000000000000001f,
Worlds = { "iceage", "modern" },
Keywords = { "special", "pusher" }
}

},

{
"iceage_troglobite_1block",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "iceage_troglobite_1block",
Weight = 20,
Strength = 0.4f,
Worlds = { "iceage", "modern" },
Keywords = { "special", "pusher" }
}

},

{
"iceage_troglobite_2block",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "iceage_troglobite_2block",
Weight = 20,
Strength = 0.5f,
Worlds = { "iceage", "modern" },
Keywords = { "special", "pusher" }
}

},

{
"iceage_weaselhoarder",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "iceage_weaselhoarder",
Weight = 50,
Strength = 0.5f,
Worlds = { "iceage", "modern" },
Keywords = { "special", "spawner", "swarmer" }
}

},

{
"lostcity",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "lostcity",
Weight = 100,
Strength = 0.1f,
Worlds = { "lostcity", "modern" },
Keywords = { "standard", "basic", "armor0" }
}

},

{
"lostcity_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "lostcity_armor1",
Weight = 75,
Strength = 0.2f,
Worlds = { "lostcity", "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"lostcity_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "lostcity_armor2",
Weight = 75,
Strength = 0.4f,
Worlds = { "lostcity", "modern" },
Keywords = { "standard", "basic", "armor2", "heavy" }
}

},

{
"lostcity_bug",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "lostcity_bug",
Weight = 20,
Strength = 0.4f,
Worlds = { "lostcity", "modern" },
Keywords = { "special", "fast", "flying" }
}

},

{
"lostcity_bug_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "lostcity_bug_armor1",
Weight = 20,
Strength = 0.5f,
Worlds = { "lostcity", "modern" },
Keywords = { "special", "fast", "flying" }
}

},

{
"lostcity_bug_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "lostcity_bug_armor2",
Weight = 20,
Strength = 0.7000000000000001f,
Worlds = { "lostcity", "modern" },
Keywords = { "special", "fast", "flying", "heavy" }
}

},

{
"lostcity_crystalskull",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "lostcity_crystalskull",
Weight = 50,
Strength = 0.6000000000000001f,
Worlds = { "lostcity", "modern", "lte_foodfight_hard" },
Keywords = { "special", "ranged" }
}

},

{
"lostcity_excavator",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "lostcity_excavator",
Weight = 50,
Strength = 0.5f,
Worlds = { "lostcity", "modern" },
Keywords = { "special", "fast", "defender", "digger" }
}

},

{
"lostcity_gargantuar",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "lostcity_gargantuar",
Weight = 65,
Strength = 0.8f,
Worlds = { "lostcity", "modern" },
Keywords = { "standard", "gargantuar", "heavy", "crusher" }
}

},

{
"lostcity_imp",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "lostcity_imp",
Weight = 75,
Strength = 0.1f,
Worlds = { "lostcity", "modern" },
Keywords = { "standard", "imp" }
}

},

{
"lostcity_impporter",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "lostcity_impporter",
Weight = 50,
Strength = 0.7000000000000001f,
Worlds = { "lostcity", "modern" },
Keywords = { "special", "spawner", "imp" }
}

},

{
"lostcity_jane",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "lostcity_jane",
Weight = 50,
Strength = 0.2f,
Worlds = { "lostcity", "modern" },
Keywords = { "special", "defender" }
}

},

{
"lostcity_relichunter",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "lostcity_relichunter",
Weight = 50,
Strength = 0.5f,
Worlds = { "lostcity", "modern", "lte_foodfight_hard" },
Keywords = { "special", "jumper" }
}

},

{
"mech_cone",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "mech_cone",
Weight = 50,
Strength = 0.7000000000000001f,
Worlds = { "future", "modern" },
Keywords = { "special", "mech", "heavy" }
}

},

{
"modern_allstar",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "modern_allstar",
Weight = 50,
Strength = 0.7000000000000001f,
Worlds = { "modern" },
Keywords = { "special", "fast", "heavy", "crusher" }
}

},

{
"modern_balloon",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "modern_balloon",
Weight = 50,
Strength = 0.5f,
Worlds = { "modern" },
Keywords = { "special", "fast", "flying" }
}

},

{
"modern_newspaper",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "modern_newspaper",
Weight = 50,
Strength = 0.5f,
Worlds = { "modern", "lte_foodfight_hard" },
Keywords = { "special", "fast", "heavy" }
}

},

{
"modern_superfanimp",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "modern_superfanimp",
Weight = 50,
Strength = 0.30000000000000004f,
Worlds = { "modern", "lte_foodfight_hard" },
Keywords = { "special", "imp" }
}

},

{
"mummy",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "mummy",
Weight = 100,
Strength = 0.1f,
Worlds = { "egypt", "modern" },
Keywords = { "standard", "basic", "armor0" }
}

},

{
"mummy_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "mummy_armor1",
Weight = 75,
Strength = 0.2f,
Worlds = { "egypt", "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"mummy_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "mummy_armor2",
Weight = 75,
Strength = 0.4f,
Worlds = { "egypt", "modern" },
Keywords = { "standard", "basic", "armor2", "heavy" }
}

},

{
"mummy_armor4",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "mummy_armor4",
Weight = 35,
Strength = 0.6000000000000001f,
Worlds = { "egypt", "modern" },
Keywords = { "standard", "basic", "armor4", "heavy" }
}

},

{
"newspaper_veteran",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "newspaper_veteran",
Weight = 25,
Strength = 0.9f,
Worlds = { "modern", "lte_foodfight_hard" },
Keywords = { "special", "fast", "heavy" }
}

},

{
"pelican",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "pelican",
Weight = 25,
Strength = 0.4f,
Worlds = { "pirate", "modern" },
Keywords = { "special", "flying", "fast" }
}

},

{
"pharaoh",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "pharaoh",
Weight = 50,
Strength = 0.5f,
Worlds = { "egypt", "modern", "lte_foodfight_hard" },
Keywords = { "standard", "armormisc", "heavy" }
}

},

{
"piano",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "piano",
Weight = 50,
Strength = 0.5f,
Worlds = { "cowboy", "modern" },
Keywords = { "special", "heavy", "crusher" }
}

},

{
"pirate",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "pirate",
Weight = 100,
Strength = 0.1f,
Worlds = { "pirate", "modern" },
Keywords = { "standard", "basic", "armor0" }
}

},

{
"pirate_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "pirate_armor1",
Weight = 75,
Strength = 0.2f,
Worlds = { "pirate", "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"pirate_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "pirate_armor2",
Weight = 75,
Strength = 0.4f,
Worlds = { "pirate", "modern" },
Keywords = { "standard", "basic", "armor2", "heavy" }
}

},

{
"pirate_armor4",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "pirate_armor4",
Weight = 35,
Strength = 0.6000000000000001f,
Worlds = { "pirate", "modern" },
Keywords = { "standard", "basic", "armor4", "heavy" }
}

},

{
"pirate_captain",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "pirate_captain",
Weight = 50,
Strength = 0.5f,
Worlds = { "pirate", "modern" },
Keywords = { "special", "ranged" }
}

},

{
"pirate_gargantuar",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "pirate_gargantuar",
Weight = 65,
Strength = 0.7000000000000001f,
Worlds = { "pirate", "modern" },
Keywords = { "standard", "gargantuar", "heavy", "crusher" }
}

},

{
"pirate_imp",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "pirate_imp",
Weight = 75,
Strength = 0.1f,
Worlds = { "pirate", "modern" },
Keywords = { "standard", "imp" }
}

},

{
"poncho",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "poncho",
Weight = 50,
Strength = 0.30000000000000004f,
Worlds = { "cowboy", "modern" },
Keywords = { "special", "armormisc", "heavy" }
}

},

{
"ra",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "ra",
Weight = 50,
Strength = 0.1f,
Worlds = { "egypt", "modern" },
Keywords = { "special", "ranged" }
}

},

{
"poncho_no_plate",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "poncho_no_plate",
Weight = 10,
Strength = 0.1f,
Worlds = { "cowboy", "modern" },
Keywords = { "special", "armormisc" }
}

},

{
"poncho_plate",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "poncho_plate",
Weight = 10,
Strength = 0.5f,
Worlds = { "cowboy", "modern" },
Keywords = { "special", "armormisc", "heavy" }
}

},

{
"prospector",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "prospector",
Weight = 50,
Strength = 0.2f,
Worlds = { "cowboy", "modern" },
Keywords = { "special", "jumper" }
}

},

{
"roman",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "roman",
Weight = 100,
Strength = 0.1f,
Worlds = { "modern" },
Keywords = { "standard", "basic", "armor0" }
}

},

{
"roman_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "roman_armor1",
Weight = 75,
Strength = 0.2f,
Worlds = { "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"roman_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "roman_armor2",
Weight = 75,
Strength = 0.4f,
Worlds = { "modern" },
Keywords = { "standard", "basic", "armor2", "heavy" }
}

},

{
"roman_armor3",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "roman_armor3",
Weight = 65,
Strength = 0.5f,
Worlds = { "modern" },
Keywords = { "standard", "basic", "armor3", "heavy" }
}

},

{
"roman_armor4",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "roman_armor4",
Weight = 35,
Strength = 0.6000000000000001f,
Worlds = { "modern" },
Keywords = { "standard", "basic", "armor4", "heavy" }
}

},

{
"roman_ballista",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "roman_ballista",
Weight = 15,
Strength = 0.6000000000000001f,
Worlds = { "modern" },
Keywords = { "special", "ranged", "spawner", "stationary" }
}

},

{
"roman_gargantuar",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "roman_gargantuar",
Weight = 65,
Strength = 0.7000000000000001f,
Worlds = { "modern" },
Keywords = { "standard", "gargantuar", "heavy", "crusher" }
}

},

{
"roman_healer",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "roman_healer",
Weight = 25,
Strength = 0.30000000000000004f,
Worlds = { "modern" },
Keywords = { "special", "ranged" }
}

},

{
"roman_imp",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "roman_imp",
Weight = 75,
Strength = 0.1f,
Worlds = { "modern" },
Keywords = { "standard", "imp" }
}

},

{
"roman_medusa",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "roman_medusa",
Weight = 20,
Strength = 0.6000000000000001f,
Worlds = { "modern" },
Keywords = { "special", "pusher" }
}

},

{
"roman_shield_pair",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "roman_shield_pair",
Weight = 20,
Strength = 0.5f,
Worlds = { "modern" },
Keywords = { "special", "armormisc" }
}

},

{
"roman_shield_triad",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "roman_shield_triad",
Weight = 20,
Strength = 0.6000000000000001f,
Worlds = { "modern" },
Keywords = { "special", "armormisc" }
}

},

{
"seagull",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "seagull",
Weight = 50,
Strength = 0.2f,
Worlds = { "pirate", "modern" },
Keywords = { "special", "flying", "fast" }
}

},

{
"swashbuckler",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "swashbuckler",
Weight = 50,
Strength = 0.1f,
Worlds = { "pirate", "modern" },
Keywords = { "special", "jumper" }
}

},

{
"tomb_raiser",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "tomb_raiser",
Weight = 50,
Strength = 0.30000000000000004f,
Worlds = { "egypt", "modern" },
Keywords = { "special", "ranged" }
}

},

{
"tutorial",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "tutorial",
Weight = 100,
Strength = 0.1f,
Worlds = { "modern" },
Keywords = { "standard", "basic", "armor0" }
}

},

{
"tutorial_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "tutorial_armor1",
Weight = 75,
Strength = 0.2f,
Worlds = { "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"tutorial_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "tutorial_armor2",
Weight = 75,
Strength = 0.4f,
Worlds = { "modern" },
Keywords = { "standard", "basic", "armor2", "heavy" }
}

},

{
"tutorial_armor4",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "tutorial_armor4",
Weight = 35,
Strength = 0.6000000000000001f,
Worlds = { "modern" },
Keywords = { "standard", "basic", "armor4", "heavy" }
}

},

{
"tutorial_imp",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "tutorial_imp",
Weight = 75,
Strength = 0.1f,
Worlds = { "modern" },
Keywords = { "standard", "imp" }
}

},

{
"west_bull",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "west_bull",
Weight = 50,
Strength = 0.6000000000000001f,
Worlds = { "modern" },
Keywords = { "special", "fast", "heavy" }
}

},

{
"west_bullrider",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "west_bullrider",
Weight = 75,
Strength = 0.1f,
Worlds = { "cowboy", "modern" },
Keywords = { "standard", "imp" }
}

},

{
"west_bullrider_veteran",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "west_bullrider_veteran",
Weight = 25,
Strength = 0.8f,
Worlds = { "cowboy", "modern" },
Keywords = { "special", "fast", "heavy", "crusher" }
}

},

{
"zcorp",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "zcorp",
Weight = 100,
Strength = 0.1f,
Worlds = { "modern" },
Keywords = { "standard", "basic", "armor0" }
}

},

{
"zcorp_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "zcorp_armor1",
Weight = 75,
Strength = 0.2f,
Worlds = { "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"zcorp_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "zcorp_armor2",
Weight = 75,
Strength = 0.4f,
Worlds = { "modern" },
Keywords = { "standard", "basic", "armor2", "heavy" }
}

},

{
"zcorp_consultant",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "zcorp_consultant",
Weight = 50,
Strength = 0.4f,
Worlds = { "modern" },
Keywords = { "special", "kicker" }
}

},

{
"zcorp_fem",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "zcorp_fem",
Weight = 100,
Strength = 0.1f,
Worlds = { "modern" },
Keywords = { "standard", "basic", "armor0" }
}

},

{
"zcorp_fem_armor1",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "zcorp_fem_armor1",
Weight = 75,
Strength = 0.2f,
Worlds = { "modern" },
Keywords = { "standard", "basic", "armor1" }
}

},

{
"zcorp_fem_armor2",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "zcorp_fem_armor2",
Weight = 75,
Strength = 0.4f,
Worlds = { "modern" },
Keywords = { "standard", "basic", "armor2", "heavy" }
}

},

{
"zcorp_gargantuar",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "zcorp_gargantuar",
Weight = 20,
Strength = 0.7000000000000001f,
Worlds = { "modern" },
Keywords = { "standard", "gargantuar", "heavy", "crusher" }
}

},

{
"zcorp_imp",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "zcorp_imp",
Weight = 75,
Strength = 0.5f,
Worlds = { "modern" },
Keywords = { "standard", "imp" }
}

},

{
"zcorp_racer_chair",

new LevelGenZombieDataEntry()
{
ZombieTypeID = "zcorp_racer_chair",
Weight = 25,
Strength = 0.8f,
Worlds = { "modern" },
Keywords = { "special", "fast", "heavy", "crusher" }
}

}

};

this->EventGroupData = std::unordered_map<std::string, LevelGenEventGroupDataEntry*>
{

{
"dinos",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "dinos",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"dinos",

new LevelGenEventDataEntry()
{
EventID = "dinos",
PropertySheet = "LevelGenDinos",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 1
}

}

},

IsObstacleGroup = false
}

},

{
"freezingwind",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "freezingwind",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"freezingwind_1to5lanes_30",

new LevelGenEventDataEntry()
{
EventID = "freezingwind_1to5lanes_30",
PropertySheet = "LevelGenFreezingWind",
EventLevel = 1,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"freezingwind_1to5lanes_45",

new LevelGenEventDataEntry()
{
EventID = "freezingwind_1to5lanes_45",
PropertySheet = "LevelGenFreezingWind",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 400
}

},

{
"freezingwind_1to5lanes_50",

new LevelGenEventDataEntry()
{
EventID = "freezingwind_1to5lanes_50",
PropertySheet = "LevelGenFreezingWind",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 800
}

},

{
"freezingwind_1to5lanes_55",

new LevelGenEventDataEntry()
{
EventID = "freezingwind_1to5lanes_55",
PropertySheet = "LevelGenFreezingWind",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 400
}

},

{
"freezingwind_1to5lanes_70",

new LevelGenEventDataEntry()
{
EventID = "freezingwind_1to5lanes_70",
PropertySheet = "LevelGenFreezingWind",
EventLevel = 9,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"freezingwind_2to4lanes_30",

new LevelGenEventDataEntry()
{
EventID = "freezingwind_2to4lanes_30",
PropertySheet = "LevelGenFreezingWind_2to4Lanes",
EventLevel = 1,
Prerequisite = "",
Priority = 0,
Weight = 200
}

},

{
"freezingwind_2to4lanes_45",

new LevelGenEventDataEntry()
{
EventID = "freezingwind_2to4lanes_45",
PropertySheet = "LevelGenFreezingWind_2to4Lanes",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 600
}

},

{
"freezingwind_2to4lanes_50",

new LevelGenEventDataEntry()
{
EventID = "freezingwind_2to4lanes_50",
PropertySheet = "LevelGenFreezingWind_2to4Lanes",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"freezingwind_2to4lanes_55",

new LevelGenEventDataEntry()
{
EventID = "freezingwind_2to4lanes_55",
PropertySheet = "LevelGenFreezingWind_2to4Lanes",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 600
}

},

{
"freezingwind_2to4lanes_70",

new LevelGenEventDataEntry()
{
EventID = "freezingwind_2to4lanes_70",
PropertySheet = "LevelGenFreezingWind_2to4Lanes",
EventLevel = 9,
Prerequisite = "",
Priority = 0,
Weight = 200
}

},

{
"freezingwind_3lanes_30",

new LevelGenEventDataEntry()
{
EventID = "freezingwind_3lanes_30",
PropertySheet = "LevelGenFreezingWind_3Lanes",
EventLevel = 1,
Prerequisite = "",
Priority = 0,
Weight = 200
}

},

{
"freezingwind_3lanes_45",

new LevelGenEventDataEntry()
{
EventID = "freezingwind_3lanes_45",
PropertySheet = "LevelGenFreezingWind_3Lanes",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 600
}

},

{
"freezingwind_3lanes_50",

new LevelGenEventDataEntry()
{
EventID = "freezingwind_3lanes_50",
PropertySheet = "LevelGenFreezingWind_3Lanes",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"freezingwind_3lanes_55",

new LevelGenEventDataEntry()
{
EventID = "freezingwind_3lanes_55",
PropertySheet = "LevelGenFreezingWind_3Lanes",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 600
}

},

{
"freezingwind_3lanes_70",

new LevelGenEventDataEntry()
{
EventID = "freezingwind_3lanes_70",
PropertySheet = "LevelGenFreezingWind_3Lanes",
EventLevel = 9,
Prerequisite = "",
Priority = 0,
Weight = 200
}

}

},

IsObstacleGroup = false
}

},

{
"gravestone_event",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "gravestone_event",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"gravestone_event",

new LevelGenEventDataEntry()
{
EventID = "gravestone_event",
PropertySheet = "LevelGenGravestoneEvent",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 1
}

}

},

IsObstacleGroup = false
}

},

{
"jams",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "jams",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"jams",

new LevelGenEventDataEntry()
{
EventID = "jams",
PropertySheet = "LevelGenJams",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 1
}

}

},

IsObstacleGroup = false
}

},

{
"obs_goldtiles",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "obs_goldtiles",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"obs_goldtiles",

new LevelGenEventDataEntry()
{
EventID = "obs_goldtiles",
PropertySheet = "LevelGenGoldTiles",
EventLevel = 1,
Prerequisite = "",
Priority = 40,
Weight = 1
}

}

},

IsObstacleGroup = true
}

},

{
"obs_gravestones",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "obs_gravestones",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"obs_gravestones_x3",

new LevelGenEventDataEntry()
{
EventID = "obs_gravestones_x3",
PropertySheet = "LevelGenGravestones",
EventLevel = 1,
Prerequisite = "",
Priority = 20,
Weight = 800
}

},

{
"obs_gravestones_x4",

new LevelGenEventDataEntry()
{
EventID = "obs_gravestones_x4",
PropertySheet = "LevelGenGravestones",
EventLevel = 4,
Prerequisite = "",
Priority = 20,
Weight = 1000
}

},

{
"obs_gravestones_x5",

new LevelGenEventDataEntry()
{
EventID = "obs_gravestones_x5",
PropertySheet = "LevelGenGravestones",
EventLevel = 5,
Prerequisite = "",
Priority = 20,
Weight = 1000
}

},

{
"obs_gravestones_x6",

new LevelGenEventDataEntry()
{
EventID = "obs_gravestones_x6",
PropertySheet = "LevelGenGravestones",
EventLevel = 6,
Prerequisite = "",
Priority = 20,
Weight = 800
}

},

{
"obs_gravestones_x7",

new LevelGenEventDataEntry()
{
EventID = "obs_gravestones_x7",
PropertySheet = "LevelGenGravestones",
EventLevel = 7,
Prerequisite = "",
Priority = 20,
Weight = 600
}

},

{
"obs_gravestones_x8",

new LevelGenEventDataEntry()
{
EventID = "obs_gravestones_x8",
PropertySheet = "LevelGenGravestones",
EventLevel = 8,
Prerequisite = "",
Priority = 20,
Weight = 400
}

},

{
"obs_gravestones_x9",

new LevelGenEventDataEntry()
{
EventID = "obs_gravestones_x9",
PropertySheet = "LevelGenGravestones",
EventLevel = 9,
Prerequisite = "",
Priority = 20,
Weight = 200
}

},

{
"obs_gravestones_x10",

new LevelGenEventDataEntry()
{
EventID = "obs_gravestones_x10",
PropertySheet = "LevelGenGravestones",
EventLevel = 10,
Prerequisite = "",
Priority = 20,
Weight = 100
}

},

{
"obs_gravestones_x12",

new LevelGenEventDataEntry()
{
EventID = "obs_gravestones_x12",
PropertySheet = "LevelGenGravestones",
EventLevel = 12,
Prerequisite = "",
Priority = 20,
Weight = 50
}

},

{
"obs_gravestones_x14",

new LevelGenEventDataEntry()
{
EventID = "obs_gravestones_x14",
PropertySheet = "LevelGenGravestones",
EventLevel = 14,
Prerequisite = "",
Priority = 20,
Weight = 25
}

},

{
"obs_gravestones_x20",

new LevelGenEventDataEntry()
{
EventID = "obs_gravestones_x20",
PropertySheet = "LevelGenGravestones",
EventLevel = 20,
Prerequisite = "",
Priority = 20,
Weight = 10
}

}

},

IsObstacleGroup = true
}

},

{
"obs_icefloes",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "obs_icefloes",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"obs_icefloes",

new LevelGenEventDataEntry()
{
EventID = "obs_icefloes",
PropertySheet = "LevelGenIceFloes",
EventLevel = 1,
Prerequisite = "",
Priority = 75,
Weight = 1
}

}

},

IsObstacleGroup = true
}

},

{
"obs_kiddiepools",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "obs_kiddiepools",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"obs_kiddiepools",

new LevelGenEventDataEntry()
{
EventID = "obs_kiddiepools",
PropertySheet = "LevelGenKiddiePools",
EventLevel = 1,
Prerequisite = "",
Priority = 70,
Weight = 1
}

}

},

IsObstacleGroup = true
}

},

{
"obs_mold",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "obs_mold",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"obs_mold",

new LevelGenEventDataEntry()
{
EventID = "obs_mold",
PropertySheet = "LevelGenMoldChallenge",
EventLevel = 1,
Prerequisite = "",
Priority = 30,
Weight = 1
}

}

},

IsObstacleGroup = true
}

},

{
"obs_planticeblocks",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "obs_planticeblocks",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"obs_planticeblocks",

new LevelGenEventDataEntry()
{
EventID = "obs_planticeblocks",
PropertySheet = "LevelGenPlantIceBlocks",
EventLevel = 1,
Prerequisite = "",
Priority = 60,
Weight = 1
}

}

},

IsObstacleGroup = true
}

},

{
"obs_powertiles",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "obs_powertiles",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"obs_powertiles",

new LevelGenEventDataEntry()
{
EventID = "obs_powertiles",
PropertySheet = "LevelGenPowerTiles",
EventLevel = 1,
Prerequisite = "",
Priority = 50,
Weight = 1
}

}

},

IsObstacleGroup = true
}

},

{
"obs_protectplants",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "obs_protectplants",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"obs_protectplants",

new LevelGenEventDataEntry()
{
EventID = "obs_protectplants",
PropertySheet = "LevelGenProtectThePlantsChallenge",
EventLevel = 1,
Prerequisite = "",
Priority = 95,
Weight = 1
}

}

},

IsObstacleGroup = true
}

},

{
"obs_railcarts",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "obs_railcarts",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"obs_railcarts",

new LevelGenEventDataEntry()
{
EventID = "obs_railcarts",
PropertySheet = "LevelGenRailcarts",
EventLevel = 1,
Prerequisite = "",
Priority = 100,
Weight = 1
}

}

},

IsObstacleGroup = true
}

},

{
"obs_traps",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "obs_traps",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"obs_traps",

new LevelGenEventDataEntry()
{
EventID = "obs_traps",
PropertySheet = "LevelGenTraps",
EventLevel = 1,
Prerequisite = "",
Priority = 80,
Weight = 1
}

}

},

IsObstacleGroup = true
}

},

{
"obs_zombieiceblocks",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "obs_zombieiceblocks",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"obs_zombieiceblocks",

new LevelGenEventDataEntry()
{
EventID = "obs_zombieiceblocks",
PropertySheet = "LevelGenZombieIceBlocks",
EventLevel = 1,
Prerequisite = "",
Priority = 65,
Weight = 1
}

}

},

IsObstacleGroup = true
}

},

{
"obs_zombieline",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "obs_zombieline",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"obs_zombieline",

new LevelGenEventDataEntry()
{
EventID = "obs_zombieline",
PropertySheet = "LevelGenZombieDistanceChallenge",
EventLevel = 1,
Prerequisite = "",
Priority = 90,
Weight = 1
}

}

},

IsObstacleGroup = true
}

},

{
"parachuterain",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "parachuterain",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"parachuterain_1wave_x2",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_1wave_x2",
PropertySheet = "LevelGenParachuteRain_1Wave",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"parachuterain_1wave_x3",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_1wave_x3",
PropertySheet = "LevelGenParachuteRain_1Wave",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"parachuterain_1wave_x4",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_1wave_x4",
PropertySheet = "LevelGenParachuteRain_1Wave",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"parachuterain_1wave_x5",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_1wave_x5",
PropertySheet = "LevelGenParachuteRain_1Wave",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"parachuterain_1wave_x6",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_1wave_x6",
PropertySheet = "LevelGenParachuteRain_1Wave",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"parachuterain_1wave_x8",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_1wave_x8",
PropertySheet = "LevelGenParachuteRain_1Wave",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"parachuterain_1wave_x10",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_1wave_x10",
PropertySheet = "LevelGenParachuteRain_1Wave",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"parachuterain_2waves_x2",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_2waves_x2",
PropertySheet = "LevelGenParachuteRain_2Waves",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"parachuterain_2waves_x3",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_2waves_x3",
PropertySheet = "LevelGenParachuteRain_2Waves",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"parachuterain_2waves_x4",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_2waves_x4",
PropertySheet = "LevelGenParachuteRain_2Waves",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"parachuterain_2waves_x5",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_2waves_x5",
PropertySheet = "LevelGenParachuteRain_2Waves",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"parachuterain_2waves_x6",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_2waves_x6",
PropertySheet = "LevelGenParachuteRain_2Waves",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"parachuterain_2waves_x8",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_2waves_x8",
PropertySheet = "LevelGenParachuteRain_2Waves",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"parachuterain_2waves_x10",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_2waves_x10",
PropertySheet = "LevelGenParachuteRain_2Waves",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"parachuterain_3waves_x2",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_3waves_x2",
PropertySheet = "LevelGenParachuteRain_3Waves",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"parachuterain_3waves_x3",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_3waves_x3",
PropertySheet = "LevelGenParachuteRain_3Waves",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"parachuterain_3waves_x4",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_3waves_x4",
PropertySheet = "LevelGenParachuteRain_3Waves",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"parachuterain_3waves_x5",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_3waves_x5",
PropertySheet = "LevelGenParachuteRain_3Waves",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"parachuterain_3waves_x6",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_3waves_x6",
PropertySheet = "LevelGenParachuteRain_3Waves",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"parachuterain_3waves_x8",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_3waves_x8",
PropertySheet = "LevelGenParachuteRain_3Waves",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"parachuterain_3waves_x10",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_3waves_x10",
PropertySheet = "LevelGenParachuteRain_3Waves",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 50
}

},

{
"parachuterain_4waves_x2",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_4waves_x2",
PropertySheet = "LevelGenParachuteRain_4Waves",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"parachuterain_4waves_x3",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_4waves_x3",
PropertySheet = "LevelGenParachuteRain_4Waves",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"parachuterain_4waves_x4",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_4waves_x4",
PropertySheet = "LevelGenParachuteRain_4Waves",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"parachuterain_4waves_x5",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_4waves_x5",
PropertySheet = "LevelGenParachuteRain_4Waves",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"parachuterain_4waves_x6",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_4waves_x6",
PropertySheet = "LevelGenParachuteRain_4Waves",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"parachuterain_4waves_x8",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_4waves_x8",
PropertySheet = "LevelGenParachuteRain_4Waves",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 50
}

},

{
"parachuterain_4waves_x10",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_4waves_x10",
PropertySheet = "LevelGenParachuteRain_4Waves",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 25
}

},

{
"parachuterain_5waves_x2",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_5waves_x2",
PropertySheet = "LevelGenParachuteRain_5Waves",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"parachuterain_5waves_x3",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_5waves_x3",
PropertySheet = "LevelGenParachuteRain_5Waves",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"parachuterain_5waves_x4",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_5waves_x4",
PropertySheet = "LevelGenParachuteRain_5Waves",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"parachuterain_5waves_x5",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_5waves_x5",
PropertySheet = "LevelGenParachuteRain_5Waves",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"parachuterain_5waves_x6",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_5waves_x6",
PropertySheet = "LevelGenParachuteRain_5Waves",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 50
}

},

{
"parachuterain_5waves_x8",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_5waves_x8",
PropertySheet = "LevelGenParachuteRain_5Waves",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 25
}

},

{
"parachuterain_5waves_x10",

new LevelGenEventDataEntry()
{
EventID = "parachuterain_5waves_x10",
PropertySheet = "LevelGenParachuteRain_5Waves",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 10
}

}

},

IsObstacleGroup = false
}

},

{
"planks",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "planks",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"planks_2to3",

new LevelGenEventDataEntry()
{
EventID = "planks_2to3",
PropertySheet = "LevelGenPlanks_2to3",
EventLevel = 1,
Prerequisite = "",
Priority = 0,
Weight = 5
}

},

{
"planks_2to5",

new LevelGenEventDataEntry()
{
EventID = "planks_2to5",
PropertySheet = "LevelGenPlanks_2to5",
EventLevel = 1,
Prerequisite = "",
Priority = 0,
Weight = 3
}

},

{
"planks_all",

new LevelGenEventDataEntry()
{
EventID = "planks_all",
PropertySheet = "LevelGenPlanks",
EventLevel = 1,
Prerequisite = "",
Priority = 0,
Weight = 1
}

}

},

IsObstacleGroup = false
}

},

{
"portals",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "portals",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"portals",

new LevelGenEventDataEntry()
{
EventID = "portals",
PropertySheet = "LevelGenPortals",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 1
}

}

},

IsObstacleGroup = false
}

},

{
"raidingparty",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "raidingparty",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"raidingparty_1wave_x2",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_1wave_x2",
PropertySheet = "LevelGenRaidingParty_1Wave",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"raidingparty_1wave_x3",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_1wave_x3",
PropertySheet = "LevelGenRaidingParty_1Wave",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"raidingparty_1wave_x4",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_1wave_x4",
PropertySheet = "LevelGenRaidingParty_1Wave",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"raidingparty_1wave_x5",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_1wave_x5",
PropertySheet = "LevelGenRaidingParty_1Wave",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"raidingparty_1wave_x6",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_1wave_x6",
PropertySheet = "LevelGenRaidingParty_1Wave",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"raidingparty_1wave_x8",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_1wave_x8",
PropertySheet = "LevelGenRaidingParty_1Wave",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"raidingparty_1wave_x10",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_1wave_x10",
PropertySheet = "LevelGenRaidingParty_1Wave",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"raidingparty_2waves_x2",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_2waves_x2",
PropertySheet = "LevelGenRaidingParty_2Waves",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"raidingparty_2waves_x3",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_2waves_x3",
PropertySheet = "LevelGenRaidingParty_2Waves",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"raidingparty_2waves_x4",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_2waves_x4",
PropertySheet = "LevelGenRaidingParty_2Waves",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"raidingparty_2waves_x5",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_2waves_x5",
PropertySheet = "LevelGenRaidingParty_2Waves",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"raidingparty_2waves_x6",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_2waves_x6",
PropertySheet = "LevelGenRaidingParty_2Waves",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"raidingparty_2waves_x8",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_2waves_x8",
PropertySheet = "LevelGenRaidingParty_2Waves",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"raidingparty_2waves_x10",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_2waves_x10",
PropertySheet = "LevelGenRaidingParty_2Waves",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"raidingparty_3waves_x2",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_3waves_x2",
PropertySheet = "LevelGenRaidingParty_3Waves",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"raidingparty_3waves_x3",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_3waves_x3",
PropertySheet = "LevelGenRaidingParty_3Waves",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"raidingparty_3waves_x4",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_3waves_x4",
PropertySheet = "LevelGenRaidingParty_3Waves",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"raidingparty_3waves_x5",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_3waves_x5",
PropertySheet = "LevelGenRaidingParty_3Waves",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"raidingparty_3waves_x6",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_3waves_x6",
PropertySheet = "LevelGenRaidingParty_3Waves",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"raidingparty_3waves_x8",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_3waves_x8",
PropertySheet = "LevelGenRaidingParty_3Waves",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"raidingparty_3waves_x10",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_3waves_x10",
PropertySheet = "LevelGenRaidingParty_3Waves",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 50
}

},

{
"raidingparty_4waves_x2",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_4waves_x2",
PropertySheet = "LevelGenRaidingParty_4Waves",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"raidingparty_4waves_x3",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_4waves_x3",
PropertySheet = "LevelGenRaidingParty_4Waves",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"raidingparty_4waves_x4",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_4waves_x4",
PropertySheet = "LevelGenRaidingParty_4Waves",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"raidingparty_4waves_x5",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_4waves_x5",
PropertySheet = "LevelGenRaidingParty_4Waves",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"raidingparty_4waves_x6",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_4waves_x6",
PropertySheet = "LevelGenRaidingParty_4Waves",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"raidingparty_4waves_x8",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_4waves_x8",
PropertySheet = "LevelGenRaidingParty_4Waves",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"raidingparty_4waves_x10",

new LevelGenEventDataEntry()
{
EventID = "raidingparty_4waves_x10",
PropertySheet = "LevelGenRaidingParty_4Waves",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 100
}

}

},

IsObstacleGroup = false
}

},

{
"sandstorm",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "sandstorm",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"sandstorm_1Wave_x1",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_1Wave_x1",
PropertySheet = "LevelGenSandstorm_1Wave",
EventLevel = 1,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"sandstorm_1Wave_x2",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_1Wave_x2",
PropertySheet = "LevelGenSandstorm_1Wave",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"sandstorm_1Wave_x3",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_1Wave_x3",
PropertySheet = "LevelGenSandstorm_1Wave",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"sandstorm_1Wave_x4",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_1Wave_x4",
PropertySheet = "LevelGenSandstorm_1Wave",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"sandstorm_1Wave_x5",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_1Wave_x5",
PropertySheet = "LevelGenSandstorm_1Wave",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"sandstorm_1Wave_x6",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_1Wave_x6",
PropertySheet = "LevelGenSandstorm_1Wave",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"sandstorm_1Wave_x8",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_1Wave_x8",
PropertySheet = "LevelGenSandstorm_1Wave",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"sandstorm_1Wave_x10",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_1Wave_x10",
PropertySheet = "LevelGenSandstorm_1Wave",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"sandstorm_2Waves_x1",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_2Waves_x1",
PropertySheet = "LevelGenSandstorm_2Waves",
EventLevel = 1,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"sandstorm_2Waves_x2",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_2Waves_x2",
PropertySheet = "LevelGenSandstorm_2Waves",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"sandstorm_2Waves_x3",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_2Waves_x3",
PropertySheet = "LevelGenSandstorm_2Waves",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"sandstorm_2Waves_x4",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_2Waves_x4",
PropertySheet = "LevelGenSandstorm_2Waves",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"sandstorm_2Waves_x5",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_2Waves_x5",
PropertySheet = "LevelGenSandstorm_2Waves",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"sandstorm_2Waves_x6",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_2Waves_x6",
PropertySheet = "LevelGenSandstorm_2Waves",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"sandstorm_2Waves_x8",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_2Waves_x8",
PropertySheet = "LevelGenSandstorm_2Waves",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"sandstorm_2Waves_x10",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_2Waves_x10",
PropertySheet = "LevelGenSandstorm_2Waves",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"sandstorm_3Waves_x1",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_3Waves_x1",
PropertySheet = "LevelGenSandstorm_3Waves",
EventLevel = 1,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"sandstorm_3Waves_x2",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_3Waves_x2",
PropertySheet = "LevelGenSandstorm_3Waves",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"sandstorm_3Waves_x3",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_3Waves_x3",
PropertySheet = "LevelGenSandstorm_3Waves",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"sandstorm_3Waves_x4",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_3Waves_x4",
PropertySheet = "LevelGenSandstorm_3Waves",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"sandstorm_3Waves_x5",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_3Waves_x5",
PropertySheet = "LevelGenSandstorm_3Waves",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"sandstorm_3Waves_x6",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_3Waves_x6",
PropertySheet = "LevelGenSandstorm_3Waves",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"sandstorm_3Waves_x8",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_3Waves_x8",
PropertySheet = "LevelGenSandstorm_3Waves",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"sandstorm_3Waves_x10",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_3Waves_x10",
PropertySheet = "LevelGenSandstorm_3Waves",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"sandstorm_4Waves_x1",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_4Waves_x1",
PropertySheet = "LevelGenSandstorm_4Waves",
EventLevel = 1,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"sandstorm_4Waves_x2",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_4Waves_x2",
PropertySheet = "LevelGenSandstorm_4Waves",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"sandstorm_4Waves_x3",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_4Waves_x3",
PropertySheet = "LevelGenSandstorm_4Waves",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"sandstorm_4Waves_x4",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_4Waves_x4",
PropertySheet = "LevelGenSandstorm_4Waves",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"sandstorm_4Waves_x5",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_4Waves_x5",
PropertySheet = "LevelGenSandstorm_4Waves",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"sandstorm_4Waves_x6",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_4Waves_x6",
PropertySheet = "LevelGenSandstorm_4Waves",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"sandstorm_4Waves_x8",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_4Waves_x8",
PropertySheet = "LevelGenSandstorm_4Waves",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"sandstorm_4Waves_x10",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_4Waves_x10",
PropertySheet = "LevelGenSandstorm_4Waves",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"sandstorm_5Waves_x1",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_5Waves_x1",
PropertySheet = "LevelGenSandstorm_5Waves",
EventLevel = 1,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"sandstorm_5Waves_x2",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_5Waves_x2",
PropertySheet = "LevelGenSandstorm_5Waves",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"sandstorm_5Waves_x3",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_5Waves_x3",
PropertySheet = "LevelGenSandstorm_5Waves",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"sandstorm_5Waves_x4",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_5Waves_x4",
PropertySheet = "LevelGenSandstorm_5Waves",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"sandstorm_5Waves_x5",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_5Waves_x5",
PropertySheet = "LevelGenSandstorm_5Waves",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"sandstorm_5Waves_x6",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_5Waves_x6",
PropertySheet = "LevelGenSandstorm_5Waves",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"sandstorm_5Waves_x8",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_5Waves_x8",
PropertySheet = "LevelGenSandstorm_5Waves",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"sandstorm_5Waves_x10",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_5Waves_x10",
PropertySheet = "LevelGenSandstorm_5Waves",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"sandstorm_6Waves_x1",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_6Waves_x1",
PropertySheet = "LevelGenSandstorm_6Waves",
EventLevel = 1,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"sandstorm_6Waves_x2",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_6Waves_x2",
PropertySheet = "LevelGenSandstorm_6Waves",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"sandstorm_6Waves_x3",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_6Waves_x3",
PropertySheet = "LevelGenSandstorm_6Waves",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"sandstorm_6Waves_x4",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_6Waves_x4",
PropertySheet = "LevelGenSandstorm_6Waves",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"sandstorm_6Waves_x5",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_6Waves_x5",
PropertySheet = "LevelGenSandstorm_6Waves",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"sandstorm_6Waves_x6",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_6Waves_x6",
PropertySheet = "LevelGenSandstorm_6Waves",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"sandstorm_6Waves_x8",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_6Waves_x8",
PropertySheet = "LevelGenSandstorm_6Waves",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"sandstorm_6Waves_x10",

new LevelGenEventDataEntry()
{
EventID = "sandstorm_6Waves_x10",
PropertySheet = "LevelGenSandstorm_6Waves",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 100
}

}

},

IsObstacleGroup = false
}

},

{
"spiderrain",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "spiderrain",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"spiderrain_1wave_x2",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_1wave_x2",
PropertySheet = "LevelGenSpiderRain_1Wave",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"spiderrain_1wave_x3",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_1wave_x3",
PropertySheet = "LevelGenSpiderRain_1Wave",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"spiderrain_1wave_x4",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_1wave_x4",
PropertySheet = "LevelGenSpiderRain_1Wave",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"spiderrain_1wave_x5",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_1wave_x5",
PropertySheet = "LevelGenSpiderRain_1Wave",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"spiderrain_1wave_x6",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_1wave_x6",
PropertySheet = "LevelGenSpiderRain_1Wave",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"spiderrain_1wave_x8",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_1wave_x8",
PropertySheet = "LevelGenSpiderRain_1Wave",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"spiderrain_1wave_x10",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_1wave_x10",
PropertySheet = "LevelGenSpiderRain_1Wave",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"spiderrain_1wave_x12",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_1wave_x12",
PropertySheet = "LevelGenSpiderRain_1Wave",
EventLevel = 12,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"spiderrain_1wave_x14",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_1wave_x14",
PropertySheet = "LevelGenSpiderRain_1Wave",
EventLevel = 14,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"spiderrain_1wave_x15",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_1wave_x15",
PropertySheet = "LevelGenSpiderRain_1Wave",
EventLevel = 15,
Prerequisite = "",
Priority = 0,
Weight = 50
}

},

{
"spiderrain_1wave_x16",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_1wave_x16",
PropertySheet = "LevelGenSpiderRain_1Wave",
EventLevel = 16,
Prerequisite = "",
Priority = 0,
Weight = 50
}

},

{
"spiderrain_1wave_x18",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_1wave_x18",
PropertySheet = "LevelGenSpiderRain_1Wave",
EventLevel = 18,
Prerequisite = "",
Priority = 0,
Weight = 10
}

},

{
"spiderrain_1wave_x20",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_1wave_x20",
PropertySheet = "LevelGenSpiderRain_1Wave",
EventLevel = 20,
Prerequisite = "",
Priority = 0,
Weight = 10
}

},

{
"spiderrain_2waves_x2",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_2waves_x2",
PropertySheet = "LevelGenSpiderRain_2Waves",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"spiderrain_2waves_x3",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_2waves_x3",
PropertySheet = "LevelGenSpiderRain_2Waves",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"spiderrain_2waves_x4",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_2waves_x4",
PropertySheet = "LevelGenSpiderRain_2Waves",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"spiderrain_2waves_x5",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_2waves_x5",
PropertySheet = "LevelGenSpiderRain_2Waves",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"spiderrain_2waves_x6",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_2waves_x6",
PropertySheet = "LevelGenSpiderRain_2Waves",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"spiderrain_2waves_x8",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_2waves_x8",
PropertySheet = "LevelGenSpiderRain_2Waves",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"spiderrain_2waves_x10",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_2waves_x10",
PropertySheet = "LevelGenSpiderRain_2Waves",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"spiderrain_2waves_x12",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_2waves_x12",
PropertySheet = "LevelGenSpiderRain_2Waves",
EventLevel = 12,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"spiderrain_2waves_x14",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_2waves_x14",
PropertySheet = "LevelGenSpiderRain_2Waves",
EventLevel = 14,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"spiderrain_2waves_x15",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_2waves_x15",
PropertySheet = "LevelGenSpiderRain_2Waves",
EventLevel = 15,
Prerequisite = "",
Priority = 0,
Weight = 50
}

},

{
"spiderrain_2waves_x16",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_2waves_x16",
PropertySheet = "LevelGenSpiderRain_2Waves",
EventLevel = 16,
Prerequisite = "",
Priority = 0,
Weight = 50
}

},

{
"spiderrain_2waves_x18",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_2waves_x18",
PropertySheet = "LevelGenSpiderRain_2Waves",
EventLevel = 18,
Prerequisite = "",
Priority = 0,
Weight = 10
}

},

{
"spiderrain_2waves_x20",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_2waves_x20",
PropertySheet = "LevelGenSpiderRain_2Waves",
EventLevel = 20,
Prerequisite = "",
Priority = 0,
Weight = 5
}

},

{
"spiderrain_3waves_x2",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_3waves_x2",
PropertySheet = "LevelGenSpiderRain_3Waves",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"spiderrain_3waves_x3",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_3waves_x3",
PropertySheet = "LevelGenSpiderRain_3Waves",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"spiderrain_3waves_x4",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_3waves_x4",
PropertySheet = "LevelGenSpiderRain_3Waves",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"spiderrain_3waves_x5",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_3waves_x5",
PropertySheet = "LevelGenSpiderRain_3Waves",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"spiderrain_3waves_x6",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_3waves_x6",
PropertySheet = "LevelGenSpiderRain_3Waves",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"spiderrain_3waves_x8",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_3waves_x8",
PropertySheet = "LevelGenSpiderRain_3Waves",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"spiderrain_3waves_x10",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_3waves_x10",
PropertySheet = "LevelGenSpiderRain_3Waves",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"spiderrain_3waves_x12",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_3waves_x12",
PropertySheet = "LevelGenSpiderRain_3Waves",
EventLevel = 12,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"spiderrain_3waves_x14",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_3waves_x14",
PropertySheet = "LevelGenSpiderRain_3Waves",
EventLevel = 14,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"spiderrain_3waves_x15",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_3waves_x15",
PropertySheet = "LevelGenSpiderRain_3Waves",
EventLevel = 15,
Prerequisite = "",
Priority = 0,
Weight = 50
}

},

{
"spiderrain_3waves_x16",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_3waves_x16",
PropertySheet = "LevelGenSpiderRain_3Waves",
EventLevel = 16,
Prerequisite = "",
Priority = 0,
Weight = 25
}

},

{
"spiderrain_3waves_x18",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_3waves_x18",
PropertySheet = "LevelGenSpiderRain_3Waves",
EventLevel = 18,
Prerequisite = "",
Priority = 0,
Weight = 10
}

},

{
"spiderrain_3waves_x20",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_3waves_x20",
PropertySheet = "LevelGenSpiderRain_3Waves",
EventLevel = 20,
Prerequisite = "",
Priority = 0,
Weight = 5
}

},

{
"spiderrain_4waves_x2",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_4waves_x2",
PropertySheet = "LevelGenSpiderRain_4Waves",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"spiderrain_4waves_x3",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_4waves_x3",
PropertySheet = "LevelGenSpiderRain_4Waves",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"spiderrain_4waves_x4",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_4waves_x4",
PropertySheet = "LevelGenSpiderRain_4Waves",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"spiderrain_4waves_x5",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_4waves_x5",
PropertySheet = "LevelGenSpiderRain_4Waves",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 1000
}

},

{
"spiderrain_4waves_x6",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_4waves_x6",
PropertySheet = "LevelGenSpiderRain_4Waves",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"spiderrain_4waves_x8",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_4waves_x8",
PropertySheet = "LevelGenSpiderRain_4Waves",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"spiderrain_4waves_x10",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_4waves_x10",
PropertySheet = "LevelGenSpiderRain_4Waves",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"spiderrain_4waves_x12",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_4waves_x12",
PropertySheet = "LevelGenSpiderRain_4Waves",
EventLevel = 12,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"spiderrain_4waves_x14",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_4waves_x14",
PropertySheet = "LevelGenSpiderRain_4Waves",
EventLevel = 14,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"spiderrain_4waves_x15",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_4waves_x15",
PropertySheet = "LevelGenSpiderRain_4Waves",
EventLevel = 15,
Prerequisite = "",
Priority = 0,
Weight = 50
}

},

{
"spiderrain_4waves_x16",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_4waves_x16",
PropertySheet = "LevelGenSpiderRain_4Waves",
EventLevel = 16,
Prerequisite = "",
Priority = 0,
Weight = 25
}

},

{
"spiderrain_4waves_x18",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_4waves_x18",
PropertySheet = "LevelGenSpiderRain_4Waves",
EventLevel = 18,
Prerequisite = "",
Priority = 0,
Weight = 10
}

},

{
"spiderrain_4waves_x20",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_4waves_x20",
PropertySheet = "LevelGenSpiderRain_4Waves",
EventLevel = 20,
Prerequisite = "",
Priority = 0,
Weight = 5
}

},

{
"spiderrain_5waves_x2",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_5waves_x2",
PropertySheet = "LevelGenSpiderRain_5Waves",
EventLevel = 2,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"spiderrain_5waves_x3",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_5waves_x3",
PropertySheet = "LevelGenSpiderRain_5Waves",
EventLevel = 3,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"spiderrain_5waves_x4",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_5waves_x4",
PropertySheet = "LevelGenSpiderRain_5Waves",
EventLevel = 4,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"spiderrain_5waves_x5",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_5waves_x5",
PropertySheet = "LevelGenSpiderRain_5Waves",
EventLevel = 5,
Prerequisite = "",
Priority = 0,
Weight = 700
}

},

{
"spiderrain_5waves_x6",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_5waves_x6",
PropertySheet = "LevelGenSpiderRain_5Waves",
EventLevel = 6,
Prerequisite = "",
Priority = 0,
Weight = 500
}

},

{
"spiderrain_5waves_x8",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_5waves_x8",
PropertySheet = "LevelGenSpiderRain_5Waves",
EventLevel = 8,
Prerequisite = "",
Priority = 0,
Weight = 300
}

},

{
"spiderrain_5waves_x10",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_5waves_x10",
PropertySheet = "LevelGenSpiderRain_5Waves",
EventLevel = 10,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"spiderrain_5waves_x12",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_5waves_x12",
PropertySheet = "LevelGenSpiderRain_5Waves",
EventLevel = 12,
Prerequisite = "",
Priority = 0,
Weight = 100
}

},

{
"spiderrain_5waves_x14",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_5waves_x14",
PropertySheet = "LevelGenSpiderRain_5Waves",
EventLevel = 14,
Prerequisite = "",
Priority = 0,
Weight = 50
}

},

{
"spiderrain_5waves_x15",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_5waves_x15",
PropertySheet = "LevelGenSpiderRain_5Waves",
EventLevel = 15,
Prerequisite = "",
Priority = 0,
Weight = 25
}

},

{
"spiderrain_5waves_x16",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_5waves_x16",
PropertySheet = "LevelGenSpiderRain_5Waves",
EventLevel = 16,
Prerequisite = "",
Priority = 0,
Weight = 10
}

},

{
"spiderrain_5waves_x18",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_5waves_x18",
PropertySheet = "LevelGenSpiderRain_5Waves",
EventLevel = 18,
Prerequisite = "",
Priority = 0,
Weight = 5
}

},

{
"spiderrain_5waves_x20",

new LevelGenEventDataEntry()
{
EventID = "spiderrain_5waves_x20",
PropertySheet = "LevelGenSpiderRain_5Waves",
EventLevel = 20,
Prerequisite = "",
Priority = 0,
Weight = 5
}

}

},

IsObstacleGroup = false
}

},

{
"tide",

new LevelGenEventGroupDataEntry()
{
EventGroupID = "tide",

EventData = std::unordered_map<std::string, LevelGenEventDataEntry*>
{

{
"tide",

new LevelGenEventDataEntry()
{
EventID = "tide",
PropertySheet = "LevelGenTide",
EventLevel = 15,
Prerequisite = "",
Priority = 0,
Weight = 1
}

}

},

IsObstacleGroup = false
}

}

};

this->CustomSeeds = std::vector<LevelGenCustomSeedEntry*>
{
new LevelGenCustomSeedEntry(),

new LevelGenCustomSeedEntry()
{
World = "iceage",
Seed = "B911D66E-D4B0-4786-8AC8-B6F4E12229F8"
}

};

}

}