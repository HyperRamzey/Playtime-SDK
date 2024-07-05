#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraShakePattern.hpp"
#include "CompositeCameraShakePattern.hpp"
void* _Script_GameplayCameras::CompositeCameraShakePattern::get_ChildPatterns() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_GameplayCameras::CompositeCameraShakePattern::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayCameras.CompositeCameraShakePattern");
    return result;
}
