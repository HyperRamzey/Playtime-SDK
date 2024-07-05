#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GSClientApprove.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::GSClientApprove::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GSClientApprove");
    return result;
}
void* _Script_SteamCore::GSClientApprove::get_SteamID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::GSClientApprove::get_OwnerSteamID() {
    return (void*)((uintptr_t)this + 0x8);
}
