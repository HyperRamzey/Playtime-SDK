#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "MagicLeapRaycastFunctionLibrary.hpp"
#include "MagicLeapRaycastQueryParams.hpp"
_Script_CoreUObject::Class* _Script_MagicLeap::MagicLeapRaycastFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeap.MagicLeapRaycastFunctionLibrary");
    return result;
}
_Script_MagicLeap::MagicLeapRaycastQueryParams _Script_MagicLeap::MagicLeapRaycastFunctionLibrary::MakeRaycastQueryParams(_Script_CoreUObject::Vector Position, _Script_CoreUObject::Vector Direction, _Script_CoreUObject::Vector UpVector, int32_t Width, int32_t Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32_t UserData) {
    return;
}
