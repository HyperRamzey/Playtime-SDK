#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HoudiniLandscapePtr.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniLandscapePtr::get_EditLayerName() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_HoudiniEngineRuntime::HoudiniLandscapePtr::get_LandscapeSoftPtr() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_HoudiniEngineRuntime::HoudiniLandscapePtr::get_BakeType() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniLandscapePtr::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniLandscapePtr");
    return result;
}
