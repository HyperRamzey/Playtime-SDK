#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniInputActor.hpp"
#include "HoudiniInputLandscape.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniInputLandscape::get_CachedInputLandscapeTraqnsform() {
    return (void*)((uintptr_t)this + 0x110);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniInputLandscape::get_CachedNumLandscapeComponents() {
    return *(int32_t*)((uintptr_t)this + 0x140);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInputLandscape::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInputLandscape");
    return result;
}
