#include "..\FUObjectArray.hpp"
#include "ARCandidateObject.hpp"
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
void* _Script_AugmentedReality::ARCandidateObject::get_BoundingBox() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_AugmentedReality::ARCandidateObject::get_CandidateObjectData() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AugmentedReality::ARCandidateObject::get_FriendlyName() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARCandidateObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARCandidateObject");
    return result;
}
void _Script_AugmentedReality::ARCandidateObject::SetFriendlyName(void* NewName) {
    return;
}
void _Script_AugmentedReality::ARCandidateObject::SetBoundingBox(_Script_CoreUObject::Box& InBoundingBox) {
    return;
}
void _Script_AugmentedReality::ARCandidateObject::SetCandidateObjectData(void*& InCandidateObject) {
    return;
}
void* _Script_AugmentedReality::ARCandidateObject::GetFriendlyName() {
    return;
}
void* _Script_AugmentedReality::ARCandidateObject::GetCandidateObjectData() {
    return;
}
_Script_CoreUObject::Box _Script_AugmentedReality::ARCandidateObject::GetBoundingBox() {
    return;
}
