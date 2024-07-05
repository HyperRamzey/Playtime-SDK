#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "MazeMeshes.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MazeMeshes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.MazeMeshes");
    return result;
}
void* _Script_Playtime_Multiplayer::MazeMeshes::get_FromUps() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_Engine::StaticMesh*& _Script_Playtime_Multiplayer::MazeMeshes::get_Center() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x30);
}
void* _Script_Playtime_Multiplayer::MazeMeshes::get_Horizontals() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Playtime_Multiplayer::MazeMeshes::get_ToDowns() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Playtime_Multiplayer::MazeMeshes::get_Turns() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Playtime_Multiplayer::MazeMeshes::get_Verticals() {
    return (void*)((uintptr_t)this + 0x68);
}
