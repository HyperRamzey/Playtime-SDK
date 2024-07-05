#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LiveLinkComponentSettings.hpp"
void* _Script_LiveLinkComponents::LiveLinkComponentSettings::get_DefaultControllerForRole() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_LiveLinkComponents::LiveLinkComponentSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkComponents.LiveLinkComponentSettings");
    return result;
}
