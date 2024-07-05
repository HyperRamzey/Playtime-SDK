#include "..\FUObjectArray.hpp"
#include "ARTrackedImage.hpp"
#include "ARTrackedQRCode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARTrackedQRCode::get_QRCode() {
    return (void*)((uintptr_t)this + 0x108);
}
int32_t& _Script_AugmentedReality::ARTrackedQRCode::get_Version() {
    return *(int32_t*)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARTrackedQRCode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARTrackedQRCode");
    return result;
}
