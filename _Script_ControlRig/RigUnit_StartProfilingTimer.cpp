#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBaseMutable.hpp"
#include "RigUnit_StartProfilingTimer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_StartProfilingTimer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_StartProfilingTimer");
    return result;
}
