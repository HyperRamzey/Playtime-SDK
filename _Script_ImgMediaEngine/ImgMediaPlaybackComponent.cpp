#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "ImgMediaPlaybackComponent.hpp"
float& _Script_ImgMediaEngine::ImgMediaPlaybackComponent::get_Width() {
    return *(float*)((uintptr_t)this + 0xb0);
}
float& _Script_ImgMediaEngine::ImgMediaPlaybackComponent::get_LODBias() {
    return *(float*)((uintptr_t)this + 0xb4);
}
_Script_CoreUObject::Class* _Script_ImgMediaEngine::ImgMediaPlaybackComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ImgMediaEngine.ImgMediaPlaybackComponent");
    return result;
}
