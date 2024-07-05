#include "..\FUObjectArray.hpp"
#include "ControlRigSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.ControlRigSettings");
    return result;
}
