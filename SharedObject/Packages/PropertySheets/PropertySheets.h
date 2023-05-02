using namespace Global::Types;
using namespace SharedObject::Properties::Base;
using namespace SharedObject::Properties::Dinosaur;
using namespace SharedObject::Properties::Game;

namespace SharedObject::Packages
{
/// <summary> A Class used for Retrieving Info about all the Sheets found in the Properties Namespace. </summary>

class PropertySheets
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the SeedChooser Priority List. </summary>
<returns> The SeedChooser Priority List. </returns> */

static SeedChooserPriorityList *SeedChooserPriorityProps;

/** <summary> Gets or Sets a Value which Contains Info about the SeedChooser Family Priority List. </summary>
<returns> The SeedChooser Family Priority List. </returns> */

static SeedChooserFamilyPriorityList *SeedChooserFamilyPriorityProps;

/** <summary> Gets or Sets a Value which Contains Info about the MiniGame Music Module Enable List. </summary>
<returns> The MiniGame Music Module Enable List. </returns> */

static MiniGameMusicEnableList *MiniGameMusicEnableProps;

/** <summary> Gets or Sets a Value which Contains Info about the Default Game Properties. </summary>
<returns> The Default Game Properties. </returns> */

static GamePropertySheet *DefaultGameProps;


#region string #comment = Dinosaur Fields declaration Start from Here


/** <summary> Gets or Sets a Value which Contains Info about the Raptor Dinosaur Properties. </summary>
<returns> The Raptor Dinosaur Properties. </returns> */

static DinosaurRaptorPropertySheet *DinoRaptor;

/** <summary> Gets or Sets a Value which Contains Info about the Stegosaurus Dinosaur Properties. </summary>
<returns> The Stegosaurus Dinosaur Properties. </returns> */

static DinosaurStegosaurusPropertySheet *DinoStego;

/** <summary> Gets or Sets a Value which Contains Info about the Pterodactyl Dinosaur Properties. </summary>
<returns> The Pterodactyl Dinosaur Properties. </returns> */

static DinosaurPterodactylPropertySheet *DinoPtero;

/** <summary> Gets or Sets a Value which Contains Info about the Ankylosaurus Dinosaur Properties. </summary>
<returns> The Ankyloraurus Dinosaur Properties. </returns> */

static DinosaurAnkylosaurusPropertySheet *DinoAnkylo;

/** <summary> Gets or Sets a Value which Contains Info about the Tyrannosaurus Dinosaur Properties. </summary>
<returns> The Tyrannosaurus Dinosaur Properties. </returns> */

static DinosaurTyrannosaurusPropertySheet *DinoTyrannosaurus;


#endregion string #comment = Dinosaur Fields declaration End right Here


#region string #comment = EffectObject Fields declaration Start from here


// Add Effect Objects to this Block


#endregion string #comment = EffectObject Fields declaration End right Here


#region string #comment = PlantBoost Fields declaration Start from here


/** <summary> Gets or Sets a Value which Contains Info about the BountyHunter Boost Properties. </summary>
<returns> The BountyHunter Boost Properties. </returns> */

static PlantBoostPropertySheet *BoostBountyHunter;

/** <summary> Gets or Sets a Value which Contains Info about the ExtraToughness Boost Properties. </summary>
<returns> The ExtraToughness Boost Properties. </returns> */

static PlantBoostPropertySheet *BoostExtraToughness;

/** <summary> Gets or Sets a Value which Contains Info about the FastRecharge Boost Properties. </summary>
<returns> The FastRecharge Boost Properties. </returns> */

static PlantBoostPropertySheet *BoostFastRecharge;

/** <summary> Gets or Sets a Value which Contains Info about the FirstStrike Boost Properties. </summary>
<returns> The FirstStrike Boost Properties. </returns> */

static PlantBoostPropertySheet *BoostFirstStrike;

/** <summary> Gets or Sets a Value which Contains Info about the RapidFire Boost Properties. </summary>
<returns> The RapidFire Boost Properties. </returns> */

static PlantBoostPropertySheet *BoostRapidFire;

/** <summary> Gets or Sets a Value which Contains Info about the SunDiscount Boost Properties. </summary>
<returns> The SunDiscount Boost Properties. </returns> */

static PlantBoostPropertySheet *BoostSunDiscount;

/** <summary> Gets or Sets a Value which Contains Info about the ShovelBomb Boost Properties. </summary>
<returns> The ShovelBomb Boost Properties. </returns> */

static PlantBoostPropertySheet *BoostShovelBomb;


#endregion string #comment = PlantBoost Fields declaration End right Here!


// Add more objects here...


/// <summary> Initializes a new Instance of the PropertySheets Class </summary>

PropertySheets();
};

}