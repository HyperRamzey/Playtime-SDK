#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "HandKeypointConversion.hpp"
_Script_CoreUObject::Class* _Script_HeadMountedDisplay::HandKeypointConversion::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HeadMountedDisplay.HandKeypointConversion");
    return result;
}
int32_t _Script_HeadMountedDisplay::HandKeypointConversion::Conv_HandKeypointToInt32(void* Input) {
    return;
}
