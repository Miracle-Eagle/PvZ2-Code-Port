namespace Global::Types
{
/// <summary> Determines if a List should be Included or Excluded from a Class. </summary>

enum class ListRestrictionType
{
/// All the Elements from the List will be Included in the Class.
includelist,

/// Any of the Elements of the List will be Excluded from the Class.
excludelist
};

}