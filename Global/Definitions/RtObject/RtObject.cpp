#include "RtObject.h"

namespace Global::Definitions
{
/// <summary> Setups all the Fields from the RtObject Instance. </summary>

RtObject::RtObject()
{
}

/** <summary> Compares the Content of two Objects. </summary>
<param name = "objX" > The First Object to be Compared. </param>

<param name = "objY" > The Second Object to be Compared. </param>
<returns> The Difference Obtained from the two Objects. </returns> */

inline bool RtObject::Equals(std::any objX, std::any objY)
{
return std::any::Equals(objX, objY);
}

/** <summary> Compares the Instance of two Objects. </summary>
<param name = "objX" > The First Object to be Compared. </param>

<param name = "objY" > The Second Object to be Compared. </param>
<returns> The Difference Obtained from the two Objects. </returns> */

inline bool RtObject::ReferenceEquals(std::any objX, std::any objY)
{
return std::any::ReferenceEquals(objX, objY);
}

/** <summary> Compares the Current Object with a Specified Object. </summary>
<param name = "srcObject" > The Object to be Compared. </param>

<returns> The Difference Obtained from the Current Object. </returns> */

inline bool RtObject::Equals(std::any srcObject)
{
return std::any::Equals(srcObject);
}

/** <summary> Gets a Hash Code of the Current Object. </summary>
<returns> The Hash Code Obtained from the Current Object. </returns> */

inline int RtObject::GetHashCode()
{
return std::any::GetHashCode();
}

/** <summary> Gets the Type of the Current Object. </summary>
<returns> The Type of the Current Object. </returns> */

std::type_info RtObject::GetType()
{
return std::any::type();
}

/** <summary> Converts the Current Object to its String Representation. </summary>
<returns> The String Representation of the Current Object. </returns> */

std::string RtObject::ToString()
{
std::ostringstream strConverter;
std::any tgtValue = this;

strConverter << tgtValue;
return strConverter.str();
}

/** <summary> Gets a Copy of the Current Object. </summary>
<returns> The Copy Obtained from the Current Object. </returns> */

std::any RtObject::MemberwiseClone()
{
return std::any::MemberwiseClone();
}

/// <summary> Releases all the Resources Consumed by a RtObject. </summary>

void RtObject::Finalize()
{
}

}