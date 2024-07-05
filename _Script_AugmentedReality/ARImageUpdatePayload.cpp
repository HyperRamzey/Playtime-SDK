#include "..\FUObjectArray.hpp"
#include "ARCandidateImage.hpp"
#include "ARImageUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARImageUpdatePayload::get_SessionPayload() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AugmentedReality::ARImageUpdatePayload::get_WorldTransform() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARImageUpdatePayload::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.ARImageUpdatePayload");
    return result;
}
_Script_AugmentedReality::ARCandidateImage*& _Script_AugmentedReality::ARImageUpdatePayload::get_DetectedImage() {
    return *(_Script_AugmentedReality::ARCandidateImage**)((uintptr_t)this + 0x50);
}
void* _Script_AugmentedReality::ARImageUpdatePayload::get_EstimatedSize() {
    return (void*)((uintptr_t)this + 0x58);
}
