#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraShakeBase.hpp"
#include "TestCameraShake.hpp"
_Script_CoreUObject::Class* _Script_GameplayCameras::TestCameraShake::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayCameras.TestCameraShake");
    return result;
}
