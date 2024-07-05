#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DataDrivenCVarEngineSubsystem.hpp"
#include "EngineSubsystem.hpp"
void* _Script_Engine::DataDrivenCVarEngineSubsystem::get_OnDataDrivenCVarDelegate() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::DataDrivenCVarEngineSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DataDrivenCVarEngineSubsystem");
    return result;
}
