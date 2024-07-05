#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkSourcePreset.hpp"
#include "LiveLinkSourceSettings.hpp"
void* _Script_LiveLinkInterface::LiveLinkSourcePreset::get_Guid() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkSourcePreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkSourcePreset");
    return result;
}
_Script_LiveLinkInterface::LiveLinkSourceSettings*& _Script_LiveLinkInterface::LiveLinkSourcePreset::get_Settings() {
    return *(_Script_LiveLinkInterface::LiveLinkSourceSettings**)((uintptr_t)this + 0x10);
}
void* _Script_LiveLinkInterface::LiveLinkSourcePreset::get_SourceType() {
    return (void*)((uintptr_t)this + 0x18);
}
