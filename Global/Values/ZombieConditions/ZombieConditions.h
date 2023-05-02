#pragma once

namespace Global::Values
{
/// <summary>  Determines the Condition Type applied to a Zombie. </summary>

enum class ZombieConditions
{
/// No Condition is Applied.
none,

/// The Zombie will Display Flashing Effects when Damaged.
damageflash,

/// The Zombie will Display Bleeding Effects when Damaged.
bleeding,

/// The Zombie will be Tossed.
tossed,

/// The Zombie is Unsuspendable, meaning that, nothing can make it Able to be Suspended in air.
unsuspendable,

/// The Zombie will be Chilled.
chill,

/// The Zombie will be Frozen.
freeze,

/// The Zombie is Stunned with Butter.
butter,

/// The Zombie will Display Lighning Effects when Damaged.
lightning,

/// The Zombie will Produce Sun when Damaged.
sunbeaned,

/// The Zombie is Hypnotized.
hypnotized,

/// The Zombie will be Converted to a Gargantuar.
morphedtogargantuar,

/// The Zombie will gain Speed (Potion Variant I).
potionspeed1,

/// The Zombie will gain Speed (Potion Variant II).
potionspeed2,

/// The Zombie will gain Speed (Potion Variant III).
potionspeed3,

/// The Zombie will gain Toughness (Potion Variant I).
potiontoughness1,

/// The Zombie will gain Toughness (Potion Variant II).
potiontoughness2,

/// The Zombie will gain Toughness (Potion Variant III).
potiontoughness3,

/// The Zombie is Haunted.
haunted,

/// The Zombie is Sapped.
sapped,

/// The Zombie will be Stunned.
stun,

/// The Zombie will be Stalled.
stalled,

/// The Zombie will be Poisoned.
poisoned,

/// The Zombie will be Poisoned, spreading the Venom to other Adjacent Zombies.
contagiouspoison,

/** <summary>The Zombie will receive more Damage with the Sucesive Impacts. </summary>
<remarks> This Condition is only Produced by Blooming Heart. </remarks> */

bloomingheartdebuff,

/** <summary> The Zombie will be Stunned. </summary>
<remarks> This Condition is only Produced by Dazey Chain. </remarks> */

dazeystunned,

/// The Zombie will be Stunned by a Bubble Gum.
gummed,

/// The Zombie will be Frozen in a Ice Cube.
icecubed,

/// The Zombie will lose Speed (Variant I).
speeddown1,

/// The Zombie will lose Speed (Variant II).
speeddown2,

/// The Zombie will lose Speed (Variant III).
speeddown3,

/// The Zombie will lose Speed (Variant IV).
speeddown4,

/// The Zombie will gain Speed (Variant I).
speedup1,

/// The Zombie will gain Speed (Variant II).
speedup2,

/// The Zombie will gain Speed (Variant III).
speedup3,

/// The Zombie will gain Speed (Variant IV).
speedup4,

/** <summary> The Zombie will gain an Average Speed Boost. </summary>
<remarks> This Condition is only Produced by the Tyranossaurus. </remarks> */

rush,

/// The Zombie will be Converted in a Stone block.
stoneblocked,

/// The Zombie is inmune to any Type of Damage.
invincible,

/// The Zombie is Warping in a Portal.
warpingIn,

/// The Zombie is Warping out of a Portal.
warpingOut,

/**  <summary> The Zombie will gain Stunned. </summary>
<remarks> This Condition is only Applied to Dr. Zomboss. </remarks> */

zombossstun
};

}
