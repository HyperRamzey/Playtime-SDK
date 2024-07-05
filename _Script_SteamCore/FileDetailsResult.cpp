#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FileDetailsResult.hpp"
void* _Script_SteamCore::FileDetailsResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::FileDetailsResult::get_Flags() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_SteamCore::FileDetailsResult::get_FileSize() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Script_SteamCore::FileDetailsResult::get_SHA() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::FileDetailsResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.FileDetailsResult");
    return result;
}
