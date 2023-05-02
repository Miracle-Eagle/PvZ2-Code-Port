namespace Global::Definitions
{
/// <summary> Stores four Floating Values which Represent the Size and Offset of a Rectangle. </summary>

class FRect
{

public:

/** <summary> Gets or Sets a Value for X. </summary>
<returns> The Value of X. </returns> */

float mX;

/** <summary> Gets or Sets a Value for Y. </summary>
<returns> The Value of Y. </returns> */

float mY;

/** <summary> Gets or Sets a Value which Contains Info about the Width of a Rectangle. </summary>
<returns> The Width of the Rectangle. </returns> */

float mWidth;

/** <summary> Gets or Sets a Value which Contains Info about the Height of a Rectangle. </summary>
<returns> The Height of the Rectangle. </returns> */

float mHeight;

/// <summary> Creates a new Representation of the FRect Class. </summary>

FRect();
};

}