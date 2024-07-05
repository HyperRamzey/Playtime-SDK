#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HoudiniLandscapeEditLayer.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniLandscapeEditLayer::get_LandscapeSoftPtr() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniLandscapeEditLayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniLandscapeEditLayer");
    return result;
}
void* _Script_HoudiniEngineRuntime::HoudiniLandscapeEditLayer::get_LayerName() {
    return (void*)((uintptr_t)this + 0x50);
}
