namespace Global::Definitions
{
/// <summary> Stores four Values which Represent a Color in the RGBA Palette. </summary>

class Color
{

public:

/** <summary> Gets or Sets a Value for the Red Tonality. </summary>
<returns> The Value of the Red Tonality. </returns> */

unsigned char mRed;

/** <summary> Gets or Sets a Value for the Green Tonality. </summary>
<returns> The Value of the Green Tonality. </returns> */

unsigned char mGreen;

/** <summary> Gets or Sets a Value for the Blue Tonality. </summary>
<returns> The Value of the Blue Tonality. </returns> */

unsigned char mBlue;

/** <summary> Gets or Sets a Value for the Alpha Channel. </summary>
<returns> The Value of the Alpha Channel. </returns> */

unsigned char mAlpha;

/// <summary> Creates a new Representation of the Color Class. </summary>

Color();
};

}