#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "LevelStruct.hpp"
int32_t& _Script_Playtime_Multiplayer::LevelStruct::get_ID() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_Playtime_Multiplayer::LevelStruct::get_CommonName() {
    return (void*)((uintptr_t)this + 0xc);
}
void _Script_Playtime_Multiplayer::LevelStruct::set_bShowInHostScreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::LevelStruct::get_Filename() {
    return (void*)((uintptr_t)this + 0x18);
}
bool _Script_Playtime_Multiplayer::LevelStruct::get_bShowInHostScreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::LevelStruct::get_Level() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_Engine::Texture2D*& _Script_Playtime_Multiplayer::LevelStruct::get_Thumbnail() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x50);
}
bool _Script_Playtime_Multiplayer::LevelStruct::get_bDevOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::LevelStruct::set_bDevOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::LevelStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.LevelStruct");
    return result;
}
