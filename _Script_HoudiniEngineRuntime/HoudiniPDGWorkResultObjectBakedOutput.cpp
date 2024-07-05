#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniPDGWorkResultObjectBakedOutput.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniPDGWorkResultObjectBakedOutput::get_BakedOutputs() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniPDGWorkResultObjectBakedOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniPDGWorkResultObjectBakedOutput");
    return result;
}
