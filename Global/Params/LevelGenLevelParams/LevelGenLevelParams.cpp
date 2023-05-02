#include "LevelGenLevelParams.h"

namespace Global::Params
{
/// <summary> Setups all the Fields from the LevelGenLevelParams Instance. </summary>

LevelGenLevelParams::LevelGenLevelParams()
{
this->Title = L"MyTitle";
this->Description = L"MyDescription";

this->LevelNumber = 1;
this->DisableSaveGame = false;
}

}