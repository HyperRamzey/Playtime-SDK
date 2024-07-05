#include "..\FUObjectArray.hpp"
#include "ARSharedWorldGameMode.hpp"
#include "ARSharedWorldGameState.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\GameMode.hpp"
int32_t& _Script_AugmentedReality::ARSharedWorldGameMode::get_BufferSizePerChunk() {
    return *(int32_t*)((uintptr_t)this + 0x308);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARSharedWorldGameMode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARSharedWorldGameMode");
    return result;
}
_Script_AugmentedReality::ARSharedWorldGameState* _Script_AugmentedReality::ARSharedWorldGameMode::GetARSharedWorldGameState() {
    return;
}
void _Script_AugmentedReality::ARSharedWorldGameMode::SetPreviewImageData(void* ImageData) {
    return;
}
void _Script_AugmentedReality::ARSharedWorldGameMode::SetARWorldSharingIsReady() {
    return;
}
void _Script_AugmentedReality::ARSharedWorldGameMode::SetARSharedWorldData(void* ARWorldData) {
    return;
}
