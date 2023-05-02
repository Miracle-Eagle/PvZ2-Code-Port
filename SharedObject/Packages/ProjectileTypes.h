#pragma once

#include <string>
#include <vector>

using namespace Global::Definitions;
using namespace Global::Values;
using namespace SharedObject::Properties::Projectile;

namespace SharedObject::Packages
{
/// <summary> A Class used for Retrieving Info about all the Types found in the Projectile Namespace. </summary>

class ProjectileTypes
{
/** <summary> Gets or Sets a Value which Contains Info about the Projectile Template. </summary>
<returns> The Projectile Template Info. </returns> */

public:
static ProjectilePropertySheetTemplate *ProjectileTemplate;

/** <summary> Gets or Sets a Value which Contains Info about the Pea Projectile. </summary>
<returns> The Pea Projectile Info. </returns> */

static ProjectilePropertySheet *PeaDefault;

/** <summary> Gets or Sets a Value which Contains Info about the Giant Pea Projectile. </summary>
<returns> The Giant Pea Projectile Info. </returns> */

static ProjectilePropertySheet *GiantPeaDefault;

/** <summary> Gets or Sets a Value which Contains Info about the Kernel Projectile. </summary>
<returns> The Kernel Projectile Info. </returns> */

static ProjectilePropertySheet *KernelDefault;

/** <summary> Gets or Sets a Value which Contains Info about the Butter Projectile. </summary>
<returns> The Butter Projectile Info. </returns> */

static ProjectilePropertySheet *ButterDefault;

/** <summary> Gets or Sets a Value which Contains Info about the SnowPea Projectile. </summary>
<returns> The SnowPea Projectile Info. </returns> */

static SnowPeaProjectileProps *SnowPeaProjectile;

/** <summary> Gets or Sets a Value which Contains Info about the SnowPea Freezing Projectile. </summary>
<returns> The SnowPea Freezing Projectile Info. </returns> */

static SnowPeaFreezingProjectileProps *SnowPeaFreezingProjectile;

/// <summary> Initializes a new Instance of the ProjectileTypes Class </summary>

ProjectileTypes();

};

}
