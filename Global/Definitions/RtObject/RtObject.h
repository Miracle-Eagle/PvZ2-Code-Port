#include <any>
#include <sstream>
#include <string>
#include <typeinfo>

namespace Global::Definitions
{
/** <summary> Creates an Object that can be Used for Storing any Type of Values. </summary>
<remarks> This Class is Inherited from the Standard Object Class. </remarks> */

class RtObject : public std::any
{

public:

/// <summary> Initializes a new Instance of the RtObject. </summary>

RtObject();

/** <summary> Declares the "Equals" Method of this Class. </summary>
<param name = "objX" > The First Parameter of this Method. </param>

<param name = "objY" > The Second Parameter of this Method. </param>
<returns> The Value Obtained from this Method. </returns> */

bool Equals(std::any objX, std::any objY);

/** <summary> Declares the "ReferenceEquals" Method of this Class. </summary>
<param name = "objX" > The First Parameter of this Method. </param>

<param name = "objY" > The Second Parameter of this Method. </param>
<returns> The Value Obtained from this Method. </returns> */

bool ReferenceEquals(std::any objX, std::any objY);

/** <summary> Declares the "Equals" Property of this Class. </summary>
<param name = "srcObject" > The Parameter of this Property. </param>

<returns> The Value Obtained from this Property. </returns> */

bool Equals(std::any srcObject);

/** <summary> Declares the "GetHashCode" Property of this Class. </summary>
<returns> The Value Obtained from this Property. </returns> */

int GetHashCode();

/** <summary> Declares the "GetType" Property of this Class. </summary>
<returns> The Value Obtained from this Property. </returns> */

std::type_info GetType();

/** <summary> Declares the "ToString" Property of this Class. </summary>
<returns> The Value Obtained from this Property. </returns> */

std::string ToString();

/** <summary> Declares the "MemberwiseClone" Property of this Class. </summary>
<returns> The Value Obtained from this Property. </returns> */

std::any MemberwiseClone();

private:

/// <summary> Declares the "Finalize" Method of this Class. </summary>

void Finalize();
};

}