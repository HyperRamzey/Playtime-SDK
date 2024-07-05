#include "..\FUObjectArray.hpp"
#include "BP_SaveTutorial_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
void _Game_Base_SaveGames_BP_SaveTutorial::BP_SaveTutorial_C::set_CompletedTutorial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Base_SaveGames_BP_SaveTutorial::BP_SaveTutorial_C::get_CompletedTutorial() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Base_SaveGames_BP_SaveTutorial::BP_SaveTutorial_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Base/SaveGames/BP_SaveTutorial.BP_SaveTutorial_C");
    return result;
}
