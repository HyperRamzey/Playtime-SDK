#include "..\FUObjectArray.hpp"
#include "ARTypesDummyClass.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_AugmentedReality::ARTypesDummyClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARTypesDummyClass");
    return result;
}
