#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\GameState.hpp"
#include "MagicLeapSharedWorldGameState.hpp"
void _Script_MagicLeapSharedWorld::MagicLeapSharedWorldGameState::OnReplicate_AlignmentTransforms() {
    return;
}
void* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldGameState::get_AlignmentTransforms() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldGameState::get_SharedWorldData() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldGameState::get_OnSharedWorldDataUpdated() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldGameState::get_OnAlignmentTransformsUpdated() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void _Script_MagicLeapSharedWorld::MagicLeapSharedWorldGameState::OnReplicate_SharedWorldData() {
    return;
}
_Script_CoreUObject::Class* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldGameState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState");
    return result;
}
_Script_CoreUObject::Transform _Script_MagicLeapSharedWorld::MagicLeapSharedWorldGameState::CalculateXRCameraRootTransform() {
    return;
}
