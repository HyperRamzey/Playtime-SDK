#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LiveLinkSourceSettings.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkSourceSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkInterface.LiveLinkSourceSettings");
    return result;
}
void* _Script_LiveLinkInterface::LiveLinkSourceSettings::get_Mode() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_LiveLinkInterface::LiveLinkSourceSettings::get_BufferSettings() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_LiveLinkInterface::LiveLinkSourceSettings::get_ConnectionString() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_LiveLinkInterface::LiveLinkSourceSettings::get_Factory() {
    return (void*)((uintptr_t)this + 0x98);
}
