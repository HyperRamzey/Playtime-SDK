#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintAsyncActionBase.hpp"
#include "SteamCoreAsyncAction.hpp"
void* _Script_SteamCore::SteamCoreAsyncAction::get_m_WorldContextObject() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreAsyncAction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreAsyncAction");
    return result;
}
