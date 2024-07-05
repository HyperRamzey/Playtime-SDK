#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraShakePattern.hpp"
#include "SimpleCameraShakePattern.hpp"
float& _Script_GameplayCameras::SimpleCameraShakePattern::get_Duration() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_GameplayCameras::SimpleCameraShakePattern::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_GameplayCameras::SimpleCameraShakePattern::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_GameplayCameras::SimpleCameraShakePattern::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayCameras.SimpleCameraShakePattern");
    return result;
}
