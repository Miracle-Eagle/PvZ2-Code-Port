#include "SeedChooserPriorityList.h"

namespace SharedObject::Properties::Game
{
/// <summary> Setups all the Fields from the SeedChooserPriorityList Instance. </summary>

SeedChooserPriorityList::SeedChooserPriorityList()
{
this->ClassicList = { "sunflower", "peashooter", "wallnut", "potatomine", "bloomerang", "cabbagepult", "iceburg", "bonkchoy" };
this->FeatureList = { "firepeashooter" };

this->PromoList = {"homingthistle", "sweetpotato", "sapfling", "hurrikale"};
}

}