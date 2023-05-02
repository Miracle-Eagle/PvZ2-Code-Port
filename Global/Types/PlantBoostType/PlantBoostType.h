namespace Global::Types
{
/// <summary> Determines the Type of a Plant Boost. </summary>

enum class PlantBoostType : int
{
/// <summary> The Default Value of this Enum. </summary>
none = 0,

/// <summary> Boost Type is Bounty Hunter. </summary>
bounty_hunter = 1,

/// <summary> Boost Type is Extra Toughness. </summary>
extra_toughness = 2,

/// <summary> Boost Type is Fast Recharge. </summary>
fast_recharge = 3,

/// <summary> Boost Type is First Strike. </summary>
first_strike = 4,

/// <summary> Boost Type is Rapid Fire. </summary>
rapid_fire = 5,

/// <summary> Boost Type is Sun Discount. </summary>
sun_discount = 6,

/// <summary> Boost Type is Shovel Bomb. </summary>
shovel_bomb = 7
};

}