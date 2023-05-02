#include <any>

using namespace Global::Values;

namespace SharedObject::Entries
{
/// <summary> A Class Entry used for Retrieving the Scaled Properties from a Board Entity Instance. </summary>

class BoardEntityScaledPropsEntry
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Key of a Property. </summary>
<returns> The Key of the Property. </returns> */

EntityKey *Key;

/** <summary> Gets or Sets a Value which Contains Info about the Formula which a Property must Follow. </summary>
<returns> The Formula of the Property. </returns> */

ScaledFormula *Formula;

/** <summary> Gets or Sets a Value which Contains Info about the First Argument of a Property. </summary>
<returns> The First Argument of the Property. </returns> */

std::any Arg1;

/** <summary> Gets or Sets a Value which Contains Info about the Second Argument of a Property. </summary>
<returns> The Second Argument of the Property. </returns> */

std::any Arg2;

/// <summary>Initializes a new Instance of the BoardEntityScaledPropsEntry Class. </summary>

BoardEntityScaledPropsEntry();

/// <summary> Releases all the Resources Consumed by the BoardEntityScaledPropsEntry Instance. </summary>

virtual ~BoardEntityScaledPropsEntry()
{
delete Key;
delete Formula;
}

};

}