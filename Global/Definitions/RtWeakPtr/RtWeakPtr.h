#include <any>
#include <string>
#include <typeinfo>
#include <type_traits>
#include <vector>

namespace Global::Definitions
{
template<typename T>

/// <summary> Creates a Weak Pointer that Serves as a Reference to an Object. </summary>

class RtWeakPtr
{
static_assert(std::is_class<T>::value, L"T must be a Class");

private:

/** <summary> Sets a Value which Contains Info about the Number of Digits an UID must Have. </summary>
<returns> The Number of Digits an UID must Have. </returns> */

static const int digitsCount = 3;

/** <summary> Sets a Value which Contains Info about the Format of an UID Digit. </summary>
<returns> The Format of an UID Digit. </returns> */

static const std::string digitsFormat = "{0:x}";

/** <summary> Sets a Value which Contains Info about the Format of an UID Byte. </summary>
<returns> The Format of an UID Byte. </returns> */

static const std::string bytesFormat = "{0:x8}";

/** <summary> Sets a Value which Contains Info about the Hexadecimal Base of a Number. </summary>
<returns> The Hexadecimal Base of a Number. </returns> */

static const int hexBase = 16;

/** <summary> Sets a Value which Contains Info about the Default Value of an UID. </summary>
<returns> The Default UID Value. </returns> */

static const std::vector<unsigned int> Default_UID = std::vector<unsigned int>(digitsCount);

protected:

/** <summary> Sets a Value which Contains Info about the Expected Beginning of a RTID (also known as RTON ID). </summary>
<returns> The Expected RTID Beginning. </returns> */

static std::string RTID_Beginning = "RTID(";

/** <summary> Sets a Value which Contains Info about the Pointer of a RTID (also known as a RTON ID). </summary>
<returns> The RTID Pointer Obtained. </returns> */

static char RTID_Pointer = '*';

/** <summary> Sets a Value which Contains Info about the Separator of a RTID (also known as a RTON ID). </summary>
<returns> The RTID Separator Obtained. </returns> */

static char RTID_Separator = '.';

/** <summary> Sets a Value which Contains Info about the Referencer of a RTID (also known as a RTON ID). </summary>
<returns> The RTID Referencer Obtained. </returns> */

static char RTID_Referencer = '@';

/** <summary> Sets a Value which Contains Info about the Expected Ending of a RTID (also known as RTON ID). </summary>
<returns> The Expected RTID Ending. </returns> */

static char RTID_Ending = ')';

public:

/** <summary> Gets or Sets a Value which Contains Info about the Reference String of a RtWeakPtr. </summary>
<returns> The Reference String Obtained. </returns> */

std::string RefStr;

/// <summary> Initializes a new Instance of the RtWeakPtr. </summary>

RtWeakPtr()
{
this->RefStr = RTID_Beginning + StringHelper::toString(RTID_Ending);
}

/** <summary> Initializes a new Instance of the RtWeakPtr by Referencing an Object. </summary>
<param name = "srcObject" > The Object which is the Source of the Specified Object. </param>

<param name = "tgtObject" > The Object to be Referenced. </param> */

RtWeakPtr(T srcObject, std::any tgtObject)
{
RtObject *Null_Reference = nullptr;
std::type_info srcObject_Type;

std::string srcObject_Flags;
std::type_info tgtObject_Type;

std::string tgtObject_Flags;

if (srcObject == Null_Reference && obj::type() == typeid(RtObject) && std::any_cast<RtObject>(obj) == Null_Reference)
{
srcObject_Flags = "NullRef";
tgtObject_Flags = "EmptyObj";
}

else if (srcObject == Null_Reference)
{
srcObject_Flags = StringHelper::toString(RTID_Pointer);
tgtObject_Type = tgtObject.type();

tgtObject_Flags = tgtObject_Type.name();
}

else if (obj::type() == typeid(RtObject) && std::any_cast<RtObject>(obj) == Null_Reference)
{
srcObject_Type = srcObject.GetType();
srcObject_Flags = srcObject_Type.name();

tgtObject_Flags = StringHelper::toString(RTID_Pointer);
}

else
{
srcObject_Type = srcObject.GetType();
srcObject_Flags = srcObject_Type.name();

tgtObject_Type = tgtObject.type();
tgtObject_Flags = tgtObject_Type.name();
}

this->RefStr = RTID_Beginning + srcObject_Flags + StringHelper::toString(RTID_Referencer) + tgtObject_Flags + StringHelper::toString(RTID_Ending);
}

/** <summary> Initializes a new Instance of the RtWeakPtr by Referencing an UID. </summary>
<param name = "srcObject" > The Object which is the Source of the Specified UID. </param>

<param name = "Target_UID" > The UID to be Referenced. </param> */

RtWeakPtr(T srcObject, std::vector<unsigned int> &Target_UID)
{
std::any Null_Reference;
std::type_info srcObject_Type;

std::string srcObject_Flags;

if (srcObject == Null_Reference && Target_UID == Null_Reference)
{
srcObject_Flags = "NullRef";
Target_UID = Default_UID;
}

else if (srcObject == Null_Reference)
{
srcObject_Flags = StringHelper::toString(RTID_Pointer);
}

else if (Target_UID == Null_Reference)
{
srcObject_Type = srcObject.GetType();
srcObject_Flags = srcObject_Type.name();

Target_UID = Default_UID;
}

else
{
srcObject_Type = srcObject.GetType();
srcObject_Flags = srcObject_Type.name();
}

std::string UID_Numbers = Get_UID_Numbers(Target_UID);
this->RefStr = RTID_Beginning + UID_Numbers + StringHelper::toString(RTID_Referencer) + srcObject_Flags + StringHelper::toString(RTID_Ending);
}

protected:

/** <summary> Gets the UID Numbers from an UInt Array. </summary>
<param name = "Target_UID" > The Array which Contains the UID Digits. </param>

<returns> The UID Numbers obtained from the Array. </returns> */

std::string Get_UID_Numbers(std::vector<unsigned int> &Target_UID)
{
int Target_UID_Length = Target_UID.size();

if (Target_UID_Length < digitsCount)
{
int LengthDif = digitsCount - Target_UID_Length;

for (int Index = 0; Index < LengthDif; Index++)
{
unsigned int PadValue = 0;
Target_UID.Append(PadValue);
}

}

else if (Target_UID_Length > digitsCount)
{
Array::Resize(Target_UID, digitsCount);
}

int FirstDigits_Index = 0;
unsigned int First_UID_Digits = Target_UID[FirstDigits_Index];

std::string FirstDigits_String = std::string::Format(digitsFormat, First_UID_Digits, hexBase);
int SecondDigits_Index = 1;

unsigned int Second_UID_Digits = Target_UID[SecondDigits_Index];
std::string SecondDigits_String = std::string::Format(digitsFormat, Second_UID_Digits, hexBase);

int ThirdDigits_Index = 2;
unsigned int Third_UID_Digits = Target_UID[ThirdDigits_Index];

std::string ThirdDigits_String = std::string::Format(bytesFormat, Third_UID_Digits, hexBase);
std::string UID_Numbers = SecondDigits_String + StringHelper::toString(RTID_Separator) + FirstDigits_String + StringHelper::toString(RTID_Separator) + ThirdDigits_String;

return UID_Numbers;
}

public:

/** <summary> Converts a RtWeakPtr to its String Representation. </summary>
<returns> The String Representation of the RtWeakPtr. </returns> */

std::string ToString()
{
return RefStr;
}

private:

/// <summary> Releases the Resources Consumed by a RtWeakPtr. </summary>

void Finalize()
{
}

};

}