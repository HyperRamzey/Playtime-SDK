#include "..\FUObjectArray.hpp"
#include "BP_PlatformData_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
_Script_CoreUObject::Class* _Game_Base_SaveGames_BP_PlatformData::BP_PlatformData_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Base/SaveGames/BP_PlatformData.BP_PlatformData_C");
    return result;
}
void* _Game_Base_SaveGames_BP_PlatformData::BP_PlatformData_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Game_Base_SaveGames_BP_PlatformData::BP_PlatformData_C::set_bInventory200(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32 + 0);
    *(uint8_t*)((uintptr_t)this + 0x32 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Base_SaveGames_BP_PlatformData::BP_PlatformData_C::get_bCollection200() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
bool _Game_Base_SaveGames_BP_PlatformData::BP_PlatformData_C::get_bUsers200() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Game_Base_SaveGames_BP_PlatformData::BP_PlatformData_C::set_bUsers200(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Base_SaveGames_BP_PlatformData::BP_PlatformData_C::set_bCollection200(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Base_SaveGames_BP_PlatformData::BP_PlatformData_C::get_bInventory200() {
    return (*(uint8_t*)((uintptr_t)this + 0x32 + 0)) & 1 != 0;
}
void _Game_Base_SaveGames_BP_PlatformData::BP_PlatformData_C::ExecuteUbergraph_BP_PlatformData(int32_t EntryPoint) {
    return;
}
