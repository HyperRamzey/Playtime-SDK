#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniBakedOutput.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniBakedOutput::get_BakedOutputObjects() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniBakedOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniBakedOutput");
    return result;
}
