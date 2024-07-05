#include "..\FUObjectArray.hpp"
#include "AppleImageInterface.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Script_AppleImageUtils::AppleImageInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AppleImageUtils.AppleImageInterface");
    return result;
}
