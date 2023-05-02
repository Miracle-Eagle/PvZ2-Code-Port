#include <optional>
#include <string>
#include <vector>

using namespace Global::Definitions;
using namespace Global::Values;
using namespace SharedObject::Entries;

namespace SharedObject::Properties::Base
{
/** <summary> Retrieves all the Properties related to the Projectile Class. </summary>
<remarks> This Class uses the PropertySheetBase for Saving Info of the Current Instance. </remarks> */

class ProjectilePropertySheet : public PropertySheetBase
{

public:

/** <summary> Gets or Sets a Value which Contains Info about the Class Name of a Projectile. </summary>
<returns> The Class Name of the Projectile. </returns> */

std::string ClassName;

/** <summary> Gets or Sets a Value which Contains Info about the Base Damage a Projectile does. </summary>
<returns> The Base Damage of the Projectile. </returns> */

std::optional<float> BaseDamage;

/** <summary> Gets or Sets a Value which Contains Info about the Amount of Health that a Projectile heals. </summary>
<returns> The Amount of Health that the Projectile heals. </returns> */

std::optional<float> HealAmount;

/** <summary> Gets or Sets a Value which Contains Info about the Collision Flags of a Projectile. </summary>
<returns> The Collision Flags of the Projectile. </returns> */

std::vector<CollisionTypeFlags*> CollisionFlags;

/** <summary> Gets or Sets a Value which Contains Info about the Damage Flags of a Projectile. </summary>
<returns> The Damage Flags of the Projectile. </returns> */

std::vector<DamageTypeFlags*> DamageFlags;

/** <summary> Gets or Sets a Value which Contains Info about the Amount of Splash Damage a Projectile does. </summary>
<returns> The Amount of Splash Damage that the Projectile does. </returns> */

std::optional<float> SplashDamage;

/** <summary> Gets or Sets a Value which Contains Info about the Splash Radius of a Projectile. </summary>
<returns> The Splash Radius of the Projectile. </returns> */

std::optional<float> SplashRadius;

/** <summary> Gets or Sets a Value which Contains Info about the Stun Duration a Projectile applies as a Condition. </summary>
<returns> The Stun Duration which the Projectile applies as a Condition. </returns> */

std::optional<float> StunDuration;

/** <summary> Gets or Sets a Value which Contains Info about the Splash Damage Cutoff of a Projectile. </summary>
<returns> The Splash Damage Cutoff of the Projectile. </returns> */

std::optional<float> SplashRadiusBaseDamageCutoff;

/** <summary> Gets or Sets a Value which Contains Info about the Board Shaking Condition of a Projectile. </summary>
<returns> A Boolean that Determines if the Projectile shakes the Board when Colliding. </returns> */

std::optional<bool> ShakeBoardOnSplash;

/** <summary> Gets or Sets a Value which Contains Info about the Projectile Impacting Condition. </summary>
<returns> A Boolean that Determines if the Projectile dies after Impacting or not. </returns> */

std::optional<bool> DiesOnImpact;

/** <summary> Gets or Sets a Value which Contains Info about the Shadow Visuals of a Projectile. </summary>
<returns> A Boolean that Determines if the Projectile has Shadow or not. </returns> */

std::optional<bool> HasShadow;

/** <summary> Gets or Sets a Value which Contains Info about the Impact Sound Play Condition of a Projectile. </summary>
<returns> A Boolean that Determines if the Projectile Impact Sound will be Force Played or not. </returns> */

std::optional<bool> ImpactSoundForce;

/** <summary> Gets or Sets a Value which Contains Info about the Velocity Rotation Matching of a Projectile. </summary>
<returns> A Boolean that Determines if the Projectile will Rotate to Match its Velocity or not. </returns> */

std::optional<bool> RotateToMatchVelocity;

/** <summary> Gets or Sets a Value which Contains Info about the Ground Following Condition of a Projectile. </summary>
<returns> A Boolean that Determines if the Projectile follows Ground or not. </returns> */

std::optional<bool> FollowsGround;

/** <summary> Gets or Sets a Value which Contains Info about the Projectile Condition that Overrides the Stun Effects in a Zombie. </summary>
<returns> The Projectile Condition that Overrides the Stun Effects in a Zombie. </returns> */

std::optional<ZombieConditions*> OverrideStunCondition;

/** <summary> Gets or Sets a Value which Contains Info about the Initial Velocity of a Projectile. </summary>
<returns> The Initial Velocity of the Projectile. </returns> */

std::vector<ValueRange*> InitialVelocity;

/** <summary> Gets or Sets a Value which Contains Info about the Initial Acceleration of a Projectile </summary>
<returns> The Initial Acceleration of the Projectile. </returns> */

std::vector<ValueRange*> InitialAcceleration;

/** <summary> Gets or Sets a Value which Contains Info about the Initial Velocity Scale of a Projectile </summary>
<returns> The Initial Velocity Scale of the Projectile. </returns> */

std::vector<ValueRange*> InitialVelocityScale;

/** <summary> Gets or Sets a Value which Contains Info about the Initial Height of a Projectile. </summary>
<returns> The Initial Height of the Projectile. </returns> */

ValueRange *InitialHeight;

/** <summary> Gets or Sets a Value which Contains Info about the Initial Rotation of a Projectile. </summary>
<returns> The Initial Rotation of the Projectile. </returns> */

ValueRange *InitialRotation;

/** <summary> Gets or Sets a Value which Contains Info about the Initial Angular Velocity of a Projectile. </summary>
<returns> The Initial Angular Velocity of the Plant. </returns> */

ValueRange *InitialAngularVelocity;

/** <summary> Gets or Sets a Value which Contains Info about the Initial Scale of a Projectile. </summary>
<returns> The Initial Scale of the Projectile. </returns> */

ValueRange *InitialScale;

/** <summary> Gets or Sets a Value which Contains Info about the Attached PAM File of a Projectile. </summary>
<remarks>The PopCap Animation Module (PAM) File Refers to the File which Stores the Instructions of how the Animations should be Displayed. </remarks>

<returns> The Attached PAM File of the Projectile. </returns> */

std::string AttachedPAM;

/** <summary> Gets or Sets a Value which Contains Info about the Animations Rigurator of an Attached Projectile PAM File. </summary>
<remarks>The PopCap Animation Module (PAM) File Refers to the File which Stores the Instructions of how the Animations should be Displayed. </remarks>

<returns> The Animations Rigurator of the Attached Projectile's PAM File. </returns> */

std::string AttachedPAMAnimRigClass;

/** <summary> Gets or Sets a Value which Contains Info about the Offset of an Attached Projectile PAM File. </summary>
<remarks>The PopCap Animation Module (PAM) File Refers to the File which Stores the Instructions of how the Animations should be Displayed. </remarks>

<returns> The Offset of the Attached Projectile's PAM File. </returns> */

SexyVector2 *AttachedPAMOffset;

/** <summary> Gets or Sets a Value which Contains Info about the Effects Offset of an Attached Projectile PAM File. </summary>
<remarks>The PopCap Animation Module (PAM) File Refers to the File which Stores the Instructions of how the Animations should be Displayed. </remarks>

<returns> The Effects Offset of the Attached Projectile's PAM File. </returns> */

SexyVector2 *AttachedPAMEffectOffset;

/** <summary> Gets or Sets a Value which Contains Info about the Attached PAM File Animation to Play of a Projectile. </summary>
<remarks>The PopCap Animation Module (PAM) File Refers to the File which Stores the Instructions of how the Animations should be Displayed. </remarks>

<returns> The Attached PAM File Animation to Play of the Projectile. </returns> */

std::vector<std::string> AttachedPAMAnimationToPlay;

/** <summary> Gets or Sets a Value which Contains Info about the Render Image of a Projectile. </summary>
<returns> The Render Image of the Projectile. </returns> */

std::string RenderImage;

/** <summary> Gets or Sets a Value which Contains Info about the Shadow Image of a Projectile. </summary>
<returns> The Shadow Image of the Projectile. </returns> */

std::string ShadowImage;

/** <summary> Gets or Sets a Value which Contains Info about the Spawn PAM File of a Projectile. </summary>
<remarks>The PopCap Animation Module (PAM) File Refers to the File which Stores the Instructions of how the Animations should be Displayed. </remarks>

<returns> The Spawn PAM File of the Projectile. </returns> */

std::string SpawnPAM;

/** <summary> Gets or Sets a Value which Contains Info about the Spawn PAM File Animation to Play of a Projectile. </summary>
<remarks>The PopCap Animation Module (PAM) File Refers to the File which Stores the Instructions of how the Animations should be Displayed. </remarks>

<returns> The Spawn PAM File Animation to Play of the Projectile. </returns> */

std::vector<std::string> SpawnPAMAnimationToPlay;

/** <summary> Gets or Sets a Value which Contains Info about the Offset of a Spawn Projectile PAM File. </summary>
<remarks>The PopCap Animation Module (PAM) File Refers to the File which Stores the Instructions of how the Animations should be Displayed. </remarks>

<returns> The Offset of the Spawn Projectile's PAM File. </returns> */

std::vector<ValueRange*> SpawnPAMOffset;

/** <summary> Gets or Sets a Value which Contains Info about the Render Color of a Projectile. </summary>
<returns> The Render Color of the Projectile. </returns> */

Color *RenderColor;

/** <summary> Gets or Sets a Value which Contains Info about the Floating Rectangle where a Projectile Collides. </summary>
<returns> The Floating Rectangle where the Projectile Collides. </returns> */

FRect *CollisionRect;

/** <summary> Gets or Sets a Value which Contains Info about the Impact Sound Event of a Projectile. </summary>
<returns> The Impact Sound Event of a Projectile. </returns> */

std::string ImpactSoundEvent;

/** <summary> Gets or Sets a Value which Contains Info about the Impact Sound Throttle Timer of a Projectile. </summary>
<returns> The Impact Sound Throttle Timer of the Projectile. </returns> */

std::optional<float> ImpactSoundThrottleTimer;

/** <summary> Gets or Sets a Value which Contains Info about the Impact PAM File of a Projectile. </summary>
<remarks>The PopCap Animation Module (PAM) File Refers to the File which Stores the Instructions of how the Animations should be Displayed. </remarks>

<returns> The Impact PAM File of the Projectile. </returns> */

std::string ImpactPAM;

/** <summary> Gets or Sets a Value which Contains Info about the Impact PAM File Animation to Play of a Projectile. </summary>
<remarks>The PopCap Animation Module (PAM) File Refers to the File which Stores the Instructions of how the Animations should be Displayed. </remarks>

<returns> The Impact PAM File Animation to Play of the Projectile. </returns> */

std::vector<std::string> ImpactPAMAnimationToPlay;

/** <summary> Gets or Sets a Value which Contains Info about the Impact Offset of a Projectile. </summary>
<returns> The Impact Offset of the Projectile. </returns> */

std::vector<ValueRange*> ImpactOffset;

/** <summary> Gets or Sets a Value which Contains Info about the Impact Display Condition of a Projectile. </summary>
<returns> A Boolean that Determines if the Impact will be Displayed at Zombie feet or not. </returns> */

std::optional<bool> ImpactShowsAtZombieFeet;

/** <summary> Gets or Sets a Value which Contains Info about the Conditions a Projectile applies to Zombies. </summary>
<returns> The Conditions that the Projectile applies to Zombies. </returns> */

std::vector<ZombieConditionEntry*> Conditions;

/// <summary> Initializes a new Instance of the ProjectilePropertySheet Class. </summary>

ProjectilePropertySheet();

/// <summary> Releases all the Resources Consumed by the ProjectilePropertySheet Instance. </summary>

virtual ~ProjectilePropertySheet()
{
delete OverrideStunCondition;
delete InitialHeight;

delete InitialRotation;
delete InitialAngularVelocity;

delete InitialScale;
delete AttachedPAMOffset;

delete AttachedPAMEffectOffset;
delete RenderColor;

delete CollisionRect;
}

};

}