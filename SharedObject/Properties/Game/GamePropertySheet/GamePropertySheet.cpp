#include "GamePropertySheet.h"

using namespace Global::Values;

namespace SharedObject::Properties::Game
{
/** <summary> Access the PlantTypeOrder Property. </summary>
<returns> The PlantTypeOrder Property Value. </returns> */

std::vector<std::string> GamePropertySheet::PlantTypeOrder;

/// <summary> Setups all the Fields from the GamePropertySheet Instance. </summary>

GamePropertySheet::GamePropertySheet()
{
this->ZombieAlmanacOrder = { "tutorial", "tutorial_armor1", "tutorial_armor2", "tutorial_armor4", "tutorial_flag", "tutorial_flag_veteran", "tutorial_imp", "tutorial_gargantuar", "vase_gargantuar", "mummy", "mummy_armor1", "mummy_armor2", "mummy_armor4", "mummy_flag", "mummy_flag_veteran", "ra", "camel_almanac", "explorer", "explorer_veteran", "tomb_raiser", "pharaoh", "egypt_imp", "egypt_gargantuar", "zombossmech_egypt", "pirate", "pirate_armor1", "pirate_armor2", "pirate_armor4", "pirate_flag", "pirate_flag_veteran", "swashbuckler", "seagull", "pelican", "barrelroller", "pirate_imp", "cannon", "pirate_captain", "pirate_captain_parrot", "pirate_gargantuar", "zombossmech_pirate", "cowboy", "cowboy_armor1", "cowboy_armor2", "cowboy_armor4", "cowboy_flag", "cowboy_flag_veteran", "prospector", "piano", "poncho", "chicken_farmer", "chicken", "west_bull", "west_bull_veteran", "west_bullrider", "cowboy_gargantuar", "zombossmech_cowboy", "treasureyeti", "future", "future_armor1", "future_armor2", "future_armor4", "future_flag", "future_flag_veteran", "future_jetpack", "future_jetpack_veteran", "future_protector", "future_imp", "mech_cone", "disco_mech", "future_jetpack_disco", "football_mech", "future_gargantuar", "zombossmech_future", "dark", "dark_armor1", "dark_armor2", "dark_armor3", "dark_flag", "dark_imp", "dark_juggler", "dark_gargantuar", "dark_wizard", "dark_king", "dark_imp_dragon", "zombossmech_dark", "beach", "beach_armor1", "beach_armor2", "beach_flag", "beach_fem", "beach_fem_armor1", "beach_fem_armor2", "beach_snorkel", "beach_imp", "beach_surfer", "beach_gargantuar", "beach_fisherman", "beach_octopus", "zombossmech_beach", "iceage", "iceage_armor1", "iceage_armor2", "iceage_armor3", "iceage_flag", "iceage_hunter", "iceage_imp", "iceage_dodo", "iceage_troglobite", "iceage_weaselhoarder", "iceage_weasel", "iceage_gargantuar", "zombossmech_iceage", "lostcity", "lostcity_armor1", "lostcity_armor2", "lostcity_flag", "lostcity_imp", "lostcity_lostpilot", "lostcity_excavator", "lostcity_jane", "lostcity_bug", "lostcity_gargantuar", "lostcity_impporter", "lostcity_relichunter", "lostcity_crystalskull", "zombossmech_lostcity", "eighties", "eighties_armor1", "eighties_armor2", "eighties_flag", "eighties_punk", "eighties_glitter", "eighties_mc", "eighties_imp", "eighties_gargantuar", "eighties_breakdancer", "eighties_arcade", "eighties_8bit", "eighties_boombox", "zombossmech_eighties", "dino", "dino_armor1", "dino_armor2", "dino_armor3", "dino_armor4", "dino_flag", "dino_flag_veteran", "dino_imp", "dino_gargantuar", "dino_bully", "dino_bully_veteran", "zombossmech_dino", "modern_newspaper", "newspaper_veteran", "modern_balloon", "modern_allstar", "modern_superfanimp", "general_treadmill_phase3", "general_zmech_phase3", "caketank", "imppear_imp", "roman", "roman_armor1", "roman_armor2", "roman_armor3", "roman_armor4", "roman_flag", "roman_healer", "roman_shield_almanac", "roman_gargantuar", "roman_imp", "roman_ballista", "roman_medusa", "general_caesar_phase3", "zcorp_imp", "zcorp_gargantuar", "zcorp", "zcorp_fem", "zcorp_armor1", "zcorp_armor2", "zcorp_fem_armor1", "zcorp_fem_armor2", "zcorp_flag", "zcorp_consultant", "zcorp_helpdesk", "zcorp_racer_chair", "carnie", "carnie_armor1", "carnie_armor2", "carnie_armor4", "carnie_flag", "carnie_cannon", "carnie_imp", "carnie_imp_twins", "carnie_gargantuar", "carnie_imp_split", "carnie_magician", "carnie_firebreather", "carnie_stiltwalker", "zombossmech_circus", "nutcracker", "caketankfeastivus" };
this->SproutFirstLevelThreshold = { "egypt12", "pirate1", "cowboy1", "future1", "dark1", "beach1", "iceage1", "lostcity1", "eighties1", "dino1", "modern1" };

this->StarsPerCostume = std::make_optional(20);
this->KeysPerCostume = std::make_optional(10);

this->CoinsPerKey = std::make_optional(1000);
this->LawnMowerPurchasePriceInCoins = std::make_optional(2000);

this->PowerTilePropagationAlpha = std::make_optional(1.0f);
this->PowerTilePropagationDelay = std::make_optional(0.2f);

this->PowerTilePropagationInitialDelay = std::make_optional(2.0f);
this->ZombieVsZombieCrushingDamageScale = std::make_optional(0.05f);

this->ZombieVsFriendlyZombieDamageScale = std::make_optional(0.9f);
this->ZombieConditionsWhichInvincibleOverrides = { ZombieConditions::chill, ZombieConditions::freeze, ZombieConditions::stun, ZombieConditions::butter, ZombieConditions::haunted, ZombieConditions::stalled, ZombieConditions::poisoned, ZombieConditions::contagiouspoison };

this->SeedSlotRentalCost = std::make_optional(650);
}

}