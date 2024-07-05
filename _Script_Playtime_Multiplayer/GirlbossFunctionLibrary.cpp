#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "GirlbossFunctionLibrary.hpp"
void* _Script_Playtime_Multiplayer::GirlbossFunctionLibrary::LoadAssetsByClassFromPath(void* Class, void* Path) {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::GirlbossFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.GirlbossFunctionLibrary");
    return result;
}
bool _Script_Playtime_Multiplayer::GirlbossFunctionLibrary::InEditor() {
    return;
}
void _Script_Playtime_Multiplayer::GirlbossFunctionLibrary::ForceResetBoundInputsOnActor(_Script_Engine::Actor* Actor) {
    return;
}
