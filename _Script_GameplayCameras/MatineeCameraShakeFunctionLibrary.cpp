#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\CameraShakeBase.hpp"
#include "MatineeCameraShake.hpp"
#include "MatineeCameraShakeFunctionLibrary.hpp"
_Script_GameplayCameras::MatineeCameraShake* _Script_GameplayCameras::MatineeCameraShakeFunctionLibrary::Conv_MatineeCameraShake(_Script_Engine::CameraShakeBase* CameraShake) {
    return;
}
_Script_CoreUObject::Class* _Script_GameplayCameras::MatineeCameraShakeFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayCameras.MatineeCameraShakeFunctionLibrary");
    return result;
}
