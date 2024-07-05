#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniBrushInfo.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniBrushInfo::get_CachedBrushType() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_HoudiniEngineRuntime::HoudiniBrushInfo::get_BrushActor() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_HoudiniEngineRuntime::HoudiniBrushInfo::get_CachedTransform() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_HoudiniEngineRuntime::HoudiniBrushInfo::get_CachedOrigin() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_HoudiniEngineRuntime::HoudiniBrushInfo::get_CachedExtent() {
    return (void*)((uintptr_t)this + 0x4c);
}
void* _Script_HoudiniEngineRuntime::HoudiniBrushInfo::get_CachedSurfaceHash() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniBrushInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniBrushInfo");
    return result;
}
