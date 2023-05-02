namespace Global::Definitions
{
/// <summary> Stores four Integer Values which Represent the Size and Offset of a Rectangle. </summary>

class Rect
{

public:

/** <summary> Gets or Sets a Value for X. </summary>
<returns> The Value of X. </returns> */

int mX;

/** <summary> Gets or Sets a Value for Y. </summary>
<returns> The Value of Y. </returns> */

int mY;

/** <summary> Gets or Sets a Value which Contains Info about the Width of a Rectangle. </summary>
<returns> The Width of the Rectangle. </returns> */

int mWidth;

/** <summary> Gets or Sets a Value which Contains Info about the Height of a Rectangle. </summary>
<returns> The Height of the Rectangle. </returns> */

int mHeight;

/// <summary> Creates a new Representation of the Rectangle Class. </summary>

Rect();
};

}