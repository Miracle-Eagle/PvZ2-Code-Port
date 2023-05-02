#include "PropertySheets.h"

using namespace Global::Types;
using namespace SharedObject::Properties;
using namespace SharedObject::Properties::Base;
using namespace SharedObject::Properties::Dinosaur;

namespace SharedObject::Packages
{
/** <summary> Access the "SeedChooserPriorityProps" Instance Field from the PropertySheets Class. </summary>
<returns> The Instance Field Obtained. </returns> */

SeedChooserPriorityList *PropertySheets::SeedChooserPriorityProps;

/** <summary> Access the "SeedChooserFamilyPriorityProps" Instance Field from the PropertySheets Class. </summary>
<returns> The Instance Field Obtained. </returns> */

SeedChooserFamilyPriorityList *PropertySheets::SeedChooserFamilyPriorityProps;

/** <summary> Access the "MiniGameMusicEnableProps" Instance Field from the PropertySheets Class. </summary>
<returns> The Instance Field Obtained. </returns> */

MiniGameMusicEnableList *PropertySheets::MiniGameMusicEnableProps;

/** <summary> Access the "DefaultGameProps" Instance Field from the PropertySheets Class. </summary>
<returns> The Instance Field Obtained. </returns> */

GamePropertySheet *PropertySheets::DefaultGameProps;


#region string #comment = Entry Point to Dinosaur Fields


/** <summary> Access the "DinoRaptor" Instance Field from the PropertySheets Class. </summary>
<returns> The Instance Field Obtained. </returns> */

DinosaurRaptorPropertySheet *PropertySheets::DinoRaptor;

/** <summary> Access the "DinoStego" Instance Field from the PropertySheets Class. </summary>
<returns> The Instance Field Obtained. </returns> */

DinosaurStegosaurusPropertySheet *PropertySheets::DinoStego;

/** <summary> Access the "DinoPtero" Instance Field from the PropertySheets Class. </summary>
<returns> The Instance Field Obtained. </returns> */

DinosaurPterodactylPropertySheet *PropertySheets::DinoPtero;

/** <summary> Access the "DinoAnkylo" Instance Field from the PropertySheets Class. </summary>
<returns> The Instance Field Obtained. </returns> */

DinosaurAnkylosaurusPropertySheet *PropertySheets::DinoAnkylo;

/** <summary> Access the "DinoTyrannosaurus" Instance Field from the PropertySheets Class. </summary>
<returns> The Instance Field Obtained. </returns> */

DinosaurTyrannosaurusPropertySheet *PropertySheets::DinoTyrannosaurus;


#endregion string #comment = Exit Point from Dinosaur Fields


#region string #comment = Entry Point to EffectObject Fields


// Access to EffectObjects in this Block


#endregion string #comment = Exit Point from EffectObject Fields


#region string #comment = Entry Point to PlantBoost Fields


/** <summary> Access the "BoostBountyHunter" Instance Field from the PropertySheets Class. </summary>
<returns> The Instance Field Obtained. </returns> */

PlantBoostPropertySheet *PropertySheets::BoostBountyHunter;

/** <summary> Access the "BoostExtraToughness" Instance Field from the PropertySheets Class. </summary>
<returns> The Instance Field Obtained. </returns> */

PlantBoostPropertySheet *PropertySheets::BoostExtraToughness;

/** <summary> Access the "BoostFastRecharge" Instance Field from the PropertySheets Class. </summary>
<returns> The Instance Field Obtained. </returns> */

PlantBoostPropertySheet *PropertySheets::BoostFastRecharge;

/** <summary> Access the "BoostFirstStrike" Instance Field from the PropertySheets Class. </summary>
<returns> The Instance Field Obtained. </returns> */

PlantBoostPropertySheet *PropertySheets::BoostFirstStrike;

/** <summary> Access the "BoostRapidFire" Instance Field from the PropertySheets Class. </summary>
<returns> The Instance Field Obtained. </returns> */

PlantBoostPropertySheet *PropertySheets::BoostRapidFire;

/** <summary> Access the "BoostSunDiscount" Instance Field from the PropertySheets Class. </summary>
<returns> The Instance Field Obtained. </returns> */

PlantBoostPropertySheet *PropertySheets::BoostSunDiscount;

/** <summary> Access the "BoostShovelBomb" Instance Field from the PropertySheets Class. </summary>
<returns> The Instance Field Obtained. </returns> */

PlantBoostPropertySheet *PropertySheets::BoostShovelBomb;


#endregion string #comment = Exit Point from PlantBoost Fields


/// <summary> Setups all the Fields from the PropertySheets Instance. </summary>

PropertySheets::PropertySheets()
{
SeedChooserPriorityProps = new SeedChooserPriorityList();
SeedChooserFamilyPriorityProps = new SeedChooserFamilyPriorityList();

MiniGameMusicEnableProps = new MiniGameMusicEnableList();
DefaultGameProps = new GamePropertySheet();


#region int ############ Dino Creature Types BEGIN ############# = 0


DinoRaptor = new DinosaurRaptorPropertySheet();
DinoStego = new DinosaurStegosaurusPropertySheet();

DinoPtero = new DinosaurPterodactylPropertySheet();
DinoAnkylo = new DinosaurAnkylosaurusPropertySheet();

DinoTyrannosaurus = new DinosaurTyrannosaurusPropertySheet();


#endregion int ############ Dino Creature Types END ############# = 0


#region int ############ Effect Object Types BEGIN ############ = 0


// Setup Effect Objects in this Block


#endregion int ############ Effect Object Types END ############ = 0


#region int ############ Zen Garden Plant Boosts START ############ = 0


BoostBountyHunter = new PlantBoostPropertySheet()
{
Type = PlantBoostType::bounty_hunter,
Name = "[BOOST_TITLE_BOUNTY_HUNTER]",
Description = "[BOOST_COMBAT_BOUNTY_HUNTER]",
HarvestImage = "IMAGE_ZEN_GARDEN_BOOSTS_BOOST_BOUNTY_HUNTER"
};

BoostExtraToughness = new PlantBoostPropertySheet()
{
Type = PlantBoostType::extra_toughness,
Name = "[BOOST_TITLE_EXTRA_TOUGH]",
Description = "[BOOST_COMBAT_EXTRA_TOUGH]",
HarvestImage = "IMAGE_ZEN_GARDEN_BOOSTS_BOOST_EXTRA_TOUGHNESS"
}:

BoostFastRecharge = new PlantBoostPropertySheet()
{
Type = PlantBoostType::fast_recharge,
Name = "[BOOST_TITLE_FAST_RECHARGE]",
Description = "[BOOST_COMBAT_FAST_RECHARGE]",
HarvestImage = "IMAGE_ZEN_GARDEN_BOOSTS_BOOST_FAST_RECHARGE"
};

BoostFirstStrike = new PlantBoostPropertySheet()
{
Type = PlantBoostType::first_strike,
Name = "[BOOST_TITLE_FIRST_STRIKE]",
Description = "[BOOST_COMBAT_FIRST_STRIKE]",
DetailDescription = "[BOOST_DETAIL_FIRST_STRIKE]",
HarvestImage = "IMAGE_ZEN_GARDEN_BOOSTS_BOOST_FIRST_STRIKE"
};

BoostRapidFire = new PlantBoostPropertySheet()
{
Type = PlantBoostType::rapid_fire,
Name = "[BOOST_TITLE_RAPID_FIRE]",
Description = "[BOOST_COMBAT_RAPID_FIRE]",
HarvestImage = "IMAGE_ZEN_GARDEN_BOOSTS_BOOST_RAPID_FIRE"
};

BoostSunDiscount = new PlantBoostPropertySheet()
{
Type = PlantBoostType::sun_discount,
Name = "[BOOST_TITLE_SUN_DISCOUNT]",
Description = "[BOOST_COMBAT_SUN_DISCOUNT]",
HarvestImage = "IMAGE_ZEN_GARDEN_BOOSTS_BOOST_SUN_DISCOUNT"
};

BoostShovelBomb = new PlantBoostPropertySheet()
{
Type = PlantBoostType::shovel_bomb,
Name = "[BOOST_TITLE_SHOVEL_BOMB]",
Description = "[BOOST_COMBAT_SHOVEL_BOMB]",
HarvestImage = "IMAGE_ZEN_GARDEN_BOOSTS_BOOST_SHOVEL_BOMB"
};


#endregion int ############ Zen Garden Plant Boosts END ############ = 0


}
	
}