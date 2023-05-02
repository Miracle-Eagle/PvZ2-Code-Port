namespace Global::Types
{
/// <summary> Determines the Type of a Power. </summary>

enum class PowerType
{
/// <summary> The Power of a Sun Producer. </summary>
SunProducer,

/// <summary> The Power gives a Shield. </summary>
Shield,

/// <summary> The Power is an Attack in a Grid Radius. </summary>
DamageRadius,

/// <summary> The Power duplicates an Entity. </summary>
Duplicator,

/// <summary> The Power is a Linear Burst. </summary>
LinearBurst,

/// <summary> The Power is Warming in a Grid Radius. </summary>
WarmingRadius,

/// <summary> The Power is related to Sunshroom's Growth. </summary>
SunshroomGrowth,

/// <summary> The Power is related to the Location Data of Red Stinger. </summary>
RedStingerLocationData,

/// <summary> The Power is related to Strawburst's Growth. </summary>
StrawburstGrowth
};

}