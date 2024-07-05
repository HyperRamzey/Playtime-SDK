#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "HuggyMovementComponent.hpp"
#include "Monster.hpp"
#include "NetworkHuggy.hpp"
int32_t& _Script_Playtime_Multiplayer::NetworkHuggy::get_NumBabyHuggies() {
    return *(int32_t*)((uintptr_t)this + 0x5e0);
}
void _Script_Playtime_Multiplayer::NetworkHuggy::IncrementHuggyStat(float Amount, void* Stat) {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::NetworkHuggy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.NetworkHuggy");
    return result;
}
void _Script_Playtime_Multiplayer::NetworkHuggy::AddBabyHuggy(_Script_Engine::Actor* BabyHuggy) {
    return;
}
_Script_Playtime_Multiplayer::HuggyMovementComponent* _Script_Playtime_Multiplayer::NetworkHuggy::GetHuggyMovementComponent() {
    return;
}
