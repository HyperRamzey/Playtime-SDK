#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponentInstanceData.hpp"
#include "HoudiniSplineComponentInstanceData.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniSplineComponentInstanceData::get_CurvePoints() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_HoudiniEngineRuntime::HoudiniSplineComponentInstanceData::get_DisplayPoints() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_HoudiniEngineRuntime::HoudiniSplineComponentInstanceData::get_DisplayPointIndexDivider() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniSplineComponentInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniSplineComponentInstanceData");
    return result;
}
