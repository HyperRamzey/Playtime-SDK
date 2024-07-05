#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PlaneConstraint.hpp"
_Script_CoreUObject::Class* _Script_PowerIKRuntime::PlaneConstraint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.PlaneConstraint");
    return result;
}
