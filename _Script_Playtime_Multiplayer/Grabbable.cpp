#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "ANetworkHand.hpp"
#include "Grabbable.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::Grabbable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.Grabbable");
    return result;
}
void _Script_Playtime_Multiplayer::Grabbable::Attach(_Script_Playtime_Multiplayer::ANetworkHand* Hand) {
    return;
}
bool _Script_Playtime_Multiplayer::Grabbable::QueryParameter(void* Param) {
    return;
}
void _Script_Playtime_Multiplayer::Grabbable::AdjustAttachPoint(_Script_CoreUObject::Transform& Point) {
    return;
}
void _Script_Playtime_Multiplayer::Grabbable::Pull(_Script_Playtime_Multiplayer::ANetworkHand* Hand) {
    return;
}
void _Script_Playtime_Multiplayer::Grabbable::Detach(_Script_Playtime_Multiplayer::ANetworkHand* Hand) {
    return;
}
_Script_Engine::AnimSequence* _Script_Playtime_Multiplayer::Grabbable::GetHandPose() {
    return;
}
bool _Script_Playtime_Multiplayer::Grabbable::CanAcceptHand(_Script_Playtime_Multiplayer::ANetworkHand* Hand) {
    return;
}
