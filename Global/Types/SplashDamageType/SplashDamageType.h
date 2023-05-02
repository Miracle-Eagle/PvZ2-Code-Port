namespace Global::Types
{
/// <summary> Determines the Type of Splash Damage a Entity does. </summary>

enum class SplashDamageType
{
/// <summary> No Damage is Dealt. </summary>
none,

/// <summary> The Damage is Dealt in a Radius. </summary>
radius,

/// <summary> The Damage is Dealt in a Radius tiered Row. </summary>
radius_tiered_row,

/// <summary> The Damage is Dealt in a Row. </summary>
row,

/// <summary> The Damage is Dealt in an Adjacent Row. </summary>
row_adjacent,

/// <summary> The Damage is Dealt in a Column. </summary>
column,

/// <summary> The Damage is Dealt in a Gridwide Column. </summary>
column_gridwide,

/// <summary> The Damage is Dealt in a Square. </summary>
square,

/// <summary> The Damage is Dealt only to an Enemy. </summary>
enemy,

/// <summary> The Damage is Dealt in a large Radius. </summary>
large_radius
};

}