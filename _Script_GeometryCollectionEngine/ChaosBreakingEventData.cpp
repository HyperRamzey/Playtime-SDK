#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ChaosBreakingEventData.hpp"
void* _Script_GeometryCollectionEngine::ChaosBreakingEventData::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::ChaosBreakingEventData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCollectionEngine.ChaosBreakingEventData");
    return result;
}
void* _Script_GeometryCollectionEngine::ChaosBreakingEventData::get_Velocity() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_GeometryCollectionEngine::ChaosBreakingEventData::get_Mass() {
    return *(float*)((uintptr_t)this + 0x18);
}
