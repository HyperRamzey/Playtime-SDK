#include "..\FUObjectArray.hpp"
#include "AdditiveControlRig.hpp"
#include "ControlRig.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::AdditiveControlRig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.AdditiveControlRig");
    return result;
}
