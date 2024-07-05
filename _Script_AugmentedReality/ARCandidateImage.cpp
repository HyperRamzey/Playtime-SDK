#include "..\FUObjectArray.hpp"
#include "ARCandidateImage.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
_Script_Engine::Texture2D*& _Script_AugmentedReality::ARCandidateImage::get_CandidateTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x30);
}
void* _Script_AugmentedReality::ARCandidateImage::get_FriendlyName() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_AugmentedReality::ARCandidateImage::get_Width() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_AugmentedReality::ARCandidateImage::get_Height() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float _Script_AugmentedReality::ARCandidateImage::GetPhysicalHeight() {
    return;
}
void* _Script_AugmentedReality::ARCandidateImage::get_Orientation() {
    return (void*)((uintptr_t)this + 0x50);
}
float _Script_AugmentedReality::ARCandidateImage::GetPhysicalWidth() {
    return;
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARCandidateImage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARCandidateImage");
    return result;
}
void* _Script_AugmentedReality::ARCandidateImage::GetOrientation() {
    return;
}
void* _Script_AugmentedReality::ARCandidateImage::GetFriendlyName() {
    return;
}
_Script_Engine::Texture2D* _Script_AugmentedReality::ARCandidateImage::GetCandidateTexture() {
    return;
}
