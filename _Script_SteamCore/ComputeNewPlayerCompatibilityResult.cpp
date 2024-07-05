#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ComputeNewPlayerCompatibilityResult.hpp"
void* _Script_SteamCore::ComputeNewPlayerCompatibilityResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SteamCore::ComputeNewPlayerCompatibilityResult::get_PlayersThatDontLikeCandidate() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_SteamCore::ComputeNewPlayerCompatibilityResult::get_PlayersThatCandidateDoesntLike() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_SteamCore::ComputeNewPlayerCompatibilityResult::get_ClanPlayersThatDontLikeCandidate() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
void* _Script_SteamCore::ComputeNewPlayerCompatibilityResult::get_SteamIDCandidate() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SteamCore::ComputeNewPlayerCompatibilityResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.ComputeNewPlayerCompatibilityResult");
    return result;
}
