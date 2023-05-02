namespace Global::Values
{
/// <summary> Determines the Formula which a Property must Follow when Scaling. </summary>

enum class ScaledFormula
{
/// A Standard Formula is Applied to the Property.
standard,

/// Property's Value remains Constant.
constant,

/// Property's Value follows an Adding Operation.
flat,

/** </ummary> Property's Value increases X value each Y levels. </summary>
<remarks> This Formula is used for the MasteryBoostChance Property, which is a Percentage Value. </remarks> */

boost_mastery
};

}
