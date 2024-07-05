#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraShakePattern.hpp"
#include "MatineeCameraShakePattern.hpp"
_Script_CoreUObject::Class* _Script_GameplayCameras::MatineeCameraShakePattern::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayCameras.MatineeCameraShakePattern");
    return result;
}
