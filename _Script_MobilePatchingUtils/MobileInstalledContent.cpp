#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MobileInstalledContent.hpp"
_Script_CoreUObject::Class* _Script_MobilePatchingUtils::MobileInstalledContent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MobilePatchingUtils.MobileInstalledContent");
    return result;
}
bool _Script_MobilePatchingUtils::MobileInstalledContent::Mount(int32_t PakOrder, void* MountPoint) {
    return;
}
float _Script_MobilePatchingUtils::MobileInstalledContent::GetInstalledContentSize() {
    return;
}
float _Script_MobilePatchingUtils::MobileInstalledContent::GetDiskFreeSpace() {
    return;
}
