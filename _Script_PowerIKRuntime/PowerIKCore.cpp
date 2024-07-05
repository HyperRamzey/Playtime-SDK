#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PowerIKCore.hpp"
_Script_CoreUObject::Class* _Script_PowerIKRuntime::PowerIKCore::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.PowerIKCore");
    return result;
}
