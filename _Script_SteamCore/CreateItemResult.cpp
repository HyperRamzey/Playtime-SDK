#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CreateItemResult.hpp"
void _Script_SteamCore::CreateItemResult::set_bUserNeedsToAcceptWorkshopLegalAgreement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SteamCore::CreateItemResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::CreateItemResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.CreateItemResult");
    return result;
}
void* _Script_SteamCore::CreateItemResult::get_PublishedFileID() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_SteamCore::CreateItemResult::get_bUserNeedsToAcceptWorkshopLegalAgreement() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
