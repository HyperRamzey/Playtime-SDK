#include "..\FUObjectArray.hpp"
#include "AppleImageUtilsImageConversionResult.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AppleImageUtils::AppleImageUtilsImageConversionResult::get_Error() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AppleImageUtils::AppleImageUtilsImageConversionResult::get_ImageData() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_AppleImageUtils::AppleImageUtilsImageConversionResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AppleImageUtils.AppleImageUtilsImageConversionResult");
    return result;
}
