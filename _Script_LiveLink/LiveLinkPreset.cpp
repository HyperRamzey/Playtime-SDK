#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LiveLinkPreset.hpp"
void* _Script_LiveLink::LiveLinkPreset::get_Sources() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_LiveLink::LiveLinkPreset::get_Subjects() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkPreset");
    return result;
}
void _Script_LiveLink::LiveLinkPreset::BuildFromClient() {
    return;
}
bool _Script_LiveLink::LiveLinkPreset::AddToClient(bool bRecreatePresets) {
    return;
}
bool _Script_LiveLink::LiveLinkPreset::ApplyToClient() {
    return;
}
