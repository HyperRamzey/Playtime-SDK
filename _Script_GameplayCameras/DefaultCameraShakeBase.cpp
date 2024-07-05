#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraShakeBase.hpp"
#include "DefaultCameraShakeBase.hpp"
_Script_CoreUObject::Class* _Script_GameplayCameras::DefaultCameraShakeBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayCameras.DefaultCameraShakeBase");
    return result;
}
