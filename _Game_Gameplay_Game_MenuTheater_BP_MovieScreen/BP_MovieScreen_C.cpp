#include "..\FUObjectArray.hpp"
#include "BP_MovieScreen_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_MediaAssets\MediaSoundComponent.hpp"
_Script_MediaAssets::MediaSoundComponent*& _Game_Gameplay_Game_MenuTheater_BP_MovieScreen::BP_MovieScreen_C::get_MediaSound() {
    return *(_Script_MediaAssets::MediaSoundComponent**)((uintptr_t)this + 0x230);
}
_Script_CoreUObject::Class* _Game_Gameplay_Game_MenuTheater_BP_MovieScreen::BP_MovieScreen_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Game/MenuTheater/BP_MovieScreen.BP_MovieScreen_C");
    return result;
}
