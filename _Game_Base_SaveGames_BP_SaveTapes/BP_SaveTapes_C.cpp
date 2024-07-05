#include "..\FUObjectArray.hpp"
#include "BP_SaveTapes_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
_Script_CoreUObject::Class* _Game_Base_SaveGames_BP_SaveTapes::BP_SaveTapes_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Base/SaveGames/BP_SaveTapes.BP_SaveTapes_C");
    return result;
}
void* _Game_Base_SaveGames_BP_SaveTapes::BP_SaveTapes_C::get_TapesFound() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Game_Base_SaveGames_BP_SaveTapes::BP_SaveTapes_C::get_FirstTapeDate() {
    return (void*)((uintptr_t)this + 0x38);
}
